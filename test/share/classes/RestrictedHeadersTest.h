#ifndef _RestrictedHeadersTest_h_
#define _RestrictedHeadersTest_h_
//$ class RestrictedHeadersTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Set;
	}
}

class $export RestrictedHeadersTest : public ::java::lang::Object {
	$class(RestrictedHeadersTest, 0, ::java::lang::Object)
public:
	RestrictedHeadersTest();
	void init$();
	static void checkHeader($String* name, $String* value, bool succeed);
	static void main($StringArray* args);
	static void runDefaultTest();
	static void runTest(::java::util::Set* args);
	static ::java::util::Set* defaultRestrictedHeaders;
};

#endif // _RestrictedHeadersTest_h_