#ifndef _FlowAdaptersCompileOnly$LongSubscriber_h_
#define _FlowAdaptersCompileOnly$LongSubscriber_h_
//$ class FlowAdaptersCompileOnly$LongSubscriber
//$ extends FlowAdaptersCompileOnly$NumberSubscriber

#include <FlowAdaptersCompileOnly$NumberSubscriber.h>

namespace java {
	namespace lang {
		class Long;
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

class $export FlowAdaptersCompileOnly$LongSubscriber : public ::FlowAdaptersCompileOnly$NumberSubscriber {
	$class(FlowAdaptersCompileOnly$LongSubscriber, $NO_CLASS_INIT, ::FlowAdaptersCompileOnly$NumberSubscriber)
public:
	FlowAdaptersCompileOnly$LongSubscriber();
	void init$();
	virtual ::java::lang::Long* getLong();
	virtual void onComplete() override;
	virtual void onError($Throwable* throwable) override;
	virtual void onNext(::java::util::List* item) override;
	virtual void onNext(Object$* item) override;
	virtual void onSubscribe(::java::util::concurrent::Flow$Subscription* subscription) override;
};

#endif // _FlowAdaptersCompileOnly$LongSubscriber_h_