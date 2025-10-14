#ifndef _JavadocExamples$PrintSubscriber_h_
#define _JavadocExamples$PrintSubscriber_h_
//$ class JavadocExamples$PrintSubscriber
//$ extends java.util.concurrent.Flow$Subscriber

#include <java/util/concurrent/Flow$Subscriber.h>

namespace java {
	namespace io {
		class PrintStream;
	}
}
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

class $export JavadocExamples$PrintSubscriber : public ::java::util::concurrent::Flow$Subscriber {
	$class(JavadocExamples$PrintSubscriber, $NO_CLASS_INIT, ::java::util::concurrent::Flow$Subscriber)
public:
	JavadocExamples$PrintSubscriber();
	void init$(::java::io::PrintStream* out);
	virtual void onComplete() override;
	virtual void onError($Throwable* throwable) override;
	void onNext($String* item);
	virtual void onNext(Object$* item) override;
	virtual void onSubscribe(::java::util::concurrent::Flow$Subscription* subscription) override;
	::java::io::PrintStream* out = nullptr;
};

#endif // _JavadocExamples$PrintSubscriber_h_