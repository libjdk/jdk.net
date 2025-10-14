#machine generated

add_subdirectory("support")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.org.reactivestr_6_SRCS)
file(GLOB test-classes.org.reactivestr_6_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.org.reactivestr_6_HEADERS}) 
list(LENGTH test-classes.org.reactivestr_6_SRCS test-classes.org.reactivestr_6_SRCS_LENGTH)
if(test-classes.org.reactivestr_6_SRCS_LENGTH)
	add_library(test-classes.org.reactivestr_6 OBJECT "${test-classes.org.reactivestr_6_SRCS}" "${test-classes.org.reactivestr_6_HEADERS}")
	jcpp_enable_bigobj(test-classes.org.reactivestr_6)
endif()