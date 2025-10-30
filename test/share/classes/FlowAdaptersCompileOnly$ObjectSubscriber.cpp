#include <FlowAdaptersCompileOnly$ObjectSubscriber.h>

#include <FlowAdaptersCompileOnly.h>
#include <java/util/concurrent/Flow$Subscription.h>
#include <jcpp.h>

using $FlowAdaptersCompileOnly = ::FlowAdaptersCompileOnly;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Flow$Subscriber = ::java::util::concurrent::Flow$Subscriber;
using $Flow$Subscription = ::java::util::concurrent::Flow$Subscription;

$MethodInfo _FlowAdaptersCompileOnly$ObjectSubscriber_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FlowAdaptersCompileOnly$ObjectSubscriber::*)()>(&FlowAdaptersCompileOnly$ObjectSubscriber::init$))},
	{"onComplete", "()V", nullptr, $PUBLIC},
	{"onError", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC},
	{"onNext", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"onSubscribe", "(Ljava/util/concurrent/Flow$Subscription;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FlowAdaptersCompileOnly$ObjectSubscriber_InnerClassesInfo_[] = {
	{"FlowAdaptersCompileOnly$ObjectSubscriber", "FlowAdaptersCompileOnly", "ObjectSubscriber", $STATIC},
	{"java.util.concurrent.Flow$Subscriber", "java.util.concurrent.Flow", "Subscriber", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _FlowAdaptersCompileOnly$ObjectSubscriber_ClassInfo_ = {
	$ACC_SUPER,
	"FlowAdaptersCompileOnly$ObjectSubscriber",
	"java.lang.Object",
	"java.util.concurrent.Flow$Subscriber",
	nullptr,
	_FlowAdaptersCompileOnly$ObjectSubscriber_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Flow$Subscriber<Ljava/lang/Object;>;",
	nullptr,
	_FlowAdaptersCompileOnly$ObjectSubscriber_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FlowAdaptersCompileOnly"
};

$Object* allocate$FlowAdaptersCompileOnly$ObjectSubscriber($Class* clazz) {
	return $of($alloc(FlowAdaptersCompileOnly$ObjectSubscriber));
}

void FlowAdaptersCompileOnly$ObjectSubscriber::init$() {
}

void FlowAdaptersCompileOnly$ObjectSubscriber::onSubscribe($Flow$Subscription* subscription) {
}

void FlowAdaptersCompileOnly$ObjectSubscriber::onNext(Object$* item) {
}

void FlowAdaptersCompileOnly$ObjectSubscriber::onError($Throwable* throwable) {
}

void FlowAdaptersCompileOnly$ObjectSubscriber::onComplete() {
}

FlowAdaptersCompileOnly$ObjectSubscriber::FlowAdaptersCompileOnly$ObjectSubscriber() {
}

$Class* FlowAdaptersCompileOnly$ObjectSubscriber::load$($String* name, bool initialize) {
	$loadClass(FlowAdaptersCompileOnly$ObjectSubscriber, name, initialize, &_FlowAdaptersCompileOnly$ObjectSubscriber_ClassInfo_, allocate$FlowAdaptersCompileOnly$ObjectSubscriber);
	return class$;
}

$Class* FlowAdaptersCompileOnly$ObjectSubscriber::class$ = nullptr;