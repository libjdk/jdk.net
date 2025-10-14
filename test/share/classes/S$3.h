#ifndef _S$3_h_
#define _S$3_h_
//$ class S$3
//$ extends java.util.concurrent.Flow$Publisher

#include <java/util/concurrent/Flow$Publisher.h>

namespace java {
	namespace util {
		namespace concurrent {
			class Flow$Subscriber;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Stream;
		}
	}
}

class S$3 : public ::java::util::concurrent::Flow$Publisher {
	$class(S$3, $NO_CLASS_INIT, ::java::util::concurrent::Flow$Publisher)
public:
	S$3();
	void init$(::java::util::stream::Stream* val$stream);
	virtual void subscribe(::java::util::concurrent::Flow$Subscriber* subscriber) override;
	::java::util::stream::Stream* val$stream = nullptr;
};

#endif // _S$3_h_