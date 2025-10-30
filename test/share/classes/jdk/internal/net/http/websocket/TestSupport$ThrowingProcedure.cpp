#include <jdk/internal/net/http/websocket/TestSupport$ThrowingProcedure.h>

#include <jdk/internal/net/http/websocket/TestSupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TestSupport = ::jdk::internal::net::http::websocket::TestSupport;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace websocket {

$MethodInfo _TestSupport$ThrowingProcedure_MethodInfo_[] = {
	{"run", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{}
};

$InnerClassInfo _TestSupport$ThrowingProcedure_InnerClassesInfo_[] = {
	{"jdk.internal.net.http.websocket.TestSupport$ThrowingProcedure", "jdk.internal.net.http.websocket.TestSupport", "ThrowingProcedure", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _TestSupport$ThrowingProcedure_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"jdk.internal.net.http.websocket.TestSupport$ThrowingProcedure",
	nullptr,
	nullptr,
	nullptr,
	_TestSupport$ThrowingProcedure_MethodInfo_,
	nullptr,
	nullptr,
	_TestSupport$ThrowingProcedure_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.net.http.websocket.TestSupport"
};

$Object* allocate$TestSupport$ThrowingProcedure($Class* clazz) {
	return $of($alloc(TestSupport$ThrowingProcedure));
}

$Class* TestSupport$ThrowingProcedure::load$($String* name, bool initialize) {
	$loadClass(TestSupport$ThrowingProcedure, name, initialize, &_TestSupport$ThrowingProcedure_ClassInfo_, allocate$TestSupport$ThrowingProcedure);
	return class$;
}

$Class* TestSupport$ThrowingProcedure::class$ = nullptr;

				} // websocket
			} // http
		} // net
	} // internal
} // jdk