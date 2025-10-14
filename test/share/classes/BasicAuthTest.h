#ifndef _BasicAuthTest_h_
#define _BasicAuthTest_h_
//$ class BasicAuthTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("POST_BODY")
#undef POST_BODY
#pragma push_macro("RESPONSE")
#undef RESPONSE

class $export BasicAuthTest : public ::java::lang::Object {
	$class(BasicAuthTest, 0, ::java::lang::Object)
public:
	BasicAuthTest();
	void init$();
	static void main($StringArray* args);
	static $volatile(bool) ok;
	static $String* RESPONSE;
	static $String* POST_BODY;
};

#pragma pop_macro("POST_BODY")
#pragma pop_macro("RESPONSE")

#endif // _BasicAuthTest_h_