#ifndef _FlowAdaptersCompileOnly$MBBPublisher_h_
#define _FlowAdaptersCompileOnly$MBBPublisher_h_
//$ class FlowAdaptersCompileOnly$MBBPublisher
//$ extends java.util.concurrent.Flow$Publisher

#include <java/util/concurrent/Flow$Publisher.h>

namespace java {
	namespace util {
		namespace concurrent {
			class Flow$Subscriber;
		}
	}
}

class $export FlowAdaptersCompileOnly$MBBPublisher : public ::java::util::concurrent::Flow$Publisher {
	$class(FlowAdaptersCompileOnly$MBBPublisher, $NO_CLASS_INIT, ::java::util::concurrent::Flow$Publisher)
public:
	FlowAdaptersCompileOnly$MBBPublisher();
	void init$();
	virtual void subscribe(::java::util::concurrent::Flow$Subscriber* subscriber) override;
};

#endif // _FlowAdaptersCompileOnly$MBBPublisher_h_