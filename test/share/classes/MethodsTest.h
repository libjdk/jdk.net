#ifndef _MethodsTest_h_
#define _MethodsTest_h_
//$ class MethodsTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("FORBIDDEN")
#undef FORBIDDEN
#pragma push_macro("TEST_URI")
#undef TEST_URI

namespace java {
	namespace net {
		class URI;
	}
}
namespace java {
	namespace net {
		namespace http {
			class HttpClient;
		}
	}
}

class $export MethodsTest : public ::java::lang::Object {
	$class(MethodsTest, 0, ::java::lang::Object)
public:
	MethodsTest();
	void init$();
	static void bad($String* name);
	static void good($String* name);
	static void main($StringArray* args);
	static ::java::net::URI* TEST_URI;
	static $String* FORBIDDEN;
	static ::java::net::http::HttpClient* client;
};

#pragma pop_macro("FORBIDDEN")
#pragma pop_macro("TEST_URI")

#endif // _MethodsTest_h_