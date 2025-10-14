#ifndef _jdk_internal_net_http_hpack_BuffersTestingKit$2_h_
#define _jdk_internal_net_http_hpack_BuffersTestingKit$2_h_
//$ class jdk.internal.net.http.hpack.BuffersTestingKit$2
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace lang {
		class Iterable;
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Supplier;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace hpack {

class BuffersTestingKit$2 : public ::java::util::Iterator {
	$class(BuffersTestingKit$2, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	BuffersTestingKit$2();
	void init$(::java::lang::Iterable* val$source, ::java::util::function::Supplier* val$emptyBufferFactory);
	::java::nio::ByteBuffer* calculateNext();
	virtual bool hasNext() override;
	virtual $Object* next() override;
	::java::util::function::Supplier* val$emptyBufferFactory = nullptr;
	::java::lang::Iterable* val$source = nullptr;
	::java::util::Iterator* it = nullptr;
	::java::nio::ByteBuffer* next$ = nullptr;
};

				} // hpack
			} // http
		} // net
	} // internal
} // jdk

#endif // _jdk_internal_net_http_hpack_BuffersTestingKit$2_h_