#include <org/reactivestreams/tck/flow/support/SubscriberWhiteboxVerificationRules.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace org {
	namespace reactivestreams {
		namespace tck {
			namespace flow {
				namespace support {

$MethodInfo _SubscriberWhiteboxVerificationRules_MethodInfo_[] = {
	{"required_exerciseWhiteboxHappyPath", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{"required_spec201_mustSignalDemandViaSubscriptionRequest", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{"required_spec203_mustNotCallMethodsOnSubscriptionOrPublisherInOnComplete", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{"required_spec203_mustNotCallMethodsOnSubscriptionOrPublisherInOnError", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{"required_spec205_mustCallSubscriptionCancelIfItAlreadyHasAnSubscriptionAndReceivesAnotherOnSubscribeSignal", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{"required_spec208_mustBePreparedToReceiveOnNextSignalsAfterHavingCalledSubscriptionCancel", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{"required_spec209_mustBePreparedToReceiveAnOnCompleteSignalWithPrecedingRequestCall", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{"required_spec209_mustBePreparedToReceiveAnOnCompleteSignalWithoutPrecedingRequestCall", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{"required_spec210_mustBePreparedToReceiveAnOnErrorSignalWithPrecedingRequestCall", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{"required_spec210_mustBePreparedToReceiveAnOnErrorSignalWithoutPrecedingRequestCall", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{"required_spec213_onError_mustThrowNullPointerExceptionWhenParametersAreNull", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{"required_spec213_onNext_mustThrowNullPointerExceptionWhenParametersAreNull", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{"required_spec213_onSubscribe_mustThrowNullPointerExceptionWhenParametersAreNull", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{"required_spec308_requestMustRegisterGivenNumberElementsToBeProduced", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{"untested_spec202_shouldAsynchronouslyDispatch", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Exception"},
	{"untested_spec204_mustConsiderTheSubscriptionAsCancelledInAfterRecievingOnCompleteOrOnError", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Exception"},
	{"untested_spec206_mustCallSubscriptionCancelIfItIsNoLongerValid", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Exception"},
	{"untested_spec207_mustEnsureAllCallsOnItsSubscriptionTakePlaceFromTheSameThreadOrTakeCareOfSynchronization", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Exception"},
	{"untested_spec211_mustMakeSureThatAllCallsOnItsMethodsHappenBeforeTheProcessingOfTheRespectiveEvents", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Exception"},
	{"untested_spec212_mustNotCallOnSubscribeMoreThanOnceBasedOnObjectEquality_specViolation", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{"untested_spec213_failingOnSignalInvocation", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Exception"},
	{"untested_spec301_mustNotBeCalledOutsideSubscriberContext", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Exception"},
	{"untested_spec310_requestMaySynchronouslyCallOnNextOnSubscriber", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Exception"},
	{"untested_spec311_requestMaySynchronouslyCallOnCompleteOrOnError", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Exception"},
	{"untested_spec314_cancelMayCauseThePublisherToShutdownIfNoOtherSubscriptionExists", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Exception"},
	{"untested_spec315_cancelMustNotThrowExceptionAndMustSignalOnError", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Exception"},
	{"untested_spec316_requestMustNotThrowExceptionAndMustOnErrorTheSubscriber", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Exception"},
	{}
};

$ClassInfo _SubscriberWhiteboxVerificationRules_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.reactivestreams.tck.flow.support.SubscriberWhiteboxVerificationRules",
	nullptr,
	nullptr,
	nullptr,
	_SubscriberWhiteboxVerificationRules_MethodInfo_
};

$Object* allocate$SubscriberWhiteboxVerificationRules($Class* clazz) {
	return $of($alloc(SubscriberWhiteboxVerificationRules));
}

$Class* SubscriberWhiteboxVerificationRules::load$($String* name, bool initialize) {
	$loadClass(SubscriberWhiteboxVerificationRules, name, initialize, &_SubscriberWhiteboxVerificationRules_ClassInfo_, allocate$SubscriberWhiteboxVerificationRules);
	return class$;
}

$Class* SubscriberWhiteboxVerificationRules::class$ = nullptr;

				} // support
			} // flow
		} // tck
	} // reactivestreams
} // org