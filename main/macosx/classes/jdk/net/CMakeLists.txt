#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macosx-classes.jdk.net_SRCS)
file(GLOB macosx-classes.jdk.net_HEADERS *.h *.hpp)
source_group("Include" FILES ${macosx-classes.jdk.net_HEADERS}) 
list(LENGTH macosx-classes.jdk.net_SRCS macosx-classes.jdk.net_SRCS_LENGTH)
if(macosx-classes.jdk.net_SRCS_LENGTH)
	add_library(macosx-classes.jdk.net OBJECT "${macosx-classes.jdk.net_SRCS}" "${macosx-classes.jdk.net_HEADERS}")
	jcpp_enable_bigobj(macosx-classes.jdk.net)
endif()