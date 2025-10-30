#ifndef _org_reactivestreams_tck_flow_support_SubscriberBufferOverflowException_h_
#define _org_reactivestreams_tck_flow_support_SubscriberBufferOverflowException_h_
//$ class org.reactivestreams.tck.flow.support.SubscriberBufferOverflowException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace org {
	namespace reactivestreams {
		namespace tck {
			namespace flow {
				namespace support {

class $export SubscriberBufferOverflowException : public ::java::lang::RuntimeException {
	$class(SubscriberBufferOverflowException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	SubscriberBufferOverflowException();
	void init$();
	void init$($String* message);
	void init$($String* message, $Throwable* cause);
	void init$($Throwable* cause);
	SubscriberBufferOverflowException(const SubscriberBufferOverflowException& e);
	virtual void throw$() override;
	inline SubscriberBufferOverflowException* operator ->() {
		return (SubscriberBufferOverflowException*)throwing$;
	}
};

				} // support
			} // flow
		} // tck
	} // reactivestreams
} // org

#endif // _org_reactivestreams_tck_flow_support_SubscriberBufferOverflowException_h_