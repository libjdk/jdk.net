#ifndef _FlowAdaptersCompileOnly$CollectionSubscriber_h_
#define _FlowAdaptersCompileOnly$CollectionSubscriber_h_
//$ class FlowAdaptersCompileOnly$CollectionSubscriber
//$ extends java.util.concurrent.Flow$Subscriber

#include <java/util/concurrent/Flow$Subscriber.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}
namespace java {
	namespace util {
		class Collection;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class Flow$Subscription;
		}
	}
}

class $export FlowAdaptersCompileOnly$CollectionSubscriber : public ::java::util::concurrent::Flow$Subscriber {
	$class(FlowAdaptersCompileOnly$CollectionSubscriber, $NO_CLASS_INIT, ::java::util::concurrent::Flow$Subscriber)
public:
	FlowAdaptersCompileOnly$CollectionSubscriber();
	void init$();
	virtual void onComplete() override;
	virtual void onError($Throwable* throwable) override;
	virtual void onNext(::java::util::Collection* item);
	virtual void onNext(Object$* item) override;
	virtual void onSubscribe(::java::util::concurrent::Flow$Subscription* subscription) override;
};

#endif // _FlowAdaptersCompileOnly$CollectionSubscriber_h_