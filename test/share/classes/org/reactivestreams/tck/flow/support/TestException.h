#ifndef _org_reactivestreams_tck_flow_support_TestException_h_
#define _org_reactivestreams_tck_flow_support_TestException_h_
//$ class org.reactivestreams.tck.flow.support.TestException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace org {
	namespace reactivestreams {
		namespace tck {
			namespace flow {
				namespace support {

class $export TestException : public ::java::lang::RuntimeException {
	$class(TestException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	TestException();
	void init$();
	TestException(const TestException& e);
	virtual void throw$() override;
	inline TestException* operator ->() {
		return (TestException*)throwing$;
	}
};

				} // support
			} // flow
		} // tck
	} // reactivestreams
} // org

#endif // _org_reactivestreams_tck_flow_support_TestException_h_