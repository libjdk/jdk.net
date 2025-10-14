#ifndef _S$3$1_h_
#define _S$3$1_h_
//$ class S$3$1
//$ extends java.util.concurrent.Flow$Subscription

#include <java/util/concurrent/Flow$Subscription.h>

class S$3;
namespace java {
	namespace util {
		class Iterator;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class Flow$Subscriber;
		}
	}
}

class S$3$1 : public ::java::util::concurrent::Flow$Subscription {
	$class(S$3$1, $NO_CLASS_INIT, ::java::util::concurrent::Flow$Subscription)
public:
	S$3$1();
	void init$(::S$3* this$0, ::java::util::concurrent::Flow$Subscriber* val$subscriber);
	virtual void cancel() override;
	virtual void request(int64_t n) override;
	::S$3* this$0 = nullptr;
	::java::util::concurrent::Flow$Subscriber* val$subscriber = nullptr;
	bool inOnNext = false;
	$volatile(bool) cancelled = false;
	int64_t demand = 0;
	::java::util::Iterator* supply = nullptr;
};

#endif // _S$3$1_h_