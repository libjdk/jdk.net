#machine generated

add_subdirectory("hpack")
add_subdirectory("websocket")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.jdk.internal.ne_1_SRCS)
file(GLOB test-classes.jdk.internal.ne_1_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.jdk.internal.ne_1_HEADERS}) 
list(LENGTH test-classes.jdk.internal.ne_1_SRCS test-classes.jdk.internal.ne_1_SRCS_LENGTH)
if(test-classes.jdk.internal.ne_1_SRCS_LENGTH)
	add_library(test-classes.jdk.internal.ne_1 OBJECT "${test-classes.jdk.internal.ne_1_SRCS}" "${test-classes.jdk.internal.ne_1_HEADERS}")
	jcpp_enable_bigobj(test-classes.jdk.internal.ne_1)
endif()