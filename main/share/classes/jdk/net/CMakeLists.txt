#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.jdk.net_SRCS)
file(GLOB classes.jdk.net_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.jdk.net_HEADERS}) 
list(LENGTH classes.jdk.net_SRCS classes.jdk.net_SRCS_LENGTH)
if(classes.jdk.net_SRCS_LENGTH)
	add_library(classes.jdk.net OBJECT "${classes.jdk.net_SRCS}" "${classes.jdk.net_HEADERS}")
	jcpp_enable_bigobj(classes.jdk.net)
endif()