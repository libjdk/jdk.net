#ifndef _Http1ChunkedTest_h_
#define _Http1ChunkedTest_h_
//$ class Http1ChunkedTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("LOREM")
#undef LOREM
#pragma push_macro("PRINT_BODY")
#undef PRINT_BODY

namespace java {
	namespace util {
		class List;
	}
}

class $export Http1ChunkedTest : public ::java::lang::Object {
	$class(Http1ChunkedTest, 0, ::java::lang::Object)
public:
	Http1ChunkedTest();
	void init$();
	static void main($StringArray* args);
	static void test($String* name, $String* headers, ::java::util::List* body, int64_t delay);
	static void validate($String* response);
	static const bool PRINT_BODY = false;
	static $String* LOREM;
};

#pragma pop_macro("LOREM")
#pragma pop_macro("PRINT_BODY")

#endif // _Http1ChunkedTest_h_