#ifndef _FlowAdaptersCompileOnly$NumberSubscriber_h_
#define _FlowAdaptersCompileOnly$NumberSubscriber_h_
//$ class FlowAdaptersCompileOnly$NumberSubscriber
//$ extends java.util.concurrent.Flow$Subscriber

#include <java/util/concurrent/Flow$Subscriber.h>

namespace java {
	namespace lang {
		class Number;
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

class $export FlowAdaptersCompileOnly$NumberSubscriber : public ::java::util::concurrent::Flow$Subscriber {
	$class(FlowAdaptersCompileOnly$NumberSubscriber, $NO_CLASS_INIT, ::java::util::concurrent::Flow$Subscriber)
public:
	FlowAdaptersCompileOnly$NumberSubscriber();
	void init$();
	virtual ::java::lang::Number* getNumber();
	virtual void onComplete() override;
	virtual void onError($Throwable* throwable) override;
	virtual void onNext(::java::util::List* item);
	virtual void onNext(Object$* item) override;
	virtual void onSubscribe(::java::util::concurrent::Flow$Subscription* subscription) override;
};

#endif // _FlowAdaptersCompileOnly$NumberSubscriber_h_