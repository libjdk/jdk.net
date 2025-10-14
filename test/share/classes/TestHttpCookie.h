#ifndef _TestHttpCookie_h_
#define _TestHttpCookie_h_
//$ class TestHttpCookie
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace net {
		class HttpCookie;
	}
}
namespace java {
	namespace util {
		class List;
	}
}

class $export TestHttpCookie : public ::java::lang::Object {
	$class(TestHttpCookie, 0, ::java::lang::Object)
public:
	TestHttpCookie();
	void init$($String* cHeader);
	virtual ::TestHttpCookie* a(int32_t index, int64_t a);
	virtual ::TestHttpCookie* a(int64_t a);
	virtual ::TestHttpCookie* c(int32_t index, $String* c);
	virtual ::TestHttpCookie* c($String* c);
	virtual ::TestHttpCookie* cu(int32_t index, $String* cu);
	virtual ::TestHttpCookie* cu($String* cu);
	virtual ::TestHttpCookie* d(int32_t index, $String* d);
	virtual ::TestHttpCookie* d($String* d);
	static void dm($String* domain, $String* host, bool matches);
	virtual ::TestHttpCookie* dsc(int32_t index, bool dsc);
	virtual ::TestHttpCookie* dsc(bool dsc);
	static void eq(::java::net::HttpCookie* ck1, ::java::net::HttpCookie* ck2, bool same);
	static void header($String* prompt);
	virtual ::TestHttpCookie* httpOnly(int32_t index, bool b);
	virtual ::TestHttpCookie* httpOnly(bool b);
	static void main($StringArray* args);
	static void misc();
	virtual ::TestHttpCookie* n(int32_t index, $String* n);
	virtual ::TestHttpCookie* n($String* n);
	static void netscape();
	virtual ::TestHttpCookie* nil();
	virtual ::TestHttpCookie* p(int32_t index, $String* p);
	virtual ::TestHttpCookie* p($String* p);
	virtual ::TestHttpCookie* port(int32_t index, $String* p);
	virtual ::TestHttpCookie* port($String* p);
	virtual void raiseError($String* attr, $String* realValue, $String* expectedValue);
	static void raiseError($String* prompt);
	static void rfc2965();
	static void runTests();
	static ::TestHttpCookie* test($String* cookieHeader);
	virtual ::TestHttpCookie* v(int32_t index, $String* v);
	virtual ::TestHttpCookie* v($String* v);
	virtual ::TestHttpCookie* ver(int32_t index, int32_t ver);
	virtual ::TestHttpCookie* ver(int32_t ver);
	static int32_t testCount;
	$String* cHeader = nullptr;
	::java::util::List* cookies = nullptr;
};

#endif // _TestHttpCookie_h_