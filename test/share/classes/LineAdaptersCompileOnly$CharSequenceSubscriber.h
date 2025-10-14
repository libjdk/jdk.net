#ifndef _LineAdaptersCompileOnly$CharSequenceSubscriber_h_
#define _LineAdaptersCompileOnly$CharSequenceSubscriber_h_
//$ class LineAdaptersCompileOnly$CharSequenceSubscriber
//$ extends java.util.concurrent.Flow$Subscriber

#include <java/util/concurrent/Flow$Subscriber.h>

namespace java {
	namespace lang {
		class CharSequence;
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

class $export LineAdaptersCompileOnly$CharSequenceSubscriber : public ::java::util::concurrent::Flow$Subscriber {
	$class(LineAdaptersCompileOnly$CharSequenceSubscriber, $NO_CLASS_INIT, ::java::util::concurrent::Flow$Subscriber)
public:
	LineAdaptersCompileOnly$CharSequenceSubscriber();
	void init$();
	virtual void onComplete() override;
	virtual void onError($Throwable* throwable) override;
	virtual void onNext(::java::lang::CharSequence* item);
	virtual void onNext(Object$* item) override;
	virtual void onSubscribe(::java::util::concurrent::Flow$Subscription* subscription) override;
};

#endif // _LineAdaptersCompileOnly$CharSequenceSubscriber_h_