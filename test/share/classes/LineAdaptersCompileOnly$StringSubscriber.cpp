#include <LineAdaptersCompileOnly$StringSubscriber.h>

#include <LineAdaptersCompileOnly.h>
#include <java/util/concurrent/Flow$Subscription.h>
#include <jcpp.h>

using $LineAdaptersCompileOnly = ::LineAdaptersCompileOnly;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Flow$Subscriber = ::java::util::concurrent::Flow$Subscriber;
using $Flow$Subscription = ::java::util::concurrent::Flow$Subscription;

$MethodInfo _LineAdaptersCompileOnly$StringSubscriber_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(LineAdaptersCompileOnly$StringSubscriber::*)()>(&LineAdaptersCompileOnly$StringSubscriber::init$))},
	{"onComplete", "()V", nullptr, $PUBLIC},
	{"onError", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC},
	{"onNext", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"onNext", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"onSubscribe", "(Ljava/util/concurrent/Flow$Subscription;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _LineAdaptersCompileOnly$StringSubscriber_InnerClassesInfo_[] = {
	{"LineAdaptersCompileOnly$StringSubscriber", "LineAdaptersCompileOnly", "StringSubscriber", $STATIC},
	{"java.util.concurrent.Flow$Subscriber", "java.util.concurrent.Flow", "Subscriber", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _LineAdaptersCompileOnly$StringSubscriber_ClassInfo_ = {
	$ACC_SUPER,
	"LineAdaptersCompileOnly$StringSubscriber",
	"java.lang.Object",
	"java.util.concurrent.Flow$Subscriber",
	nullptr,
	_LineAdaptersCompileOnly$StringSubscriber_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Flow$Subscriber<Ljava/lang/String;>;",
	nullptr,
	_LineAdaptersCompileOnly$StringSubscriber_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"LineAdaptersCompileOnly"
};

$Object* allocate$LineAdaptersCompileOnly$StringSubscriber($Class* clazz) {
	return $of($alloc(LineAdaptersCompileOnly$StringSubscriber));
}

void LineAdaptersCompileOnly$StringSubscriber::init$() {
}

void LineAdaptersCompileOnly$StringSubscriber::onSubscribe($Flow$Subscription* subscription) {
}

void LineAdaptersCompileOnly$StringSubscriber::onNext($String* item) {
}

void LineAdaptersCompileOnly$StringSubscriber::onError($Throwable* throwable) {
}

void LineAdaptersCompileOnly$StringSubscriber::onComplete() {
}

void LineAdaptersCompileOnly$StringSubscriber::onNext(Object$* item) {
	this->onNext($cast($String, item));
}

LineAdaptersCompileOnly$StringSubscriber::LineAdaptersCompileOnly$StringSubscriber() {
}

$Class* LineAdaptersCompileOnly$StringSubscriber::load$($String* name, bool initialize) {
	$loadClass(LineAdaptersCompileOnly$StringSubscriber, name, initialize, &_LineAdaptersCompileOnly$StringSubscriber_ClassInfo_, allocate$LineAdaptersCompileOnly$StringSubscriber);
	return class$;
}

$Class* LineAdaptersCompileOnly$StringSubscriber::class$ = nullptr;