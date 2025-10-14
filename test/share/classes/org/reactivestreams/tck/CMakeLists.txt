#machine generated

add_subdirectory("flow")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.org.reactivestr_5_SRCS)
file(GLOB test-classes.org.reactivestr_5_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.org.reactivestr_5_HEADERS}) 
list(LENGTH test-classes.org.reactivestr_5_SRCS test-classes.org.reactivestr_5_SRCS_LENGTH)
if(test-classes.org.reactivestr_5_SRCS_LENGTH)
	add_library(test-classes.org.reactivestr_5 OBJECT "${test-classes.org.reactivestr_5_SRCS}" "${test-classes.org.reactivestr_5_HEADERS}")
	jcpp_enable_bigobj(test-classes.org.reactivestr_5)
endif()