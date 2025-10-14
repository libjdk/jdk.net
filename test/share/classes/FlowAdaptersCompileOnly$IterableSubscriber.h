#ifndef _FlowAdaptersCompileOnly$IterableSubscriber_h_
#define _FlowAdaptersCompileOnly$IterableSubscriber_h_
//$ class FlowAdaptersCompileOnly$IterableSubscriber
//$ extends java.util.concurrent.Flow$Subscriber

#include <java/util/concurrent/Flow$Subscriber.h>

namespace java {
	namespace lang {
		class Iterable;
		class Throwable;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class Flow$Subscription;
		}
	}
}

class $export FlowAdaptersCompileOnly$IterableSubscriber : public ::java::util::concurrent::Flow$Subscriber {
	$class(FlowAdaptersCompileOnly$IterableSubscriber, $NO_CLASS_INIT, ::java::util::concurrent::Flow$Subscriber)
public:
	FlowAdaptersCompileOnly$IterableSubscriber();
	void init$();
	virtual void onComplete() override;
	virtual void onError($Throwable* throwable) override;
	virtual void onNext(::java::lang::Iterable* item);
	virtual void onNext(Object$* item) override;
	virtual void onSubscribe(::java::util::concurrent::Flow$Subscription* subscription) override;
};

#endif // _FlowAdaptersCompileOnly$IterableSubscriber_h_