#ifndef _BodyProcessorInputStreamTest_h_
#define _BodyProcessorInputStreamTest_h_
//$ class BodyProcessorInputStreamTest
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

class $export BodyProcessorInputStreamTest : public ::java::lang::Object {
	$class(BodyProcessorInputStreamTest, 0, ::java::lang::Object)
public:
	BodyProcessorInputStreamTest();
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

#endif // _BodyProcessorInputStreamTest_h_