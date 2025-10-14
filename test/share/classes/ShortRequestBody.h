#ifndef _ShortRequestBody_h_
#define _ShortRequestBody_h_
//$ class ShortRequestBody
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BODY_LENGTHS")
#undef BODY_LENGTHS
#pragma push_macro("BODY_OFFSETS")
#undef BODY_OFFSETS
#pragma push_macro("BYTE_ARRAY_BODY")
#undef BYTE_ARRAY_BODY
#pragma push_macro("FILE_BODY")
#undef FILE_BODY
#pragma push_macro("MARKER")
#undef MARKER
#pragma push_macro("STRING_BODY")
#undef STRING_BODY

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace lang {
		class Throwable;
	}
}
namespace java {
	namespace net {
		class URI;
	}
}
namespace java {
	namespace net {
		namespace http {
			class HttpClient;
			class HttpRequest$BodyPublisher;
		}
	}
}
namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}
namespace java {
	namespace util {
		namespace function {
			class Supplier;
		}
	}
}

class $export ShortRequestBody : public ::java::lang::Object {
	$class(ShortRequestBody, 0, ::java::lang::Object)
public:
	ShortRequestBody();
	void init$();
	static bool check(bool cond, $Throwable* t, $ObjectArray* failedArgs);
	static void failureBlocking(::java::util::function::Supplier* clientSupplier, ::java::net::URI* uri, ::java::net::http::HttpRequest$BodyPublisher* publisher);
	static void failureNonBlocking(::java::util::function::Supplier* clientSupplier, ::java::net::URI* uri, ::java::net::http::HttpRequest$BodyPublisher* publisher);
	static int32_t fileSize(::java::nio::file::Path* p);
	static ::java::net::http::HttpClient* lambda$main$0();
	static ::java::net::http::HttpClient* lambda$main$1(::java::net::http::HttpClient* sharedClient);
	static void main($StringArray* args);
	static $String* readRequestHeaders(::java::io::InputStream* is);
	static void success(::java::util::function::Supplier* clientSupplier, ::java::net::URI* uri, ::java::net::http::HttpRequest$BodyPublisher* publisher);
	static ::java::nio::file::Path* testSrc;
	static $String* STRING_BODY;
	static $bytes* BYTE_ARRAY_BODY;
	static ::java::nio::file::Path* FILE_BODY;
	static $ints* BODY_LENGTHS;
	static $ints* BODY_OFFSETS;
	static $String* MARKER;
	static $bytes* requestEnd;
};

#pragma pop_macro("BODY_LENGTHS")
#pragma pop_macro("BODY_OFFSETS")
#pragma pop_macro("BYTE_ARRAY_BODY")
#pragma pop_macro("FILE_BODY")
#pragma pop_macro("MARKER")
#pragma pop_macro("STRING_BODY")

#endif // _ShortRequestBody_h_