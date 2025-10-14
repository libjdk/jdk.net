#ifndef _LineAdaptersCompileOnly$ObjectSubscriber_h_
#define _LineAdaptersCompileOnly$ObjectSubscriber_h_
//$ class LineAdaptersCompileOnly$ObjectSubscriber
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

class $export LineAdaptersCompileOnly$ObjectSubscriber : public ::java::util::concurrent::Flow$Subscriber {
	$class(LineAdaptersCompileOnly$ObjectSubscriber, $NO_CLASS_INIT, ::java::util::concurrent::Flow$Subscriber)
public:
	LineAdaptersCompileOnly$ObjectSubscriber();
	void init$();
	virtual void onComplete() override;
	virtual void onError($Throwable* throwable) override;
	virtual void onNext(Object$* item) override;
	virtual void onSubscribe(::java::util::concurrent::Flow$Subscription* subscription) override;
};

#endif // _LineAdaptersCompileOnly$ObjectSubscriber_h_