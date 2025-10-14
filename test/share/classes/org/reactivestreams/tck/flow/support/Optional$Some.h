#ifndef _org_reactivestreams_tck_flow_support_Optional$Some_h_
#define _org_reactivestreams_tck_flow_support_Optional$Some_h_
//$ class org.reactivestreams.tck.flow.support.Optional$Some
//$ extends org.reactivestreams.tck.flow.support.Optional

#include <org/reactivestreams/tck/flow/support/Optional.h>

namespace org {
	namespace reactivestreams {
		namespace tck {
			namespace flow {
				namespace support {

class $export Optional$Some : public ::org::reactivestreams::tck::flow::support::Optional {
	$class(Optional$Some, $NO_CLASS_INIT, ::org::reactivestreams::tck::flow::support::Optional)
public:
	Optional$Some();
	void init$(Object$* value);
	virtual $Object* get() override;
	virtual bool isEmpty() override;
	virtual $String* toString() override;
	$Object* value = nullptr;
};

				} // support
			} // flow
		} // tck
	} // reactivestreams
} // org

#endif // _org_reactivestreams_tck_flow_support_Optional$Some_h_