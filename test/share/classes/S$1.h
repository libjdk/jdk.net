#ifndef _S$1_h_
#define _S$1_h_
//$ class S$1
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

class S$1 : public ::java::util::concurrent::Flow$Subscriber {
	$class(S$1, $NO_CLASS_INIT, ::java::util::concurrent::Flow$Subscriber)
public:
	S$1();
	void init$();
	virtual void onComplete() override;
	virtual void onError($Throwable* throwable) override;
	virtual void onNext(Object$* item) override;
	virtual void onSubscribe(::java::util::concurrent::Flow$Subscription* subscription) override;
};

#endif // _S$1_h_