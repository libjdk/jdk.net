#include <FlowAdaptersCompileOnly$CollectionSubscriber.h>

#include <FlowAdaptersCompileOnly.h>
#include <java/util/Collection.h>
#include <java/util/concurrent/Flow$Subscription.h>
#include <jcpp.h>

using $FlowAdaptersCompileOnly = ::FlowAdaptersCompileOnly;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collection = ::java::util::Collection;
using $Flow$Subscriber = ::java::util::concurrent::Flow$Subscriber;
using $Flow$Subscription = ::java::util::concurrent::Flow$Subscription;

$MethodInfo _FlowAdaptersCompileOnly$CollectionSubscriber_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FlowAdaptersCompileOnly$CollectionSubscriber::*)()>(&FlowAdaptersCompileOnly$CollectionSubscriber::init$))},
	{"onComplete", "()V", nullptr, $PUBLIC},
	{"onError", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC},
	{"onNext", "(Ljava/util/Collection;)V", "(Ljava/util/Collection<Ljava/nio/ByteBuffer;>;)V", $PUBLIC},
	{"onNext", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"onSubscribe", "(Ljava/util/concurrent/Flow$Subscription;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FlowAdaptersCompileOnly$CollectionSubscriber_InnerClassesInfo_[] = {
	{"FlowAdaptersCompileOnly$CollectionSubscriber", "FlowAdaptersCompileOnly", "CollectionSubscriber", $STATIC},
	{"java.util.concurrent.Flow$Subscriber", "java.util.concurrent.Flow", "Subscriber", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _FlowAdaptersCompileOnly$CollectionSubscriber_ClassInfo_ = {
	$ACC_SUPER,
	"FlowAdaptersCompileOnly$CollectionSubscriber",
	"java.lang.Object",
	"java.util.concurrent.Flow$Subscriber",
	nullptr,
	_FlowAdaptersCompileOnly$CollectionSubscriber_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Flow$Subscriber<Ljava/util/Collection<Ljava/nio/ByteBuffer;>;>;",
	nullptr,
	_FlowAdaptersCompileOnly$CollectionSubscriber_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FlowAdaptersCompileOnly"
};

$Object* allocate$FlowAdaptersCompileOnly$CollectionSubscriber($Class* clazz) {
	return $of($alloc(FlowAdaptersCompileOnly$CollectionSubscriber));
}

void FlowAdaptersCompileOnly$CollectionSubscriber::init$() {
}

void FlowAdaptersCompileOnly$CollectionSubscriber::onSubscribe($Flow$Subscription* subscription) {
}

void FlowAdaptersCompileOnly$CollectionSubscriber::onNext($Collection* item) {
}

void FlowAdaptersCompileOnly$CollectionSubscriber::onError($Throwable* throwable) {
}

void FlowAdaptersCompileOnly$CollectionSubscriber::onComplete() {
}

void FlowAdaptersCompileOnly$CollectionSubscriber::onNext(Object$* item) {
	this->onNext($cast($Collection, item));
}

FlowAdaptersCompileOnly$CollectionSubscriber::FlowAdaptersCompileOnly$CollectionSubscriber() {
}

$Class* FlowAdaptersCompileOnly$CollectionSubscriber::load$($String* name, bool initialize) {
	$loadClass(FlowAdaptersCompileOnly$CollectionSubscriber, name, initialize, &_FlowAdaptersCompileOnly$CollectionSubscriber_ClassInfo_, allocate$FlowAdaptersCompileOnly$CollectionSubscriber);
	return class$;
}

$Class* FlowAdaptersCompileOnly$CollectionSubscriber::class$ = nullptr;