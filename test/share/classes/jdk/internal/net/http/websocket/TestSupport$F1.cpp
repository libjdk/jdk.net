#include <jdk/internal/net/http/websocket/TestSupport$F1.h>

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

$CompoundAttribute _TestSupport$F1_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};

$MethodInfo _TestSupport$F1_MethodInfo_[] = {
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TA;)TR;", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _TestSupport$F1_InnerClassesInfo_[] = {
	{"jdk.internal.net.http.websocket.TestSupport$F1", "jdk.internal.net.http.websocket.TestSupport", "F1", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _TestSupport$F1_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.net.http.websocket.TestSupport$F1",
	nullptr,
	nullptr,
	nullptr,
	_TestSupport$F1_MethodInfo_,
	"<A:Ljava/lang/Object;R:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_TestSupport$F1_InnerClassesInfo_,
	_TestSupport$F1_Annotations_,
	nullptr,
	nullptr,
	"jdk.internal.net.http.websocket.TestSupport"
};

$Object* allocate$TestSupport$F1($Class* clazz) {
	return $of($alloc(TestSupport$F1));
}

$Class* TestSupport$F1::load$($String* name, bool initialize) {
	$loadClass(TestSupport$F1, name, initialize, &_TestSupport$F1_ClassInfo_, allocate$TestSupport$F1);
	return class$;
}

$Class* TestSupport$F1::class$ = nullptr;

				} // websocket
			} // http
		} // net
	} // internal
} // jdk