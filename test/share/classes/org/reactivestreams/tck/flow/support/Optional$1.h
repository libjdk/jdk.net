#ifndef _org_reactivestreams_tck_flow_support_Optional$1_h_
#define _org_reactivestreams_tck_flow_support_Optional$1_h_
//$ class org.reactivestreams.tck.flow.support.Optional$1
//$ extends org.reactivestreams.tck.flow.support.Optional

#include <org/reactivestreams/tck/flow/support/Optional.h>

namespace org {
	namespace reactivestreams {
		namespace tck {
			namespace flow {
				namespace support {

class Optional$1 : public ::org::reactivestreams::tck::flow::support::Optional {
	$class(Optional$1, $NO_CLASS_INIT, ::org::reactivestreams::tck::flow::support::Optional)
public:
	Optional$1();
	void init$();
	virtual $Object* get() override;
	virtual bool isEmpty() override;
};

				} // support
			} // flow
		} // tck
	} // reactivestreams
} // org

#endif // _org_reactivestreams_tck_flow_support_Optional$1_h_