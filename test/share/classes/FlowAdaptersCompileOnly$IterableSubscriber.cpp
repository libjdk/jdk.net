#include <FlowAdaptersCompileOnly$IterableSubscriber.h>

#include <FlowAdaptersCompileOnly.h>
#include <java/lang/Iterable.h>
#include <java/util/concurrent/Flow$Subscription.h>
#include <jcpp.h>

using $FlowAdaptersCompileOnly = ::FlowAdaptersCompileOnly;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Flow$Subscriber = ::java::util::concurrent::Flow$Subscriber;
using $Flow$Subscription = ::java::util::concurrent::Flow$Subscription;

$MethodInfo _FlowAdaptersCompileOnly$IterableSubscriber_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FlowAdaptersCompileOnly$IterableSubscriber::*)()>(&FlowAdaptersCompileOnly$IterableSubscriber::init$))},
	{"onComplete", "()V", nullptr, $PUBLIC},
	{"onError", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC},
	{"onNext", "(Ljava/lang/Iterable;)V", "(Ljava/lang/Iterable<Ljava/nio/ByteBuffer;>;)V", $PUBLIC},
	{"onNext", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"onSubscribe", "(Ljava/util/concurrent/Flow$Subscription;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FlowAdaptersCompileOnly$IterableSubscriber_InnerClassesInfo_[] = {
	{"FlowAdaptersCompileOnly$IterableSubscriber", "FlowAdaptersCompileOnly", "IterableSubscriber", $STATIC},
	{"java.util.concurrent.Flow$Subscriber", "java.util.concurrent.Flow", "Subscriber", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _FlowAdaptersCompileOnly$IterableSubscriber_ClassInfo_ = {
	$ACC_SUPER,
	"FlowAdaptersCompileOnly$IterableSubscriber",
	"java.lang.Object",
	"java.util.concurrent.Flow$Subscriber",
	nullptr,
	_FlowAdaptersCompileOnly$IterableSubscriber_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Flow$Subscriber<Ljava/lang/Iterable<Ljava/nio/ByteBuffer;>;>;",
	nullptr,
	_FlowAdaptersCompileOnly$IterableSubscriber_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FlowAdaptersCompileOnly"
};

$Object* allocate$FlowAdaptersCompileOnly$IterableSubscriber($Class* clazz) {
	return $of($alloc(FlowAdaptersCompileOnly$IterableSubscriber));
}

void FlowAdaptersCompileOnly$IterableSubscriber::init$() {
}

void FlowAdaptersCompileOnly$IterableSubscriber::onSubscribe($Flow$Subscription* subscription) {
}

void FlowAdaptersCompileOnly$IterableSubscriber::onNext($Iterable* item) {
}

void FlowAdaptersCompileOnly$IterableSubscriber::onError($Throwable* throwable) {
}

void FlowAdaptersCompileOnly$IterableSubscriber::onComplete() {
}

void FlowAdaptersCompileOnly$IterableSubscriber::onNext(Object$* item) {
	this->onNext($cast($Iterable, item));
}

FlowAdaptersCompileOnly$IterableSubscriber::FlowAdaptersCompileOnly$IterableSubscriber() {
}

$Class* FlowAdaptersCompileOnly$IterableSubscriber::load$($String* name, bool initialize) {
	$loadClass(FlowAdaptersCompileOnly$IterableSubscriber, name, initialize, &_FlowAdaptersCompileOnly$IterableSubscriber_ClassInfo_, allocate$FlowAdaptersCompileOnly$IterableSubscriber);
	return class$;
}

$Class* FlowAdaptersCompileOnly$IterableSubscriber::class$ = nullptr;