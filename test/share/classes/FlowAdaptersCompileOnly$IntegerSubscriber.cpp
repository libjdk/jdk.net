#include <FlowAdaptersCompileOnly$IntegerSubscriber.h>

#include <FlowAdaptersCompileOnly$NumberSubscriber.h>
#include <FlowAdaptersCompileOnly.h>
#include <java/util/List.h>
#include <java/util/concurrent/Flow$Subscription.h>
#include <jcpp.h>

using $FlowAdaptersCompileOnly = ::FlowAdaptersCompileOnly;
using $FlowAdaptersCompileOnly$NumberSubscriber = ::FlowAdaptersCompileOnly$NumberSubscriber;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Flow$Subscription = ::java::util::concurrent::Flow$Subscription;

$MethodInfo _FlowAdaptersCompileOnly$IntegerSubscriber_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FlowAdaptersCompileOnly$IntegerSubscriber::*)()>(&FlowAdaptersCompileOnly$IntegerSubscriber::init$))},
	{"getInteger", "()Ljava/lang/Integer;", nullptr, $PUBLIC},
	{"onComplete", "()V", nullptr, $PUBLIC},
	{"onError", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC},
	{"onNext", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/nio/ByteBuffer;>;)V", $PUBLIC},
	{"onNext", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"onSubscribe", "(Ljava/util/concurrent/Flow$Subscription;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FlowAdaptersCompileOnly$IntegerSubscriber_InnerClassesInfo_[] = {
	{"FlowAdaptersCompileOnly$IntegerSubscriber", "FlowAdaptersCompileOnly", "IntegerSubscriber", $STATIC},
	{"FlowAdaptersCompileOnly$NumberSubscriber", "FlowAdaptersCompileOnly", "NumberSubscriber", $STATIC},
	{}
};

$ClassInfo _FlowAdaptersCompileOnly$IntegerSubscriber_ClassInfo_ = {
	$ACC_SUPER,
	"FlowAdaptersCompileOnly$IntegerSubscriber",
	"FlowAdaptersCompileOnly$NumberSubscriber",
	nullptr,
	nullptr,
	_FlowAdaptersCompileOnly$IntegerSubscriber_MethodInfo_,
	nullptr,
	nullptr,
	_FlowAdaptersCompileOnly$IntegerSubscriber_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FlowAdaptersCompileOnly"
};

$Object* allocate$FlowAdaptersCompileOnly$IntegerSubscriber($Class* clazz) {
	return $of($alloc(FlowAdaptersCompileOnly$IntegerSubscriber));
}

void FlowAdaptersCompileOnly$IntegerSubscriber::init$() {
	$FlowAdaptersCompileOnly$NumberSubscriber::init$();
}

void FlowAdaptersCompileOnly$IntegerSubscriber::onSubscribe($Flow$Subscription* subscription) {
}

void FlowAdaptersCompileOnly$IntegerSubscriber::onNext($List* item) {
}

void FlowAdaptersCompileOnly$IntegerSubscriber::onError($Throwable* throwable) {
}

void FlowAdaptersCompileOnly$IntegerSubscriber::onComplete() {
}

$Integer* FlowAdaptersCompileOnly$IntegerSubscriber::getInteger() {
	return nullptr;
}

void FlowAdaptersCompileOnly$IntegerSubscriber::onNext(Object$* item) {
	this->onNext($cast($List, item));
}

FlowAdaptersCompileOnly$IntegerSubscriber::FlowAdaptersCompileOnly$IntegerSubscriber() {
}

$Class* FlowAdaptersCompileOnly$IntegerSubscriber::load$($String* name, bool initialize) {
	$loadClass(FlowAdaptersCompileOnly$IntegerSubscriber, name, initialize, &_FlowAdaptersCompileOnly$IntegerSubscriber_ClassInfo_, allocate$FlowAdaptersCompileOnly$IntegerSubscriber);
	return class$;
}

$Class* FlowAdaptersCompileOnly$IntegerSubscriber::class$ = nullptr;