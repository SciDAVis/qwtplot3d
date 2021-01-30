
add_executable( autoswitch "autoswitch.h" "autoswitch.cpp" ${RC_ICON} )

target_link_libraries( autoswitch qwtplot3d )
