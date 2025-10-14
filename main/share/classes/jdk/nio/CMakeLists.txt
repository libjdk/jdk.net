#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.jdk.nio_SRCS)
file(GLOB classes.jdk.nio_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.jdk.nio_HEADERS}) 
list(LENGTH classes.jdk.nio_SRCS classes.jdk.nio_SRCS_LENGTH)
if(classes.jdk.nio_SRCS_LENGTH)
	add_library(classes.jdk.nio OBJECT "${classes.jdk.nio_SRCS}" "${classes.jdk.nio_HEADERS}")
	jcpp_enable_bigobj(classes.jdk.nio)
endif()