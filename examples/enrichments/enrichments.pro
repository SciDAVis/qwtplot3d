include( ../common.pro )

SOURCES =  src/main.cpp \
		       src/enrichmentmainwindow.cpp \
		       src/enrichments.cpp 

HEADERS =  src/enrichmentmainwindow.h \
					 src/enrichments.h 
	 
!isEmpty( ISQT4 ) {
  FORMS =  src/enrichmentmainwindowbase4.ui
}
isEmpty( ISQT4 ) {
  FORMS =  src/enrichmentmainwindowbase.ui
}

