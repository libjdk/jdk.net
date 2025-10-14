#ifndef _HttpInputStreamTest_h_
#define _HttpInputStreamTest_h_
//$ class HttpInputStreamTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DEBUG")
#undef DEBUG

namespace java {
	namespace net {
		namespace http {
			class HttpHeaders;
		}
	}
}
namespace java {
	namespace util {
		class Optional;
	}
}

class $export HttpInputStreamTest : public ::java::lang::Object {
	$class(HttpInputStreamTest, 0, ::java::lang::Object)
public:
	HttpInputStreamTest();
	void init$();
	static ::java::util::Optional* getCharset(::java::net::http::HttpHeaders* headers);
	static $String* lambda$getCharset$0($String* x);
	static bool lambda$getCharset$1($String* x);
	static $String* lambda$getCharset$2($String* x);
	static void main($StringArray* args);
	static bool $assertionsDisabled;
	static bool DEBUG;
};

#pragma pop_macro("DEBUG")

#endif // _HttpInputStreamTest_h_