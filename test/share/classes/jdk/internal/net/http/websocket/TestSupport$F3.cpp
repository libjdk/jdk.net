#include <jdk/internal/net/http/websocket/TestSupport$F3.h>

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

$CompoundAttribute _TestSupport$F3_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};

$MethodInfo _TestSupport$F3_MethodInfo_[] = {
	{"apply", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(TA;TB;TC;)TR;", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _TestSupport$F3_InnerClassesInfo_[] = {
	{"jdk.internal.net.http.websocket.TestSupport$F3", "jdk.internal.net.http.websocket.TestSupport", "F3", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _TestSupport$F3_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.net.http.websocket.TestSupport$F3",
	nullptr,
	nullptr,
	nullptr,
	_TestSupport$F3_MethodInfo_,
	"<A:Ljava/lang/Object;B:Ljava/lang/Object;C:Ljava/lang/Object;R:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_TestSupport$F3_InnerClassesInfo_,
	_TestSupport$F3_Annotations_,
	nullptr,
	nullptr,
	"jdk.internal.net.http.websocket.TestSupport"
};

$Object* allocate$TestSupport$F3($Class* clazz) {
	return $of($alloc(TestSupport$F3));
}

$Class* TestSupport$F3::load$($String* name, bool initialize) {
	$loadClass(TestSupport$F3, name, initialize, &_TestSupport$F3_ClassInfo_, allocate$TestSupport$F3);
	return class$;
}

$Class* TestSupport$F3::class$ = nullptr;

				} // websocket
			} // http
		} // net
	} // internal
} // jdk