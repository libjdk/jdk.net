#machine generated

add_subdirectory("net")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.jdk.internal_SRCS)
file(GLOB test-classes.jdk.internal_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.jdk.internal_HEADERS}) 
list(LENGTH test-classes.jdk.internal_SRCS test-classes.jdk.internal_SRCS_LENGTH)
if(test-classes.jdk.internal_SRCS_LENGTH)
	add_library(test-classes.jdk.internal OBJECT "${test-classes.jdk.internal_SRCS}" "${test-classes.jdk.internal_HEADERS}")
	jcpp_enable_bigobj(test-classes.jdk.internal)
endif()