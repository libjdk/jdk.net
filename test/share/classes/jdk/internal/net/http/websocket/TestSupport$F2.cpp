#include <jdk/internal/net/http/websocket/TestSupport$F2.h>

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

$CompoundAttribute _TestSupport$F2_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};

$MethodInfo _TestSupport$F2_MethodInfo_[] = {
	{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(TA;TB;)TR;", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _TestSupport$F2_InnerClassesInfo_[] = {
	{"jdk.internal.net.http.websocket.TestSupport$F2", "jdk.internal.net.http.websocket.TestSupport", "F2", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _TestSupport$F2_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.net.http.websocket.TestSupport$F2",
	nullptr,
	nullptr,
	nullptr,
	_TestSupport$F2_MethodInfo_,
	"<A:Ljava/lang/Object;B:Ljava/lang/Object;R:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_TestSupport$F2_InnerClassesInfo_,
	_TestSupport$F2_Annotations_,
	nullptr,
	nullptr,
	"jdk.internal.net.http.websocket.TestSupport"
};

$Object* allocate$TestSupport$F2($Class* clazz) {
	return $of($alloc(TestSupport$F2));
}

$Class* TestSupport$F2::load$($String* name, bool initialize) {
	$loadClass(TestSupport$F2, name, initialize, &_TestSupport$F2_ClassInfo_, allocate$TestSupport$F2);
	return class$;
}

$Class* TestSupport$F2::class$ = nullptr;

				} // websocket
			} // http
		} // net
	} // internal
} // jdk