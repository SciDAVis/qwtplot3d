
set( CMAKE_AUTORCC ON )

set( SRCS
  "main.cpp"
  "mesh2mainwindow.cpp"
  "lightingdlg.cpp"
  "designerworkaround.cpp"
  "mesh.cpp"
  )
set( HEADERS
  "mesh2mainwindow.h"
  "functions.h"
  "lightingdlg.h"
  "femreader.h"
  "designerworkaround.h"
  )
set( FORMS
  "mesh2mainwindowbase.ui"
  "lightingdlgbase.ui"
  )

add_executable( mesh2 WIN32
  ${SRCS}
  ${HEADERS}
  ${FORMS}
  "images.qrc"
  )

target_link_libraries( mesh2 qwtplot3d )
