#ifndef _B6644726_h_
#define _B6644726_h_
//$ class B6644726
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class List;
	}
}

class $export B6644726 : public ::java::lang::Object {
	$class(B6644726, $NO_CLASS_INIT, ::java::lang::Object)
public:
	B6644726();
	void init$();
	static void fail($String* msg);
	static bool isIn(::java::util::List* lst, $String* cookie);
	static void main($StringArray* args);
	static void testCookieStore();
};

#endif // _B6644726_h_