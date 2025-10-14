#ifndef _LineAdaptersCompileOnly$StringSubscriber_h_
#define _LineAdaptersCompileOnly$StringSubscriber_h_
//$ class LineAdaptersCompileOnly$StringSubscriber
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

class $export LineAdaptersCompileOnly$StringSubscriber : public ::java::util::concurrent::Flow$Subscriber {
	$class(LineAdaptersCompileOnly$StringSubscriber, $NO_CLASS_INIT, ::java::util::concurrent::Flow$Subscriber)
public:
	LineAdaptersCompileOnly$StringSubscriber();
	void init$();
	virtual void onComplete() override;
	virtual void onError($Throwable* throwable) override;
	virtual void onNext($String* item);
	virtual void onNext(Object$* item) override;
	virtual void onSubscribe(::java::util::concurrent::Flow$Subscription* subscription) override;
};

#endif // _LineAdaptersCompileOnly$StringSubscriber_h_