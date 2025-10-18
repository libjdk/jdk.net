#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macos-classes.jdk.net_SRCS)
file(GLOB macos-classes.jdk.net_HEADERS *.h *.hpp)
source_group("Include" FILES ${macos-classes.jdk.net_HEADERS}) 
list(LENGTH macos-classes.jdk.net_SRCS macos-classes.jdk.net_SRCS_LENGTH)
if(macos-classes.jdk.net_SRCS_LENGTH)
	add_library(macos-classes.jdk.net OBJECT "${macos-classes.jdk.net_SRCS}" "${macos-classes.jdk.net_HEADERS}")
	jcpp_enable_bigobj(macos-classes.jdk.net)
endif()