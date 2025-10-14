#ifndef _FlowAdaptersCompileOnly$ObjectSubscriber_h_
#define _FlowAdaptersCompileOnly$ObjectSubscriber_h_
//$ class FlowAdaptersCompileOnly$ObjectSubscriber
//$ extends java.util.concurrent.Flow$Subscriber

#include <java/util/concurrent/Flow$Subscriber.h>

namespace java {
	namespace lang {
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

class $export FlowAdaptersCompileOnly$ObjectSubscriber : public ::java::util::concurrent::Flow$Subscriber {
	$class(FlowAdaptersCompileOnly$ObjectSubscriber, $NO_CLASS_INIT, ::java::util::concurrent::Flow$Subscriber)
public:
	FlowAdaptersCompileOnly$ObjectSubscriber();
	void init$();
	virtual void onComplete() override;
	virtual void onError($Throwable* throwable) override;
	virtual void onNext(Object$* item) override;
	virtual void onSubscribe(::java::util::concurrent::Flow$Subscription* subscription) override;
};

#endif // _FlowAdaptersCompileOnly$ObjectSubscriber_h_