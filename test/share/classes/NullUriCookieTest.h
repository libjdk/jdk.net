#ifndef _NullUriCookieTest_h_
#define _NullUriCookieTest_h_
//$ class NullUriCookieTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export NullUriCookieTest : public ::java::lang::Object {
	$class(NullUriCookieTest, 0, ::java::lang::Object)
public:
	NullUriCookieTest();
	void init$();
	static void checkCookieNullUri();
	static void checkFail($String* exp);
	static void main($StringArray* args);
	static bool fail;
};

#endif // _NullUriCookieTest_h_