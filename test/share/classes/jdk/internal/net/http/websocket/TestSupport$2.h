#ifndef _jdk_internal_net_http_websocket_TestSupport$2_h_
#define _jdk_internal_net_http_websocket_TestSupport$2_h_
//$ class jdk.internal.net.http.websocket.TestSupport$2
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace websocket {

class TestSupport$2 : public ::java::util::Iterator {
	$class(TestSupport$2, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	TestSupport$2();
	void init$(int32_t val$maxElements, ::java::util::Iterator* val$elements);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	::java::util::Iterator* val$elements = nullptr;
	int32_t val$maxElements = 0;
	int32_t count = 0;
};

				} // websocket
			} // http
		} // net
	} // internal
} // jdk

#endif // _jdk_internal_net_http_websocket_TestSupport$2_h_