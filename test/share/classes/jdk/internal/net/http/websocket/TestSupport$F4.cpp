#include <jdk/internal/net/http/websocket/TestSupport$F4.h>

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

$CompoundAttribute _TestSupport$F4_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};

$MethodInfo _TestSupport$F4_MethodInfo_[] = {
	{"apply", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(TA;TB;TC;TD;)TR;", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _TestSupport$F4_InnerClassesInfo_[] = {
	{"jdk.internal.net.http.websocket.TestSupport$F4", "jdk.internal.net.http.websocket.TestSupport", "F4", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _TestSupport$F4_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.net.http.websocket.TestSupport$F4",
	nullptr,
	nullptr,
	nullptr,
	_TestSupport$F4_MethodInfo_,
	"<A:Ljava/lang/Object;B:Ljava/lang/Object;C:Ljava/lang/Object;D:Ljava/lang/Object;R:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_TestSupport$F4_InnerClassesInfo_,
	_TestSupport$F4_Annotations_,
	nullptr,
	nullptr,
	"jdk.internal.net.http.websocket.TestSupport"
};

$Object* allocate$TestSupport$F4($Class* clazz) {
	return $of($alloc(TestSupport$F4));
}

$Class* TestSupport$F4::load$($String* name, bool initialize) {
	$loadClass(TestSupport$F4, name, initialize, &_TestSupport$F4_ClassInfo_, allocate$TestSupport$F4);
	return class$;
}

$Class* TestSupport$F4::class$ = nullptr;

				} // websocket
			} // http
		} // net
	} // internal
} // jdk