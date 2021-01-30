
set( SRCS
  "main.cpp"
  "axesmainwindow.cpp"
  )
set( HEADERS
  "axes.h"
  "axesmainwindow.h"
  )
set( FORMS
  "axesmainwindowbase.ui"
  )

add_executable( axes WIN32
  ${SRCS}
  ${HEADERS}
  ${FORMS}
  )

target_link_libraries( axes qwtplot3d )
