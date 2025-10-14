#ifndef _jdk_internal_net_http_AbstractRandomTest_h_
#define _jdk_internal_net_http_AbstractRandomTest_h_
//$ class jdk.internal.net.http.AbstractRandomTest
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Long;
	}
}
namespace java {
	namespace util {
		class Random;
	}
}

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

class $export AbstractRandomTest : public ::java::lang::Object {
	$class(AbstractRandomTest, 0, ::java::lang::Object)
public:
	AbstractRandomTest();
	void init$();
	static int64_t getSeed();
	static ::java::lang::Long* getSystemSeed();
	static int32_t randomRange(int32_t lower, int32_t upper);
	static ::java::util::Random* random;
};

			} // http
		} // net
	} // internal
} // jdk

#endif // _jdk_internal_net_http_AbstractRandomTest_h_