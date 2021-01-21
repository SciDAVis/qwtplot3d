cmake_minimum_required(VERSION 3.16)

project( QwtPlot3D
  VERSION 0.2.7
  LANGUAGES CXX
  )

set( CMAKE_CXX_STANDARD 17 )
set( CMAKE_CXX_STANDARD_REQUIRED TRUE )
set( CMAKE_CXX_EXTENSIONS OFF )

set( CMAKE_AUTOUIC OFF )
set( CMAKE_AUTORCC OFF )
set( CMAKE_AUTOMOC ON )

if( MSVC )
  # /wd4458 Silent "declaration of %1 hides %2 ..."
  set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /EHsc /W4 /permissive- /wd4458" )
  if( CMAKE_CXX_COMPILER_ID STREQUAL "Clang" )
    set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-nonportable-include-path" )
    add_compile_definitions( _CRT_SECURE_NO_WARNINGS )
  else()
    add_compile_options( "/MP" )
  endif()
else()
  set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fexceptions -Wall -Wextra -pedantic" )
  set( CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -pedantic" )
endif()

find_package( Qt5 COMPONENTS Core Gui OpenGL REQUIRED )

find_package( OpenGL COMPONENTS OpenGL REQUIRED )

find_library( GL2PS_LIBRARY NAMES gl2ps )
if( GL2PS_LIBRARY )
  find_path ( GL2PS_INCLUDE_DIR NAMES gl2ps.h REQUIRED )
  message( STATUS "Found GL2PS: ${GL2PS_LIBRARY}, with include: ${GL2PS_INCLUDE_DIR}" )
endif()

set( SRCS
  "src/qwt3d_axis.cpp"
  "src/qwt3d_color.cpp"
  "src/qwt3d_coordsys.cpp"
  "src/qwt3d_drawable.cpp"
  "src/qwt3d_mousekeyboard.cpp"
  "src/qwt3d_movements.cpp"
  "src/qwt3d_lighting.cpp"
  "src/qwt3d_colorlegend.cpp"
  "src/qwt3d_plot.cpp"
  "src/qwt3d_label.cpp"
  "src/qwt3d_types.cpp"
  "src/qwt3d_enrichment_std.cpp"
  "src/qwt3d_autoscaler.cpp"
  "src/qwt3d_io_reader.cpp"
  "src/qwt3d_io.cpp"
  "src/qwt3d_scale.cpp"
  "src/qwt3d_gridmapping.cpp"
  "src/qwt3d_parametricsurface.cpp"
  "src/qwt3d_function.cpp"
  "src/qwt3d_surfaceplot.cpp"
  "src/qwt3d_gridplot.cpp"
  "src/qwt3d_meshplot.cpp"
  "src/qwt3d_io_gl2ps.cpp"
   )

set( HEADERS
  "include/qwt3d_color.h"
  "include/qwt3d_global.h"
  "include/qwt3d_types.h"
  "include/qwt3d_axis.h"
  "include/qwt3d_coordsys.h"
  "include/qwt3d_drawable.h"
  "include/qwt3d_helper.h"
  "include/qwt3d_label.h"
  "include/qwt3d_openglhelper.h"
  "include/qwt3d_colorlegend.h"
  "include/qwt3d_plot.h"
  "include/qwt3d_enrichment.h"
  "include/qwt3d_enrichment_std.h"
  "include/qwt3d_autoscaler.h"
  "include/qwt3d_autoptr.h"
  "include/qwt3d_io.h"
  "include/qwt3d_io_reader.h"
  "include/qwt3d_scale.h"
  "include/qwt3d_portability.h"
  "include/qwt3d_mapping.h"
  "include/qwt3d_gridmapping.h"
  "include/qwt3d_parametricsurface.h"
  "include/qwt3d_function.h"
  "include/qwt3d_surfaceplot.h"
  "include/qwt3d_volumeplot.h"
  "include/qwt3d_graphplot.h"
  "include/qwt3d_multiplot.h"
  "include/qwt3d_io_gl2ps.h"
  )

add_library( qwtplot3d ${SRCS} ${HEADERS} )

target_link_libraries( qwtplot3d Qt5::Core Qt5::Gui Qt5::OpenGL OpenGL::GLU )

target_include_directories( qwtplot3d PUBLIC include )

if( GL2PS_LIBRARY )
  target_link_libraries( qwtplot3d ${GL2PS_LIBRARY} )
  target_include_directories( qwtplot3d PRIVATE ${GL2PS_INCLUDE_DIR} )
else()
  target_sources( qwtplot3d PRIVATE "3rdparty/gl2ps/gl2ps.c" "3rdparty/gl2ps/gl2ps.h" )
endif()

if( WIN32 AND BUILD_SHARED_LIBS )
  target_compile_definitions( qwtplot3d PRIVATE QWT3D_DLL QWT3D_MAKEDLL )
endif()

if( ${CMAKE_SOURCE_DIR} STREQUAL ${PROJECT_SOURCE_DIR} )
  add_subdirectory( examples )
endif()

# Don't install qwtplot3d static library and headers if it is built as a subproject
if( "${CMAKE_SOURCE_DIR}" STREQUAL "${PROJECT_SOURCE_DIR}" )
  install( TARGETS qwtplot3d
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
    PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/qwtplot3d
    )
elseif( BUILD_SHARED_LIBS )
  install( TARGETS qwtplot3d
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    )
endif()
