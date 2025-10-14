#ifndef _JavadocExamples$LineParserSubscriber_h_
#define _JavadocExamples$LineParserSubscriber_h_
//$ class JavadocExamples$LineParserSubscriber
//$ extends java.util.concurrent.Flow$Subscriber

#include <java/util/concurrent/Flow$Subscriber.h>

namespace java {
	namespace lang {
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
			class CopyOnWriteArrayList;
			class Flow$Subscription;
		}
	}
}
namespace java {
	namespace util {
		namespace regex {
			class Pattern;
		}
	}
}

class $export JavadocExamples$LineParserSubscriber : public ::java::util::concurrent::Flow$Subscriber {
	$class(JavadocExamples$LineParserSubscriber, $NO_CLASS_INIT, ::java::util::concurrent::Flow$Subscriber)
public:
	JavadocExamples$LineParserSubscriber();
	void init$(::java::util::regex::Pattern* pattern);
	::java::util::List* getMatchingLines();
	virtual void onComplete() override;
	virtual void onError($Throwable* throwable) override;
	void onNext($String* item);
	virtual void onNext(Object$* item) override;
	virtual void onSubscribe(::java::util::concurrent::Flow$Subscription* subscription) override;
	::java::util::regex::Pattern* pattern = nullptr;
	::java::util::concurrent::CopyOnWriteArrayList* matches = nullptr;
};

#endif // _JavadocExamples$LineParserSubscriber_h_