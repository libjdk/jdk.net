#include <org/reactivestreams/tck/flow/support/Function.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace org {
	namespace reactivestreams {
		namespace tck {
			namespace flow {
				namespace support {

$MethodInfo _Function_MethodInfo_[] = {
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TIn;)TOut;", $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{}
};

$ClassInfo _Function_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.reactivestreams.tck.flow.support.Function",
	nullptr,
	nullptr,
	nullptr,
	_Function_MethodInfo_,
	"<In:Ljava/lang/Object;Out:Ljava/lang/Object;>Ljava/lang/Object;"
};

$Object* allocate$Function($Class* clazz) {
	return $of($alloc(Function));
}

$Class* Function::load$($String* name, bool initialize) {
	$loadClass(Function, name, initialize, &_Function_ClassInfo_, allocate$Function);
	return class$;
}

$Class* Function::class$ = nullptr;

				} // support
			} // flow
		} // tck
	} // reactivestreams
} // org