#machine generated

add_subdirectory("tck")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.org.reactivestr_4_SRCS)
file(GLOB test-classes.org.reactivestr_4_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.org.reactivestr_4_HEADERS}) 
list(LENGTH test-classes.org.reactivestr_4_SRCS test-classes.org.reactivestr_4_SRCS_LENGTH)
if(test-classes.org.reactivestr_4_SRCS_LENGTH)
	add_library(test-classes.org.reactivestr_4 OBJECT "${test-classes.org.reactivestr_4_SRCS}" "${test-classes.org.reactivestr_4_HEADERS}")
	jcpp_enable_bigobj(test-classes.org.reactivestr_4)
endif()