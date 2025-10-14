#ifndef _org_reactivestreams_tck_flow_support_PublisherVerificationRules_h_
#define _org_reactivestreams_tck_flow_support_PublisherVerificationRules_h_
//$ interface org.reactivestreams.tck.flow.support.PublisherVerificationRules
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace org {
	namespace reactivestreams {
		namespace tck {
			namespace flow {
				namespace support {

class $export PublisherVerificationRules : public ::java::lang::Object {
	$interface(PublisherVerificationRules, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void optional_spec104_mustSignalOnErrorWhenFails() {}
	virtual void optional_spec105_emptyStreamMustTerminateBySignallingOnComplete() {}
	virtual void optional_spec111_maySupportMultiSubscribe() {}
	virtual void optional_spec111_multicast_mustProduceTheSameElementsInTheSameSequenceToAllOfItsSubscribersWhenRequestingManyUpfront() {}
	virtual void optional_spec111_multicast_mustProduceTheSameElementsInTheSameSequenceToAllOfItsSubscribersWhenRequestingManyUpfrontAndCompleteAsExpected() {}
	virtual void optional_spec111_multicast_mustProduceTheSameElementsInTheSameSequenceToAllOfItsSubscribersWhenRequestingOneByOne() {}
	virtual void optional_spec111_registeredSubscribersMustReceiveOnNextOrOnCompleteSignals() {}
	virtual void optional_spec309_requestNegativeNumberMaySignalIllegalArgumentExceptionWithSpecificMessage() {}
	virtual void required_createPublisher1MustProduceAStreamOfExactly1Element() {}
	virtual void required_createPublisher3MustProduceAStreamOfExactly3Elements() {}
	virtual void required_spec101_subscriptionRequestMustResultInTheCorrectNumberOfProducedElements() {}
	virtual void required_spec102_maySignalLessThanRequestedAndTerminateSubscription() {}
	virtual void required_spec105_mustSignalOnCompleteWhenFiniteStreamTerminates() {}
	virtual void required_spec107_mustNotEmitFurtherSignalsOnceOnCompleteHasBeenSignalled() {}
	virtual void required_spec109_mayRejectCallsToSubscribeIfPublisherIsUnableOrUnwillingToServeThemRejectionMustTriggerOnErrorAfterOnSubscribe() {}
	virtual void required_spec109_mustIssueOnSubscribeForNonNullSubscriber() {}
	virtual void required_spec109_subscribeThrowNPEOnNullSubscriber() {}
	virtual void required_spec302_mustAllowSynchronousRequestCallsFromOnNextAndOnSubscribe() {}
	virtual void required_spec303_mustNotAllowUnboundedRecursion() {}
	virtual void required_spec306_afterSubscriptionIsCancelledRequestMustBeNops() {}
	virtual void required_spec307_afterSubscriptionIsCancelledAdditionalCancelationsMustBeNops() {}
	virtual void required_spec309_requestNegativeNumberMustSignalIllegalArgumentException() {}
	virtual void required_spec309_requestZeroMustSignalIllegalArgumentException() {}
	virtual void required_spec312_cancelMustMakeThePublisherToEventuallyStopSignaling() {}
	virtual void required_spec313_cancelMustMakeThePublisherEventuallyDropAllReferencesToTheSubscriber() {}
	virtual void required_spec317_mustNotSignalOnErrorWhenPendingAboveLongMaxValue() {}
	virtual void required_spec317_mustSupportACumulativePendingElementCountUpToLongMaxValue() {}
	virtual void required_spec317_mustSupportAPendingElementCountUpToLongMaxValue() {}
	virtual void required_validate_boundedDepthOfOnNextAndRequestRecursion() {}
	virtual void required_validate_maxElementsFromPublisher() {}
	virtual void stochastic_spec103_mustSignalOnMethodsSequentially() {}
	virtual void untested_spec106_mustConsiderSubscriptionCancelledAfterOnErrorOrOnCompleteHasBeenCalled() {}
	virtual void untested_spec107_mustNotEmitFurtherSignalsOnceOnErrorHasBeenSignalled() {}
	virtual void untested_spec108_possiblyCanceledSubscriptionShouldNotReceiveOnErrorOrOnCompleteSignals() {}
	virtual void untested_spec109_subscribeShouldNotThrowNonFatalThrowable() {}
	virtual void untested_spec110_rejectASubscriptionRequestIfTheSameSubscriberSubscribesTwice() {}
	virtual void untested_spec304_requestShouldNotPerformHeavyComputations() {}
	virtual void untested_spec305_cancelMustNotSynchronouslyPerformHeavyComputation() {}
};

				} // support
			} // flow
		} // tck
	} // reactivestreams
} // org

#endif // _org_reactivestreams_tck_flow_support_PublisherVerificationRules_h_