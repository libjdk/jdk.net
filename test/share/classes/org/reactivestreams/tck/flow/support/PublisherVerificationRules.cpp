#include <org/reactivestreams/tck/flow/support/PublisherVerificationRules.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace org {
	namespace reactivestreams {
		namespace tck {
			namespace flow {
				namespace support {

$MethodInfo _PublisherVerificationRules_MethodInfo_[] = {
	{"optional_spec104_mustSignalOnErrorWhenFails", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{"optional_spec105_emptyStreamMustTerminateBySignallingOnComplete", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{"optional_spec111_maySupportMultiSubscribe", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{"optional_spec111_multicast_mustProduceTheSameElementsInTheSameSequenceToAllOfItsSubscribersWhenRequestingManyUpfront", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{"optional_spec111_multicast_mustProduceTheSameElementsInTheSameSequenceToAllOfItsSubscribersWhenRequestingManyUpfrontAndCompleteAsExpected", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{"optional_spec111_multicast_mustProduceTheSameElementsInTheSameSequenceToAllOfItsSubscribersWhenRequestingOneByOne", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{"optional_spec111_registeredSubscribersMustReceiveOnNextOrOnCompleteSignals", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{"optional_spec309_requestNegativeNumberMaySignalIllegalArgumentExceptionWithSpecificMessage", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{"required_createPublisher1MustProduceAStreamOfExactly1Element", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{"required_createPublisher3MustProduceAStreamOfExactly3Elements", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{"required_spec101_subscriptionRequestMustResultInTheCorrectNumberOfProducedElements", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{"required_spec102_maySignalLessThanRequestedAndTerminateSubscription", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{"required_spec105_mustSignalOnCompleteWhenFiniteStreamTerminates", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{"required_spec107_mustNotEmitFurtherSignalsOnceOnCompleteHasBeenSignalled", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{"required_spec109_mayRejectCallsToSubscribeIfPublisherIsUnableOrUnwillingToServeThemRejectionMustTriggerOnErrorAfterOnSubscribe", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{"required_spec109_mustIssueOnSubscribeForNonNullSubscriber", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{"required_spec109_subscribeThrowNPEOnNullSubscriber", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{"required_spec302_mustAllowSynchronousRequestCallsFromOnNextAndOnSubscribe", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{"required_spec303_mustNotAllowUnboundedRecursion", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{"required_spec306_afterSubscriptionIsCancelledRequestMustBeNops", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{"required_spec307_afterSubscriptionIsCancelledAdditionalCancelationsMustBeNops", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{"required_spec309_requestNegativeNumberMustSignalIllegalArgumentException", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{"required_spec309_requestZeroMustSignalIllegalArgumentException", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{"required_spec312_cancelMustMakeThePublisherToEventuallyStopSignaling", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{"required_spec313_cancelMustMakeThePublisherEventuallyDropAllReferencesToTheSubscriber", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{"required_spec317_mustNotSignalOnErrorWhenPendingAboveLongMaxValue", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{"required_spec317_mustSupportACumulativePendingElementCountUpToLongMaxValue", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{"required_spec317_mustSupportAPendingElementCountUpToLongMaxValue", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{"required_validate_boundedDepthOfOnNextAndRequestRecursion", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Exception"},
	{"required_validate_maxElementsFromPublisher", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Exception"},
	{"stochastic_spec103_mustSignalOnMethodsSequentially", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{"untested_spec106_mustConsiderSubscriptionCancelledAfterOnErrorOrOnCompleteHasBeenCalled", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{"untested_spec107_mustNotEmitFurtherSignalsOnceOnErrorHasBeenSignalled", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{"untested_spec108_possiblyCanceledSubscriptionShouldNotReceiveOnErrorOrOnCompleteSignals", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{"untested_spec109_subscribeShouldNotThrowNonFatalThrowable", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{"untested_spec110_rejectASubscriptionRequestIfTheSameSubscriberSubscribesTwice", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{"untested_spec304_requestShouldNotPerformHeavyComputations", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Exception"},
	{"untested_spec305_cancelMustNotSynchronouslyPerformHeavyComputation", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Exception"},
	{}
};

$ClassInfo _PublisherVerificationRules_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.reactivestreams.tck.flow.support.PublisherVerificationRules",
	nullptr,
	nullptr,
	nullptr,
	_PublisherVerificationRules_MethodInfo_
};

$Object* allocate$PublisherVerificationRules($Class* clazz) {
	return $of($alloc(PublisherVerificationRules));
}

$Class* PublisherVerificationRules::load$($String* name, bool initialize) {
	$loadClass(PublisherVerificationRules, name, initialize, &_PublisherVerificationRules_ClassInfo_, allocate$PublisherVerificationRules);
	return class$;
}

$Class* PublisherVerificationRules::class$ = nullptr;

				} // support
			} // flow
		} // tck
	} // reactivestreams
} // org