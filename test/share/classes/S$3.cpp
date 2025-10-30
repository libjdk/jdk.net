#include <S$3.h>

#include <S$3$1.h>
#include <S.h>
#include <java/util/concurrent/Flow$Subscriber.h>
#include <java/util/concurrent/Flow$Subscription.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $S = ::S;
using $S$3$1 = ::S$3$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Flow$Publisher = ::java::util::concurrent::Flow$Publisher;
using $Flow$Subscriber = ::java::util::concurrent::Flow$Subscriber;
using $Flow$Subscription = ::java::util::concurrent::Flow$Subscription;
using $Stream = ::java::util::stream::Stream;

$FieldInfo _S$3_FieldInfo_[] = {
	{"val$stream", "Ljava/util/stream/Stream;", nullptr, $FINAL | $SYNTHETIC, $field(S$3, val$stream)},
	{}
};

$MethodInfo _S$3_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/Stream;)V", "()V", 0, $method(static_cast<void(S$3::*)($Stream*)>(&S$3::init$))},
	{"subscribe", "(Ljava/util/concurrent/Flow$Subscriber;)V", "(Ljava/util/concurrent/Flow$Subscriber<-TT;>;)V", $PUBLIC},
	{}
};

$EnclosingMethodInfo _S$3_EnclosingMethodInfo_ = {
	"S",
	"publisherOfStream",
	"(Ljava/util/stream/Stream;)Ljava/util/concurrent/Flow$Publisher;"
};

$InnerClassInfo _S$3_InnerClassesInfo_[] = {
	{"S$3", nullptr, nullptr, 0},
	{"java.util.concurrent.Flow$Publisher", "java.util.concurrent.Flow", "Publisher", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"S$3$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _S$3_ClassInfo_ = {
	$ACC_SUPER,
	"S$3",
	"java.lang.Object",
	"java.util.concurrent.Flow$Publisher",
	_S$3_FieldInfo_,
	_S$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Flow$Publisher<TT;>;",
	&_S$3_EnclosingMethodInfo_,
	_S$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"S"
};

$Object* allocate$S$3($Class* clazz) {
	return $of($alloc(S$3));
}

void S$3::init$($Stream* val$stream) {
	$set(this, val$stream, val$stream);
}

void S$3::subscribe($Flow$Subscriber* subscriber) {
	if (subscriber == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($Flow$Subscription, subscription, $new($S$3$1, this, subscriber));
	$nc(subscriber)->onSubscribe(subscription);
}

S$3::S$3() {
}

$Class* S$3::load$($String* name, bool initialize) {
	$loadClass(S$3, name, initialize, &_S$3_ClassInfo_, allocate$S$3);
	return class$;
}

$Class* S$3::class$ = nullptr;