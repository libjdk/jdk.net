#ifndef _jdk_internal_net_http_websocket_TestSupport$AssertionFailedException_h_
#define _jdk_internal_net_http_websocket_TestSupport$AssertionFailedException_h_
//$ class jdk.internal.net.http.websocket.TestSupport$AssertionFailedException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace websocket {

class TestSupport$AssertionFailedException : public ::java::lang::RuntimeException {
	$class(TestSupport$AssertionFailedException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	TestSupport$AssertionFailedException();
	void init$($String* message);
	void init$($String* message, $Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)1;
	TestSupport$AssertionFailedException(const TestSupport$AssertionFailedException& e);
	virtual void throw$() override;
	inline TestSupport$AssertionFailedException* operator ->() {
		return (TestSupport$AssertionFailedException*)throwing$;
	}
};

				} // websocket
			} // http
		} // net
	} // internal
} // jdk

#endif // _jdk_internal_net_http_websocket_TestSupport$AssertionFailedException_h_