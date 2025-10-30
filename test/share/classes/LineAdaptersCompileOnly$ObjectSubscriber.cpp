#include <LineAdaptersCompileOnly$ObjectSubscriber.h>

#include <LineAdaptersCompileOnly.h>
#include <java/util/concurrent/Flow$Subscription.h>
#include <jcpp.h>

using $LineAdaptersCompileOnly = ::LineAdaptersCompileOnly;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Flow$Subscriber = ::java::util::concurrent::Flow$Subscriber;
using $Flow$Subscription = ::java::util::concurrent::Flow$Subscription;

$MethodInfo _LineAdaptersCompileOnly$ObjectSubscriber_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(LineAdaptersCompileOnly$ObjectSubscriber::*)()>(&LineAdaptersCompileOnly$ObjectSubscriber::init$))},
	{"onComplete", "()V", nullptr, $PUBLIC},
	{"onError", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC},
	{"onNext", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"onSubscribe", "(Ljava/util/concurrent/Flow$Subscription;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _LineAdaptersCompileOnly$ObjectSubscriber_InnerClassesInfo_[] = {
	{"LineAdaptersCompileOnly$ObjectSubscriber", "LineAdaptersCompileOnly", "ObjectSubscriber", $STATIC},
	{"java.util.concurrent.Flow$Subscriber", "java.util.concurrent.Flow", "Subscriber", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _LineAdaptersCompileOnly$ObjectSubscriber_ClassInfo_ = {
	$ACC_SUPER,
	"LineAdaptersCompileOnly$ObjectSubscriber",
	"java.lang.Object",
	"java.util.concurrent.Flow$Subscriber",
	nullptr,
	_LineAdaptersCompileOnly$ObjectSubscriber_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Flow$Subscriber<Ljava/lang/Object;>;",
	nullptr,
	_LineAdaptersCompileOnly$ObjectSubscriber_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"LineAdaptersCompileOnly"
};

$Object* allocate$LineAdaptersCompileOnly$ObjectSubscriber($Class* clazz) {
	return $of($alloc(LineAdaptersCompileOnly$ObjectSubscriber));
}

void LineAdaptersCompileOnly$ObjectSubscriber::init$() {
}

void LineAdaptersCompileOnly$ObjectSubscriber::onSubscribe($Flow$Subscription* subscription) {
}

void LineAdaptersCompileOnly$ObjectSubscriber::onNext(Object$* item) {
}

void LineAdaptersCompileOnly$ObjectSubscriber::onError($Throwable* throwable) {
}

void LineAdaptersCompileOnly$ObjectSubscriber::onComplete() {
}

LineAdaptersCompileOnly$ObjectSubscriber::LineAdaptersCompileOnly$ObjectSubscriber() {
}

$Class* LineAdaptersCompileOnly$ObjectSubscriber::load$($String* name, bool initialize) {
	$loadClass(LineAdaptersCompileOnly$ObjectSubscriber, name, initialize, &_LineAdaptersCompileOnly$ObjectSubscriber_ClassInfo_, allocate$LineAdaptersCompileOnly$ObjectSubscriber);
	return class$;
}

$Class* LineAdaptersCompileOnly$ObjectSubscriber::class$ = nullptr;