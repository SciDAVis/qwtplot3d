
set( SRCS
  "main.cpp"
  "enrichments.cpp"
  "enrichmentmainwindow.cpp"
  )
set( HEADERS
  "enrichments.h"
  "enrichmentmainwindow.h"
  )
set( FORMS
  "enrichmentmainwindowbase.ui"
  )

add_executable( enrichments WIN32
  ${SRCS}
  ${HEADERS}
  ${FORMS}
  ${RC_ICON}
  )

target_link_libraries( enrichments qwtplot3d )
