#ifndef _org_reactivestreams_tck_flow_support_SubscriberWhiteboxVerificationRules_h_
#define _org_reactivestreams_tck_flow_support_SubscriberWhiteboxVerificationRules_h_
//$ interface org.reactivestreams.tck.flow.support.SubscriberWhiteboxVerificationRules
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace org {
	namespace reactivestreams {
		namespace tck {
			namespace flow {
				namespace support {

class $export SubscriberWhiteboxVerificationRules : public ::java::lang::Object {
	$interface(SubscriberWhiteboxVerificationRules, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void required_exerciseWhiteboxHappyPath() {}
	virtual void required_spec201_mustSignalDemandViaSubscriptionRequest() {}
	virtual void required_spec203_mustNotCallMethodsOnSubscriptionOrPublisherInOnComplete() {}
	virtual void required_spec203_mustNotCallMethodsOnSubscriptionOrPublisherInOnError() {}
	virtual void required_spec205_mustCallSubscriptionCancelIfItAlreadyHasAnSubscriptionAndReceivesAnotherOnSubscribeSignal() {}
	virtual void required_spec208_mustBePreparedToReceiveOnNextSignalsAfterHavingCalledSubscriptionCancel() {}
	virtual void required_spec209_mustBePreparedToReceiveAnOnCompleteSignalWithPrecedingRequestCall() {}
	virtual void required_spec209_mustBePreparedToReceiveAnOnCompleteSignalWithoutPrecedingRequestCall() {}
	virtual void required_spec210_mustBePreparedToReceiveAnOnErrorSignalWithPrecedingRequestCall() {}
	virtual void required_spec210_mustBePreparedToReceiveAnOnErrorSignalWithoutPrecedingRequestCall() {}
	virtual void required_spec213_onError_mustThrowNullPointerExceptionWhenParametersAreNull() {}
	virtual void required_spec213_onNext_mustThrowNullPointerExceptionWhenParametersAreNull() {}
	virtual void required_spec213_onSubscribe_mustThrowNullPointerExceptionWhenParametersAreNull() {}
	virtual void required_spec308_requestMustRegisterGivenNumberElementsToBeProduced() {}
	virtual void untested_spec202_shouldAsynchronouslyDispatch() {}
	virtual void untested_spec204_mustConsiderTheSubscriptionAsCancelledInAfterRecievingOnCompleteOrOnError() {}
	virtual void untested_spec206_mustCallSubscriptionCancelIfItIsNoLongerValid() {}
	virtual void untested_spec207_mustEnsureAllCallsOnItsSubscriptionTakePlaceFromTheSameThreadOrTakeCareOfSynchronization() {}
	virtual void untested_spec211_mustMakeSureThatAllCallsOnItsMethodsHappenBeforeTheProcessingOfTheRespectiveEvents() {}
	virtual void untested_spec212_mustNotCallOnSubscribeMoreThanOnceBasedOnObjectEquality_specViolation() {}
	virtual void untested_spec213_failingOnSignalInvocation() {}
	virtual void untested_spec301_mustNotBeCalledOutsideSubscriberContext() {}
	virtual void untested_spec310_requestMaySynchronouslyCallOnNextOnSubscriber() {}
	virtual void untested_spec311_requestMaySynchronouslyCallOnCompleteOrOnError() {}
	virtual void untested_spec314_cancelMayCauseThePublisherToShutdownIfNoOtherSubscriptionExists() {}
	virtual void untested_spec315_cancelMustNotThrowExceptionAndMustSignalOnError() {}
	virtual void untested_spec316_requestMustNotThrowExceptionAndMustOnErrorTheSubscriber() {}
};

				} // support
			} // flow
		} // tck
	} // reactivestreams
} // org

#endif // _org_reactivestreams_tck_flow_support_SubscriberWhiteboxVerificationRules_h_