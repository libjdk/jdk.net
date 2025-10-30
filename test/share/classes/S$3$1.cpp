#include <S$3$1.h>

#include <S$3.h>
#include <java/util/Iterator.h>
#include <java/util/concurrent/Flow$Subscriber.h>
#include <java/util/stream/BaseStream.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef MAX_VALUE

using $S$3 = ::S$3;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Iterator = ::java::util::Iterator;
using $Flow$Subscriber = ::java::util::concurrent::Flow$Subscriber;
using $Flow$Subscription = ::java::util::concurrent::Flow$Subscription;
using $BaseStream = ::java::util::stream::BaseStream;
using $Stream = ::java::util::stream::Stream;

$FieldInfo _S$3$1_FieldInfo_[] = {
	{"this$0", "LS$3;", nullptr, $FINAL | $SYNTHETIC, $field(S$3$1, this$0)},
	{"val$subscriber", "Ljava/util/concurrent/Flow$Subscriber;", nullptr, $FINAL | $SYNTHETIC, $field(S$3$1, val$subscriber)},
	{"inOnNext", "Z", nullptr, 0, $field(S$3$1, inOnNext)},
	{"cancelled", "Z", nullptr, $VOLATILE, $field(S$3$1, cancelled)},
	{"demand", "J", nullptr, 0, $field(S$3$1, demand)},
	{"supply", "Ljava/util/Iterator;", "Ljava/util/Iterator<+TT;>;", $FINAL, $field(S$3$1, supply)},
	{}
};

$MethodInfo _S$3$1_MethodInfo_[] = {
	{"<init>", "(LS$3;Ljava/util/concurrent/Flow$Subscriber;)V", "()V", 0, $method(static_cast<void(S$3$1::*)($S$3*,$Flow$Subscriber*)>(&S$3$1::init$))},
	{"cancel", "()V", nullptr, $PUBLIC},
	{"request", "(J)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _S$3$1_EnclosingMethodInfo_ = {
	"S$3",
	"subscribe",
	"(Ljava/util/concurrent/Flow$Subscriber;)V"
};

$InnerClassInfo _S$3$1_InnerClassesInfo_[] = {
	{"S$3", nullptr, nullptr, 0},
	{"S$3$1", nullptr, nullptr, 0},
	{"java.util.concurrent.Flow$Subscription", "java.util.concurrent.Flow", "Subscription", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.concurrent.Flow$Subscriber", "java.util.concurrent.Flow", "Subscriber", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _S$3$1_ClassInfo_ = {
	$ACC_SUPER,
	"S$3$1",
	"java.lang.Object",
	"java.util.concurrent.Flow$Subscription",
	_S$3$1_FieldInfo_,
	_S$3$1_MethodInfo_,
	nullptr,
	&_S$3$1_EnclosingMethodInfo_,
	_S$3$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"S"
};

$Object* allocate$S$3$1($Class* clazz) {
	return $of($alloc(S$3$1));
}

void S$3$1::init$($S$3* this$0, $Flow$Subscriber* val$subscriber) {
	$set(this, this$0, this$0);
	$set(this, val$subscriber, val$subscriber);
	$set(this, supply, $nc(this->this$0->val$stream)->iterator());
}

void S$3$1::request(int64_t n) {
	$useLocalCurrentObjectStackCache();
	this->demand = this->demand + n < 0 ? $Long::MAX_VALUE : this->demand + n;
	if (this->inOnNext) {
		return;
	}
	if (this->cancelled) {
		return;
	}
	if (n <= 0) {
		this->cancelled = true;
		$nc(this->val$subscriber)->onError($$new($IllegalArgumentException, "non-positive subscription request"_s));
		return;
	}
	while ($nc(this->supply)->hasNext() && this->demand > 0 && !this->cancelled) {
		--this->demand;
		this->inOnNext = true;
		{
			$var($Throwable, var$0, nullptr);
			try {
				$var($Object, item, $nc(this->supply)->next());
				$nc(this->val$subscriber)->onNext(item);
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				this->inOnNext = false;
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	if (!$nc(this->supply)->hasNext()) {
		this->cancelled = true;
		$nc(this->val$subscriber)->onComplete();
	}
}

void S$3$1::cancel() {
	this->cancelled = true;
}

S$3$1::S$3$1() {
}

$Class* S$3$1::load$($String* name, bool initialize) {
	$loadClass(S$3$1, name, initialize, &_S$3$1_ClassInfo_, allocate$S$3$1);
	return class$;
}

$Class* S$3$1::class$ = nullptr;