#include <org/reactivestreams/tck/flow/support/NonFatal.h>

#include <java/lang/InterruptedException.h>
#include <java/lang/LinkageError.h>
#include <java/lang/StackOverflowError.h>
#include <java/lang/ThreadDeath.h>
#include <java/lang/VirtualMachineError.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $LinkageError = ::java::lang::LinkageError;
using $MethodInfo = ::java::lang::MethodInfo;
using $StackOverflowError = ::java::lang::StackOverflowError;
using $ThreadDeath = ::java::lang::ThreadDeath;
using $VirtualMachineError = ::java::lang::VirtualMachineError;

namespace org {
	namespace reactivestreams {
		namespace tck {
			namespace flow {
				namespace support {

$MethodInfo _NonFatal_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(NonFatal::*)()>(&NonFatal::init$))},
	{"isNonFatal", "(Ljava/lang/Throwable;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($Throwable*)>(&NonFatal::isNonFatal))},
	{}
};

$ClassInfo _NonFatal_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"org.reactivestreams.tck.flow.support.NonFatal",
	"java.lang.Object",
	nullptr,
	nullptr,
	_NonFatal_MethodInfo_
};

$Object* allocate$NonFatal($Class* clazz) {
	return $of($alloc(NonFatal));
}

void NonFatal::init$() {
}

bool NonFatal::isNonFatal($Throwable* t) {
	if ($instanceOf($StackOverflowError, t)) {
		return true;
	} else if ($instanceOf($VirtualMachineError, t) || $instanceOf($ThreadDeath, t) || $instanceOf($InterruptedException, t) || $instanceOf($LinkageError, t)) {
		return false;
	} else {
		return true;
	}
}

NonFatal::NonFatal() {
}

$Class* NonFatal::load$($String* name, bool initialize) {
	$loadClass(NonFatal, name, initialize, &_NonFatal_ClassInfo_, allocate$NonFatal);
	return class$;
}

$Class* NonFatal::class$ = nullptr;

				} // support
			} // flow
		} // tck
	} // reactivestreams
} // org