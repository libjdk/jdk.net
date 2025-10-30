#include <S$2.h>

#include <S.h>
#include <jcpp.h>

using $S = ::S;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Flow$Subscription = ::java::util::concurrent::Flow$Subscription;

$MethodInfo _S$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(S$2::*)()>(&S$2::init$))},
	{"cancel", "()V", nullptr, $PUBLIC},
	{"request", "(J)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _S$2_EnclosingMethodInfo_ = {
	"S",
	"newErroredPublisher",
	"()Ljava/util/concurrent/Flow$Publisher;"
};

$InnerClassInfo _S$2_InnerClassesInfo_[] = {
	{"S$2", nullptr, nullptr, 0},
	{"java.util.concurrent.Flow$Subscription", "java.util.concurrent.Flow", "Subscription", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.concurrent.Flow$Publisher", "java.util.concurrent.Flow", "Publisher", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _S$2_ClassInfo_ = {
	$ACC_SUPER,
	"S$2",
	"java.lang.Object",
	"java.util.concurrent.Flow$Subscription",
	nullptr,
	_S$2_MethodInfo_,
	nullptr,
	&_S$2_EnclosingMethodInfo_,
	_S$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"S"
};

$Object* allocate$S$2($Class* clazz) {
	return $of($alloc(S$2));
}

void S$2::init$() {
}

void S$2::request(int64_t n) {
}

void S$2::cancel() {
}

S$2::S$2() {
}

$Class* S$2::load$($String* name, bool initialize) {
	$loadClass(S$2, name, initialize, &_S$2_ClassInfo_, allocate$S$2);
	return class$;
}

$Class* S$2::class$ = nullptr;