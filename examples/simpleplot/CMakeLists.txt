
add_executable( simpleplot "simpleplot.cpp" ${RC_ICON} )

target_link_libraries( simpleplot qwtplot3d )
