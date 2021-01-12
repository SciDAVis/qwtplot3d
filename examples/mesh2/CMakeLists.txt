
set( CMAKE_AUTORCC ON )

set( SRCS
  "main.cpp"
  "mesh2mainwindow.cpp"
  "colormapreader.cpp"
  "lightingdlg.cpp"
  "designerworkaround.cpp" 
  "mesh.cpp"
  )
set( HEADERS
  "mesh2mainwindow.h"
  "functions.h"
  "colormapreader.h"
  "lightingdlg.h"
  "femreader.h"
  "designerworkaround.h"
  )
set( FORMS
  "mesh2mainwindowbase4.ui"
  "lightingdlgbase4.ui"
  )

add_executable( mesh2 WIN32
  ${SRCS}
  ${HEADERS}
  ${FORMS}
  "images.qrc"
  )

target_link_libraries( mesh2 qwtplot3d )
