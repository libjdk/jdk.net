#ifndef _jdk_internal_net_http_websocket_TestSupport_h_
#define _jdk_internal_net_http_websocket_TestSupport_h_
//$ class jdk.internal.net.http.websocket.TestSupport
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class Iterable;
		class Throwable;
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
		class List;
		class Stack;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Consumer;
			class Predicate;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace websocket {
					class TestSupport$F;
					class TestSupport$F2;
					class TestSupport$F3;
					class TestSupport$F4;
					class TestSupport$F5;
					class TestSupport$ThrowingProcedure;
				}
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace websocket {

class TestSupport : public ::java::lang::Object {
	$class(TestSupport, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestSupport();
	void init$();
	static $Throwable* assertThrows($Class* clazz, ::jdk::internal::net::http::websocket::TestSupport$ThrowingProcedure* code);
	static $Throwable* assertThrows($Class* clazz, $String* messageRegex, ::jdk::internal::net::http::websocket::TestSupport$ThrowingProcedure* code);
	static $Throwable* assertThrows(::java::util::function::Predicate* predicate, ::jdk::internal::net::http::websocket::TestSupport$ThrowingProcedure* code);
	static ::java::util::Iterator* cartesianIterator(::java::util::List* a, ::java::util::List* b, ::jdk::internal::net::http::websocket::TestSupport$F2* f2);
	static ::java::util::Iterator* cartesianIterator(::java::util::List* a, ::java::util::List* b, ::java::util::List* c, ::jdk::internal::net::http::websocket::TestSupport$F3* f3);
	static ::java::util::Iterator* cartesianIterator(::java::util::List* a, ::java::util::List* b, ::java::util::List* c, ::java::util::List* d, ::jdk::internal::net::http::websocket::TestSupport$F4* f4);
	static ::java::util::Iterator* cartesianIterator(::java::util::List* a, ::java::util::List* b, ::java::util::List* c, ::java::util::List* d, ::java::util::List* e, ::jdk::internal::net::http::websocket::TestSupport$F5* f5);
	static ::java::util::Iterator* cartesianIterator(::java::util::List* params, ::jdk::internal::net::http::websocket::TestSupport$F* function);
	static void forEachBufferPartition(::java::nio::ByteBuffer* src, ::java::util::function::Consumer* action);
	static void forEachPartition(int32_t n, ::java::util::function::Consumer* action);
	static void forEachPartition(int32_t n, ::java::util::Stack* path, ::java::util::function::Consumer* action);
	static void forEachPermutation(int32_t n, ::java::util::function::Consumer* c);
	static ::java::nio::ByteBuffer* fullCopy(::java::nio::ByteBuffer* src);
	static ::java::util::Iterator* iteratorOf($ObjectArray* elements);
	static ::java::util::Iterator* iteratorOf1(Object$* element);
	static bool lambda$assertThrows$5($Class* clazz, $String* messageRegex, $Throwable* e);
	static $Object* lambda$cartesianIterator$0(::jdk::internal::net::http::websocket::TestSupport$F2* f2, $ObjectArray* p);
	static $Object* lambda$cartesianIterator$1(::jdk::internal::net::http::websocket::TestSupport$F3* f3, $ObjectArray* p);
	static $Object* lambda$cartesianIterator$2(::jdk::internal::net::http::websocket::TestSupport$F4* f4, $ObjectArray* p);
	static $Object* lambda$cartesianIterator$3(::jdk::internal::net::http::websocket::TestSupport$F5* f5, $ObjectArray* p);
	static void lambda$forEachBufferPartition$4(::java::nio::ByteBuffer* src, ::java::util::function::Consumer* action, ::java::lang::Iterable* lengths);
	static ::java::util::Iterator* limit(int32_t maxElements, ::java::util::Iterator* elements);
	static void permutations(int32_t i, $ints* a, ::java::util::function::Consumer* c);
	static void swap($ints* a, int32_t i, int32_t j);
};

				} // websocket
			} // http
		} // net
	} // internal
} // jdk

#endif // _jdk_internal_net_http_websocket_TestSupport_h_