#ifndef _HandshakeFailureTest_h_
#define _HandshakeFailureTest_h_
//$ class HandshakeFailureTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("TIMES")
#undef TIMES
#pragma push_macro("WSAECONNABORTED_MSG")
#undef WSAECONNABORTED_MSG

class HandshakeFailureTest$ExpectedExceptionType;
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
			class HttpClient$Version;
		}
	}
}

class $export HandshakeFailureTest : public ::java::lang::Object {
	$class(HandshakeFailureTest, 0, ::java::lang::Object)
public:
	HandshakeFailureTest();
	void init$();
	static ::HandshakeFailureTest$ExpectedExceptionType* checkExceptionOrCause($Throwable* t);
	static ::java::net::http::HttpClient* getClient();
	static bool isWsaeConnAborted($Throwable* t);
	static void main($StringArray* args);
	virtual void testAsyncDiffClient(::java::net::URI* uri, ::java::net::http::HttpClient$Version* version);
	virtual void testAsyncSameClient(::java::net::URI* uri, ::java::net::http::HttpClient$Version* version);
	virtual void testSyncDiffClient(::java::net::URI* uri, ::java::net::http::HttpClient$Version* version);
	virtual void testSyncSameClient(::java::net::URI* uri, ::java::net::http::HttpClient$Version* version);
	static const int32_t TIMES = 10;
	static $String* tlsProtocol;
	static int32_t maxWsaeConnAborted;
	static $String* WSAECONNABORTED_MSG;
	static bool isWindows;
};

#pragma pop_macro("TIMES")
#pragma pop_macro("WSAECONNABORTED_MSG")

#endif // _HandshakeFailureTest_h_