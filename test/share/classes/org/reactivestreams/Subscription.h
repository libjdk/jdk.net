#ifndef _org_reactivestreams_Subscription_h_
#define _org_reactivestreams_Subscription_h_
//$ interface org.reactivestreams.Subscription
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace org {
	namespace reactivestreams {

class $export Subscription : public ::java::lang::Object {
	$interface(Subscription, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void cancel() {}
	virtual void request(int64_t n) {}
};

	} // reactivestreams
} // org

#endif // _org_reactivestreams_Subscription_h_