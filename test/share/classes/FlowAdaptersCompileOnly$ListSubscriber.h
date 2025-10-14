#ifndef _FlowAdaptersCompileOnly$ListSubscriber_h_
#define _FlowAdaptersCompileOnly$ListSubscriber_h_
//$ class FlowAdaptersCompileOnly$ListSubscriber
//$ extends java.util.concurrent.Flow$Subscriber

#include <java/util/concurrent/Flow$Subscriber.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class Flow$Subscription;
		}
	}
}

class $export FlowAdaptersCompileOnly$ListSubscriber : public ::java::util::concurrent::Flow$Subscriber {
	$class(FlowAdaptersCompileOnly$ListSubscriber, $NO_CLASS_INIT, ::java::util::concurrent::Flow$Subscriber)
public:
	FlowAdaptersCompileOnly$ListSubscriber();
	void init$();
	virtual void onComplete() override;
	virtual void onError($Throwable* throwable) override;
	virtual void onNext(::java::util::List* item);
	virtual void onNext(Object$* item) override;
	virtual void onSubscribe(::java::util::concurrent::Flow$Subscription* subscription) override;
};

#endif // _FlowAdaptersCompileOnly$ListSubscriber_h_