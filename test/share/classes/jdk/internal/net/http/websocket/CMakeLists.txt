#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.jdk.internal.ne_3_SRCS)
file(GLOB test-classes.jdk.internal.ne_3_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.jdk.internal.ne_3_HEADERS}) 
list(LENGTH test-classes.jdk.internal.ne_3_SRCS test-classes.jdk.internal.ne_3_SRCS_LENGTH)
if(test-classes.jdk.internal.ne_3_SRCS_LENGTH)
	add_library(test-classes.jdk.internal.ne_3 OBJECT "${test-classes.jdk.internal.ne_3_SRCS}" "${test-classes.jdk.internal.ne_3_HEADERS}")
	jcpp_enable_bigobj(test-classes.jdk.internal.ne_3)
endif()