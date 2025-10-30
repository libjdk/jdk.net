#include <org/reactivestreams/Subscription.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace org {
	namespace reactivestreams {

$MethodInfo _Subscription_MethodInfo_[] = {
	{"cancel", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"request", "(J)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Subscription_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.reactivestreams.Subscription",
	nullptr,
	nullptr,
	nullptr,
	_Subscription_MethodInfo_
};

$Object* allocate$Subscription($Class* clazz) {
	return $of($alloc(Subscription));
}

$Class* Subscription::load$($String* name, bool initialize) {
	$loadClass(Subscription, name, initialize, &_Subscription_ClassInfo_, allocate$Subscription);
	return class$;
}

$Class* Subscription::class$ = nullptr;

	} // reactivestreams
} // org