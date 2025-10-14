#ifndef _FlowAdaptersCompileOnly$BBPublisher_h_
#define _FlowAdaptersCompileOnly$BBPublisher_h_
//$ class FlowAdaptersCompileOnly$BBPublisher
//$ extends java.util.concurrent.Flow$Publisher

#include <java/util/concurrent/Flow$Publisher.h>

namespace java {
	namespace util {
		namespace concurrent {
			class Flow$Subscriber;
		}
	}
}

class $export FlowAdaptersCompileOnly$BBPublisher : public ::java::util::concurrent::Flow$Publisher {
	$class(FlowAdaptersCompileOnly$BBPublisher, $NO_CLASS_INIT, ::java::util::concurrent::Flow$Publisher)
public:
	FlowAdaptersCompileOnly$BBPublisher();
	void init$();
	virtual void subscribe(::java::util::concurrent::Flow$Subscriber* subscriber) override;
};

#endif // _FlowAdaptersCompileOnly$BBPublisher_h_