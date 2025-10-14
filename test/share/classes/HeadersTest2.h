#ifndef _HeadersTest2_h_
#define _HeadersTest2_h_
//$ class HeadersTest2
//$ extends java.lang.Object

#include <java/lang/Array.h>

class HeadersTest2$CompareTest;
namespace java {
	namespace net {
		class URI;
	}
}
namespace java {
	namespace util {
		class List;
	}
}

class $export HeadersTest2 : public ::java::lang::Object {
	$class(HeadersTest2, 0, ::java::lang::Object)
public:
	HeadersTest2();
	void init$();
	static void main($StringArray* args);
	static ::HeadersTest2$CompareTest* test(bool s, ::java::util::List* l1, ::java::util::List* l2);
	static ::java::net::URI* uri;
	static $Array<HeadersTest2$CompareTest>* compareTests;
};

#endif // _HeadersTest2_h_