
set( CMAKE_AUTOUIC ON )

if( WIN32 AND BUILD_SHARED_LIBS )
  add_compile_definitions( QWT3D_DLL )
endif()

set( RC_ICON "${CMAKE_CURRENT_SOURCE_DIR}/icon.rc" )

add_subdirectory(axes)

add_subdirectory(autoswitch)

add_subdirectory(enrichments)

add_subdirectory(mesh2)

add_subdirectory(simpleplot)
	