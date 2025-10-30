#include <jdk/internal/net/http/websocket/TestSupport$AssertionFailedException.h>

#include <jdk/internal/net/http/websocket/TestSupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $TestSupport = ::jdk::internal::net::http::websocket::TestSupport;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace websocket {

$FieldInfo _TestSupport$AssertionFailedException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TestSupport$AssertionFailedException, serialVersionUID)},
	{}
};

$MethodInfo _TestSupport$AssertionFailedException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(TestSupport$AssertionFailedException::*)($String*)>(&TestSupport$AssertionFailedException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, 0, $method(static_cast<void(TestSupport$AssertionFailedException::*)($String*,$Throwable*)>(&TestSupport$AssertionFailedException::init$))},
	{}
};

$InnerClassInfo _TestSupport$AssertionFailedException_InnerClassesInfo_[] = {
	{"jdk.internal.net.http.websocket.TestSupport$AssertionFailedException", "jdk.internal.net.http.websocket.TestSupport", "AssertionFailedException", $STATIC | $FINAL},
	{}
};

$ClassInfo _TestSupport$AssertionFailedException_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.net.http.websocket.TestSupport$AssertionFailedException",
	"java.lang.RuntimeException",
	nullptr,
	_TestSupport$AssertionFailedException_FieldInfo_,
	_TestSupport$AssertionFailedException_MethodInfo_,
	nullptr,
	nullptr,
	_TestSupport$AssertionFailedException_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.net.http.websocket.TestSupport"
};

$Object* allocate$TestSupport$AssertionFailedException($Class* clazz) {
	return $of($alloc(TestSupport$AssertionFailedException));
}

void TestSupport$AssertionFailedException::init$($String* message) {
	$RuntimeException::init$(message);
}

void TestSupport$AssertionFailedException::init$($String* message, $Throwable* cause) {
	$RuntimeException::init$(message, cause);
}

TestSupport$AssertionFailedException::TestSupport$AssertionFailedException() {
}

TestSupport$AssertionFailedException::TestSupport$AssertionFailedException(const TestSupport$AssertionFailedException& e) : $RuntimeException(e) {
}

void TestSupport$AssertionFailedException::throw$() {
	throw *this;
}

$Class* TestSupport$AssertionFailedException::load$($String* name, bool initialize) {
	$loadClass(TestSupport$AssertionFailedException, name, initialize, &_TestSupport$AssertionFailedException_ClassInfo_, allocate$TestSupport$AssertionFailedException);
	return class$;
}

$Class* TestSupport$AssertionFailedException::class$ = nullptr;

				} // websocket
			} // http
		} // net
	} // internal
} // jdk