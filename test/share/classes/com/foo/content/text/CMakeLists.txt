#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.com.foo.content_0_SRCS)
file(GLOB test-classes.com.foo.content_0_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.com.foo.content_0_HEADERS}) 
list(LENGTH test-classes.com.foo.content_0_SRCS test-classes.com.foo.content_0_SRCS_LENGTH)
if(test-classes.com.foo.content_0_SRCS_LENGTH)
	add_library(test-classes.com.foo.content_0 OBJECT "${test-classes.com.foo.content_0_SRCS}" "${test-classes.com.foo.content_0_HEADERS}")
	jcpp_enable_bigobj(test-classes.com.foo.content_0)
endif()