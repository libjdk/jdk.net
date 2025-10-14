#ifndef _jdk_internal_net_http_hpack_BuffersTestingKit$1_h_
#define _jdk_internal_net_http_hpack_BuffersTestingKit$1_h_
//$ class jdk.internal.net.http.hpack.BuffersTestingKit$1
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace lang {
		class Iterable;
	}
}

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace hpack {

class BuffersTestingKit$1 : public ::java::util::Iterator {
	$class(BuffersTestingKit$1, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	BuffersTestingKit$1();
	void init$(::java::lang::Iterable* val$source);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	::java::lang::Iterable* val$source = nullptr;
	::java::util::Iterator* it = nullptr;
};

				} // hpack
			} // http
		} // net
	} // internal
} // jdk

#endif // _jdk_internal_net_http_hpack_BuffersTestingKit$1_h_