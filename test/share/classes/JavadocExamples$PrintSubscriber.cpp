#include <JavadocExamples$PrintSubscriber.h>

#include <JavadocExamples.h>
#include <java/util/concurrent/Flow$Subscription.h>
#include <jcpp.h>

#undef MAX_VALUE

using $JavadocExamples = ::JavadocExamples;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Flow$Subscriber = ::java::util::concurrent::Flow$Subscriber;
using $Flow$Subscription = ::java::util::concurrent::Flow$Subscription;

$FieldInfo _JavadocExamples$PrintSubscriber_FieldInfo_[] = {
	{"out", "Ljava/io/PrintStream;", nullptr, $FINAL, $field(JavadocExamples$PrintSubscriber, out)},
	{}
};

$MethodInfo _JavadocExamples$PrintSubscriber_MethodInfo_[] = {
	{"<init>", "(Ljava/io/PrintStream;)V", nullptr, 0, $method(static_cast<void(JavadocExamples$PrintSubscriber::*)($PrintStream*)>(&JavadocExamples$PrintSubscriber::init$))},
	{"onComplete", "()V", nullptr, $PUBLIC},
	{"onError", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC},
	{"onNext", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(JavadocExamples$PrintSubscriber::*)($String*)>(&JavadocExamples$PrintSubscriber::onNext))},
	{"onNext", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"onSubscribe", "(Ljava/util/concurrent/Flow$Subscription;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JavadocExamples$PrintSubscriber_InnerClassesInfo_[] = {
	{"JavadocExamples$PrintSubscriber", "JavadocExamples", "PrintSubscriber", $STATIC | $FINAL},
	{"java.util.concurrent.Flow$Subscriber", "java.util.concurrent.Flow", "Subscriber", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _JavadocExamples$PrintSubscriber_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"JavadocExamples$PrintSubscriber",
	"java.lang.Object",
	"java.util.concurrent.Flow$Subscriber",
	_JavadocExamples$PrintSubscriber_FieldInfo_,
	_JavadocExamples$PrintSubscriber_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Flow$Subscriber<Ljava/lang/String;>;",
	nullptr,
	_JavadocExamples$PrintSubscriber_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"JavadocExamples"
};

$Object* allocate$JavadocExamples$PrintSubscriber($Class* clazz) {
	return $of($alloc(JavadocExamples$PrintSubscriber));
}

void JavadocExamples$PrintSubscriber::init$($PrintStream* out) {
	$set(this, out, out);
}

void JavadocExamples$PrintSubscriber::onSubscribe($Flow$Subscription* subscription) {
	$nc(subscription)->request($Long::MAX_VALUE);
}

void JavadocExamples$PrintSubscriber::onNext($String* item) {
	$nc(this->out)->println(item);
}

void JavadocExamples$PrintSubscriber::onError($Throwable* throwable) {
	$nc(throwable)->printStackTrace();
}

void JavadocExamples$PrintSubscriber::onComplete() {
}

void JavadocExamples$PrintSubscriber::onNext(Object$* item) {
	this->onNext($cast($String, item));
}

JavadocExamples$PrintSubscriber::JavadocExamples$PrintSubscriber() {
}

$Class* JavadocExamples$PrintSubscriber::load$($String* name, bool initialize) {
	$loadClass(JavadocExamples$PrintSubscriber, name, initialize, &_JavadocExamples$PrintSubscriber_ClassInfo_, allocate$JavadocExamples$PrintSubscriber);
	return class$;
}

$Class* JavadocExamples$PrintSubscriber::class$ = nullptr;