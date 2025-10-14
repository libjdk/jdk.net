#ifndef _S$2_h_
#define _S$2_h_
//$ class S$2
//$ extends java.util.concurrent.Flow$Subscription

#include <java/util/concurrent/Flow$Subscription.h>

class S$2 : public ::java::util::concurrent::Flow$Subscription {
	$class(S$2, $NO_CLASS_INIT, ::java::util::concurrent::Flow$Subscription)
public:
	S$2();
	void init$();
	virtual void cancel() override;
	virtual void request(int64_t n) override;
};

#endif // _S$2_h_