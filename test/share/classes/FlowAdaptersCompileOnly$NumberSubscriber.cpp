#include <FlowAdaptersCompileOnly$NumberSubscriber.h>

#include <FlowAdaptersCompileOnly.h>
#include <java/lang/Number.h>
#include <java/util/List.h>
#include <java/util/concurrent/Flow$Subscription.h>
#include <jcpp.h>

using $FlowAdaptersCompileOnly = ::FlowAdaptersCompileOnly;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $List = ::java::util::List;
using $Flow$Subscriber = ::java::util::concurrent::Flow$Subscriber;
using $Flow$Subscription = ::java::util::concurrent::Flow$Subscription;

$MethodInfo _FlowAdaptersCompileOnly$NumberSubscriber_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FlowAdaptersCompileOnly$NumberSubscriber::*)()>(&FlowAdaptersCompileOnly$NumberSubscriber::init$))},
	{"getNumber", "()Ljava/lang/Number;", nullptr, $PUBLIC},
	{"onComplete", "()V", nullptr, $PUBLIC},
	{"onError", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC},
	{"onNext", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/nio/ByteBuffer;>;)V", $PUBLIC},
	{"onNext", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"onSubscribe", "(Ljava/util/concurrent/Flow$Subscription;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FlowAdaptersCompileOnly$NumberSubscriber_InnerClassesInfo_[] = {
	{"FlowAdaptersCompileOnly$NumberSubscriber", "FlowAdaptersCompileOnly", "NumberSubscriber", $STATIC},
	{"java.util.concurrent.Flow$Subscriber", "java.util.concurrent.Flow", "Subscriber", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _FlowAdaptersCompileOnly$NumberSubscriber_ClassInfo_ = {
	$ACC_SUPER,
	"FlowAdaptersCompileOnly$NumberSubscriber",
	"java.lang.Object",
	"java.util.concurrent.Flow$Subscriber",
	nullptr,
	_FlowAdaptersCompileOnly$NumberSubscriber_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Flow$Subscriber<Ljava/util/List<Ljava/nio/ByteBuffer;>;>;",
	nullptr,
	_FlowAdaptersCompileOnly$NumberSubscriber_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FlowAdaptersCompileOnly"
};

$Object* allocate$FlowAdaptersCompileOnly$NumberSubscriber($Class* clazz) {
	return $of($alloc(FlowAdaptersCompileOnly$NumberSubscriber));
}

void FlowAdaptersCompileOnly$NumberSubscriber::init$() {
}

void FlowAdaptersCompileOnly$NumberSubscriber::onSubscribe($Flow$Subscription* subscription) {
}

void FlowAdaptersCompileOnly$NumberSubscriber::onNext($List* item) {
}

void FlowAdaptersCompileOnly$NumberSubscriber::onError($Throwable* throwable) {
}

void FlowAdaptersCompileOnly$NumberSubscriber::onComplete() {
}

$Number* FlowAdaptersCompileOnly$NumberSubscriber::getNumber() {
	return nullptr;
}

void FlowAdaptersCompileOnly$NumberSubscriber::onNext(Object$* item) {
	this->onNext($cast($List, item));
}

FlowAdaptersCompileOnly$NumberSubscriber::FlowAdaptersCompileOnly$NumberSubscriber() {
}

$Class* FlowAdaptersCompileOnly$NumberSubscriber::load$($String* name, bool initialize) {
	$loadClass(FlowAdaptersCompileOnly$NumberSubscriber, name, initialize, &_FlowAdaptersCompileOnly$NumberSubscriber_ClassInfo_, allocate$FlowAdaptersCompileOnly$NumberSubscriber);
	return class$;
}

$Class* FlowAdaptersCompileOnly$NumberSubscriber::class$ = nullptr;