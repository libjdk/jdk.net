#include <jdk/internal/net/http/websocket/TestSupport$F.h>

#include <jdk/internal/net/http/websocket/TestSupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TestSupport = ::jdk::internal::net::http::websocket::TestSupport;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace websocket {

$CompoundAttribute _TestSupport$F_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};

$MethodInfo _TestSupport$F_MethodInfo_[] = {
	{"apply", "([Ljava/lang/Object;)Ljava/lang/Object;", "([Ljava/lang/Object;)TR;", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _TestSupport$F_InnerClassesInfo_[] = {
	{"jdk.internal.net.http.websocket.TestSupport$F", "jdk.internal.net.http.websocket.TestSupport", "F", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _TestSupport$F_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.net.http.websocket.TestSupport$F",
	nullptr,
	nullptr,
	nullptr,
	_TestSupport$F_MethodInfo_,
	"<R:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_TestSupport$F_InnerClassesInfo_,
	_TestSupport$F_Annotations_,
	nullptr,
	nullptr,
	"jdk.internal.net.http.websocket.TestSupport"
};

$Object* allocate$TestSupport$F($Class* clazz) {
	return $of($alloc(TestSupport$F));
}

$Class* TestSupport$F::load$($String* name, bool initialize) {
	$loadClass(TestSupport$F, name, initialize, &_TestSupport$F_ClassInfo_, allocate$TestSupport$F);
	return class$;
}

$Class* TestSupport$F::class$ = nullptr;

				} // websocket
			} // http
		} // net
	} // internal
} // jdk