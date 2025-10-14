#ifndef _org_reactivestreams_tck_flow_support_Function_h_
#define _org_reactivestreams_tck_flow_support_Function_h_
//$ interface org.reactivestreams.tck.flow.support.Function
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace org {
	namespace reactivestreams {
		namespace tck {
			namespace flow {
				namespace support {

class $export Function : public ::java::lang::Object {
	$interface(Function, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* apply(Object$* in) {return nullptr;}
};

				} // support
			} // flow
		} // tck
	} // reactivestreams
} // org

#endif // _org_reactivestreams_tck_flow_support_Function_h_