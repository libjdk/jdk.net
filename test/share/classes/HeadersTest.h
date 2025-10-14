#ifndef _HeadersTest_h_
#define _HeadersTest_h_
//$ class HeadersTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ACCEPT_ALL")
#undef ACCEPT_ALL
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
namespace java {
	namespace util {
		namespace function {
			class BiPredicate;
		}
	}
}

class $export HeadersTest : public ::java::lang::Object {
	$class(HeadersTest, 0, ::java::lang::Object)
public:
	HeadersTest();
	void init$();
	static void bad($String* name);
	static void badTimeout();
	static void badURI();
	static void badValue($String* value);
	static void good($String* name);
	static void goodValue($String* value);
	static bool lambda$static$0($String* x, $String* y);
	static void main($StringArray* args);
	static void nullHeaders();
	static void nullName();
	static void nullTimeout();
	static void nullURI();
	static void nullValue();
	static ::java::util::function::BiPredicate* ACCEPT_ALL;
	static ::java::net::URI* TEST_URI;
	static ::java::net::http::HttpClient* client;
};

#pragma pop_macro("ACCEPT_ALL")
#pragma pop_macro("TEST_URI")

#endif // _HeadersTest_h_