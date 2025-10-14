#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" linux-classes.jdk.net_SRCS)
file(GLOB linux-classes.jdk.net_HEADERS *.h *.hpp)
source_group("Include" FILES ${linux-classes.jdk.net_HEADERS}) 
list(LENGTH linux-classes.jdk.net_SRCS linux-classes.jdk.net_SRCS_LENGTH)
if(linux-classes.jdk.net_SRCS_LENGTH)
	add_library(linux-classes.jdk.net OBJECT "${linux-classes.jdk.net_SRCS}" "${linux-classes.jdk.net_HEADERS}")
	jcpp_enable_bigobj(linux-classes.jdk.net)
endif()