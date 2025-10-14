#ifndef _HeadersTest2$CompareTest_h_
#define _HeadersTest2$CompareTest_h_
//$ class HeadersTest2$CompareTest
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace net {
		namespace http {
			class HttpRequest;
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}

class $export HeadersTest2$CompareTest : public ::java::lang::Object {
	$class(HeadersTest2$CompareTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HeadersTest2$CompareTest();
	void init$(bool succeed, ::java::util::List* l1, ::java::util::List* l2);
	virtual ::java::net::http::HttpRequest* getRequest(::java::util::List* headers);
	static void print(::java::util::List* list);
	virtual void run();
	bool succeed = false;
	::java::util::List* nameValues1 = nullptr;
	::java::util::List* nameValues2 = nullptr;
};

#endif // _HeadersTest2$CompareTest_h_