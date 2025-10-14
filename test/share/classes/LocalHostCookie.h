#ifndef _LocalHostCookie_h_
#define _LocalHostCookie_h_
//$ class LocalHostCookie
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export LocalHostCookie : public ::java::lang::Object {
	$class(LocalHostCookie, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LocalHostCookie();
	void init$();
	static void main($StringArray* args);
	virtual void runTest();
};

#endif // _LocalHostCookie_h_