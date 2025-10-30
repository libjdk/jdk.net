#include <jdk/internal/net/http/websocket/TestSupport$F5.h>

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

$CompoundAttribute _TestSupport$F5_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};

$MethodInfo _TestSupport$F5_MethodInfo_[] = {
	{"apply", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(TA;TB;TC;TD;TE;)TR;", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _TestSupport$F5_InnerClassesInfo_[] = {
	{"jdk.internal.net.http.websocket.TestSupport$F5", "jdk.internal.net.http.websocket.TestSupport", "F5", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _TestSupport$F5_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.net.http.websocket.TestSupport$F5",
	nullptr,
	nullptr,
	nullptr,
	_TestSupport$F5_MethodInfo_,
	"<A:Ljava/lang/Object;B:Ljava/lang/Object;C:Ljava/lang/Object;D:Ljava/lang/Object;E:Ljava/lang/Object;R:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_TestSupport$F5_InnerClassesInfo_,
	_TestSupport$F5_Annotations_,
	nullptr,
	nullptr,
	"jdk.internal.net.http.websocket.TestSupport"
};

$Object* allocate$TestSupport$F5($Class* clazz) {
	return $of($alloc(TestSupport$F5));
}

$Class* TestSupport$F5::load$($String* name, bool initialize) {
	$loadClass(TestSupport$F5, name, initialize, &_TestSupport$F5_ClassInfo_, allocate$TestSupport$F5);
	return class$;
}

$Class* TestSupport$F5::class$ = nullptr;

				} // websocket
			} // http
		} // net
	} // internal
} // jdk