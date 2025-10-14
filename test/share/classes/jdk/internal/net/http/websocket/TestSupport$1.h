#ifndef _jdk_internal_net_http_websocket_TestSupport$1_h_
#define _jdk_internal_net_http_websocket_TestSupport$1_h_
//$ class jdk.internal.net.http.websocket.TestSupport$1
//$ extends java.util.Iterator

#include <java/lang/Array.h>
#include <java/util/Iterator.h>

namespace java {
	namespace util {
		class List;
	}
}
namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace websocket {
					class TestSupport$F;
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

class TestSupport$1 : public ::java::util::Iterator {
	$class(TestSupport$1, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	TestSupport$1();
	void init$(::java::util::List* val$params, ::jdk::internal::net::http::websocket::TestSupport$F* val$function);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	::jdk::internal::net::http::websocket::TestSupport$F* val$function = nullptr;
	::java::util::List* val$params = nullptr;
	int32_t arity = 0;
	$ints* coordinates = nullptr;
	bool hasNext$ = false;
};

				} // websocket
			} // http
		} // net
	} // internal
} // jdk

#endif // _jdk_internal_net_http_websocket_TestSupport$1_h_