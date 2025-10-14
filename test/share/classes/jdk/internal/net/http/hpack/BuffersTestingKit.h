#ifndef _jdk_internal_net_http_hpack_BuffersTestingKit_h_
#define _jdk_internal_net_http_hpack_BuffersTestingKit_h_
//$ class jdk.internal.net.http.hpack.BuffersTestingKit
//$ extends java.lang.Object

#include <java/lang/Object.h>

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
		class Iterator;
		class Random;
		class Stack;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Consumer;
			class Function;
			class Supplier;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace hpack {

class $export BuffersTestingKit : public ::java::lang::Object {
	$class(BuffersTestingKit, 0, ::java::lang::Object)
public:
	BuffersTestingKit();
	void init$();
	static ::java::nio::ByteBuffer* concat(::java::lang::Iterable* split);
	static ::java::nio::ByteBuffer* concat(::java::lang::Iterable* split, ::java::util::function::Function* concatBufferFactory);
	static void forEachSplit(::java::nio::ByteBuffer* bb, ::java::util::function::Consumer* action);
	static void forEachSplit(int32_t n, ::java::util::function::Consumer* action);
	static void forEachSplit(int32_t n, ::java::util::Stack* path, ::java::util::function::Consumer* action);
	static ::java::lang::Iterable* injectEmptyBuffers(::java::lang::Iterable* source);
	static ::java::lang::Iterable* injectEmptyBuffers(::java::lang::Iterable* source, ::java::util::function::Supplier* emptyBufferFactory);
	static void lambda$forEachSplit$3(::java::nio::ByteBuffer* bb, ::java::util::function::Consumer* action, ::java::lang::Iterable* lengths);
	static ::java::nio::ByteBuffer* lambda$injectEmptyBuffers$1();
	static ::java::util::Iterator* lambda$injectEmptyBuffers$2(::java::lang::Iterable* source, ::java::util::function::Supplier* emptyBufferFactory);
	static ::java::util::Iterator* lambda$relocateBuffers$0(::java::lang::Iterable* source);
	static ::java::nio::ByteBuffer* relocate(::java::nio::ByteBuffer* buffer, int32_t newPosition, int32_t newCapacity);
	static ::java::lang::Iterable* relocateBuffers(::java::lang::Iterable* source);
	static ::java::util::Random* random;
};

				} // hpack
			} // http
		} // net
	} // internal
} // jdk

#endif // _jdk_internal_net_http_hpack_BuffersTestingKit_h_