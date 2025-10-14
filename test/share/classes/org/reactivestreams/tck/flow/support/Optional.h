#ifndef _org_reactivestreams_tck_flow_support_Optional_h_
#define _org_reactivestreams_tck_flow_support_Optional_h_
//$ class org.reactivestreams.tck.flow.support.Optional
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("NONE")
#undef NONE

namespace org {
	namespace reactivestreams {
		namespace tck {
			namespace flow {
				namespace support {

class $export Optional : public ::java::lang::Object {
	$class(Optional, 0, ::java::lang::Object)
public:
	Optional();
	void init$();
	static ::org::reactivestreams::tck::flow::support::Optional* empty();
	virtual $Object* get() {return nullptr;}
	virtual bool isDefined();
	virtual bool isEmpty() {return false;}
	static ::org::reactivestreams::tck::flow::support::Optional* of(Object$* it);
	virtual $String* toString() override;
	static ::org::reactivestreams::tck::flow::support::Optional* NONE;
};

				} // support
			} // flow
		} // tck
	} // reactivestreams
} // org

#pragma pop_macro("NONE")

#endif // _org_reactivestreams_tck_flow_support_Optional_h_