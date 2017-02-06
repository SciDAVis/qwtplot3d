include( ../common.pro )

SOURCES =  src/main.cpp \
		       src/axesmainwindow.cpp 

HEADERS =  src/axesmainwindow.h \
           src/axes.h

!isEmpty( ISQT4 ) {
  FORMS =  src/axesmainwindowbase4.ui
}
isEmpty( ISQT4 ) {
  FORMS =  src/axesmainwindowbase.ui
}

