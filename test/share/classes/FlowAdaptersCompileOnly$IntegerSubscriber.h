#ifndef _FlowAdaptersCompileOnly$IntegerSubscriber_h_
#define _FlowAdaptersCompileOnly$IntegerSubscriber_h_
//$ class FlowAdaptersCompileOnly$IntegerSubscriber
//$ extends FlowAdaptersCompileOnly$NumberSubscriber

#include <FlowAdaptersCompileOnly$NumberSubscriber.h>

namespace java {
	namespace lang {
		class Integer;
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

class $export FlowAdaptersCompileOnly$IntegerSubscriber : public ::FlowAdaptersCompileOnly$NumberSubscriber {
	$class(FlowAdaptersCompileOnly$IntegerSubscriber, $NO_CLASS_INIT, ::FlowAdaptersCompileOnly$NumberSubscriber)
public:
	FlowAdaptersCompileOnly$IntegerSubscriber();
	void init$();
	virtual ::java::lang::Integer* getInteger();
	virtual void onComplete() override;
	virtual void onError($Throwable* throwable) override;
	virtual void onNext(::java::util::List* item) override;
	virtual void onNext(Object$* item) override;
	virtual void onSubscribe(::java::util::concurrent::Flow$Subscription* subscription) override;
};

#endif // _FlowAdaptersCompileOnly$IntegerSubscriber_h_