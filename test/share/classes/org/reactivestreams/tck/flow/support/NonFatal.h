#ifndef _org_reactivestreams_tck_flow_support_NonFatal_h_
#define _org_reactivestreams_tck_flow_support_NonFatal_h_
//$ class org.reactivestreams.tck.flow.support.NonFatal
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class $export NonFatal : public ::java::lang::Object {
	$class(NonFatal, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NonFatal();
	void init$();
	static bool isNonFatal($Throwable* t);
};

				} // support
			} // flow
		} // tck
	} // reactivestreams
} // org

#endif // _org_reactivestreams_tck_flow_support_NonFatal_h_