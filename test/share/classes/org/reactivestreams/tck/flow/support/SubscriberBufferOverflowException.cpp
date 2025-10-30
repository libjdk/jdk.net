#include <org/reactivestreams/tck/flow/support/SubscriberBufferOverflowException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace org {
	namespace reactivestreams {
		namespace tck {
			namespace flow {
				namespace support {

$MethodInfo _SubscriberBufferOverflowException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SubscriberBufferOverflowException::*)()>(&SubscriberBufferOverflowException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SubscriberBufferOverflowException::*)($String*)>(&SubscriberBufferOverflowException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(SubscriberBufferOverflowException::*)($String*,$Throwable*)>(&SubscriberBufferOverflowException::init$))},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(SubscriberBufferOverflowException::*)($Throwable*)>(&SubscriberBufferOverflowException::init$))},
	{}
};

$ClassInfo _SubscriberBufferOverflowException_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"org.reactivestreams.tck.flow.support.SubscriberBufferOverflowException",
	"java.lang.RuntimeException",
	nullptr,
	nullptr,
	_SubscriberBufferOverflowException_MethodInfo_
};

$Object* allocate$SubscriberBufferOverflowException($Class* clazz) {
	return $of($alloc(SubscriberBufferOverflowException));
}

void SubscriberBufferOverflowException::init$() {
	$RuntimeException::init$();
}

void SubscriberBufferOverflowException::init$($String* message) {
	$RuntimeException::init$(message);
}

void SubscriberBufferOverflowException::init$($String* message, $Throwable* cause) {
	$RuntimeException::init$(message, cause);
}

void SubscriberBufferOverflowException::init$($Throwable* cause) {
	$RuntimeException::init$(cause);
}

SubscriberBufferOverflowException::SubscriberBufferOverflowException() {
}

SubscriberBufferOverflowException::SubscriberBufferOverflowException(const SubscriberBufferOverflowException& e) : $RuntimeException(e) {
}

void SubscriberBufferOverflowException::throw$() {
	throw *this;
}

$Class* SubscriberBufferOverflowException::load$($String* name, bool initialize) {
	$loadClass(SubscriberBufferOverflowException, name, initialize, &_SubscriberBufferOverflowException_ClassInfo_, allocate$SubscriberBufferOverflowException);
	return class$;
}

$Class* SubscriberBufferOverflowException::class$ = nullptr;

				} // support
			} // flow
		} // tck
	} // reactivestreams
} // org