REM set QMAKESPEC=win32-msvc.net
cd mesh2
qmake mesh2.pro
cd ../simpleplot
qmake simpleplot.pro
cd ../autoswitch
qmake autoswitch.pro
cd ../enrichments
qmake enrichments.pro
cd ../axes
qmake axes.pro
cd ..