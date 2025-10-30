#include <FlowAdaptersCompileOnly$LongSubscriber.h>

#include <FlowAdaptersCompileOnly$NumberSubscriber.h>
#include <FlowAdaptersCompileOnly.h>
#include <java/util/List.h>
#include <java/util/concurrent/Flow$Subscription.h>
#include <jcpp.h>

using $FlowAdaptersCompileOnly = ::FlowAdaptersCompileOnly;
using $FlowAdaptersCompileOnly$NumberSubscriber = ::FlowAdaptersCompileOnly$NumberSubscriber;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Flow$Subscription = ::java::util::concurrent::Flow$Subscription;

$MethodInfo _FlowAdaptersCompileOnly$LongSubscriber_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FlowAdaptersCompileOnly$LongSubscriber::*)()>(&FlowAdaptersCompileOnly$LongSubscriber::init$))},
	{"getLong", "()Ljava/lang/Long;", nullptr, $PUBLIC},
	{"onComplete", "()V", nullptr, $PUBLIC},
	{"onError", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC},
	{"onNext", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/nio/ByteBuffer;>;)V", $PUBLIC},
	{"onNext", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"onSubscribe", "(Ljava/util/concurrent/Flow$Subscription;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FlowAdaptersCompileOnly$LongSubscriber_InnerClassesInfo_[] = {
	{"FlowAdaptersCompileOnly$LongSubscriber", "FlowAdaptersCompileOnly", "LongSubscriber", $STATIC},
	{"FlowAdaptersCompileOnly$NumberSubscriber", "FlowAdaptersCompileOnly", "NumberSubscriber", $STATIC},
	{}
};

$ClassInfo _FlowAdaptersCompileOnly$LongSubscriber_ClassInfo_ = {
	$ACC_SUPER,
	"FlowAdaptersCompileOnly$LongSubscriber",
	"FlowAdaptersCompileOnly$NumberSubscriber",
	nullptr,
	nullptr,
	_FlowAdaptersCompileOnly$LongSubscriber_MethodInfo_,
	nullptr,
	nullptr,
	_FlowAdaptersCompileOnly$LongSubscriber_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FlowAdaptersCompileOnly"
};

$Object* allocate$FlowAdaptersCompileOnly$LongSubscriber($Class* clazz) {
	return $of($alloc(FlowAdaptersCompileOnly$LongSubscriber));
}

void FlowAdaptersCompileOnly$LongSubscriber::init$() {
	$FlowAdaptersCompileOnly$NumberSubscriber::init$();
}

void FlowAdaptersCompileOnly$LongSubscriber::onSubscribe($Flow$Subscription* subscription) {
}

void FlowAdaptersCompileOnly$LongSubscriber::onNext($List* item) {
}

void FlowAdaptersCompileOnly$LongSubscriber::onError($Throwable* throwable) {
}

void FlowAdaptersCompileOnly$LongSubscriber::onComplete() {
}

$Long* FlowAdaptersCompileOnly$LongSubscriber::getLong() {
	return nullptr;
}

void FlowAdaptersCompileOnly$LongSubscriber::onNext(Object$* item) {
	this->onNext($cast($List, item));
}

FlowAdaptersCompileOnly$LongSubscriber::FlowAdaptersCompileOnly$LongSubscriber() {
}

$Class* FlowAdaptersCompileOnly$LongSubscriber::load$($String* name, bool initialize) {
	$loadClass(FlowAdaptersCompileOnly$LongSubscriber, name, initialize, &_FlowAdaptersCompileOnly$LongSubscriber_ClassInfo_, allocate$FlowAdaptersCompileOnly$LongSubscriber);
	return class$;
}

$Class* FlowAdaptersCompileOnly$LongSubscriber::class$ = nullptr;