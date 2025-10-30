#include <org/reactivestreams/tck/flow/support/TestException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace org {
	namespace reactivestreams {
		namespace tck {
			namespace flow {
				namespace support {

$MethodInfo _TestException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestException::*)()>(&TestException::init$))},
	{}
};

$ClassInfo _TestException_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"org.reactivestreams.tck.flow.support.TestException",
	"java.lang.RuntimeException",
	nullptr,
	nullptr,
	_TestException_MethodInfo_
};

$Object* allocate$TestException($Class* clazz) {
	return $of($alloc(TestException));
}

void TestException::init$() {
	$RuntimeException::init$("Test Exception: Boom!"_s);
}

TestException::TestException() {
}

TestException::TestException(const TestException& e) : $RuntimeException(e) {
}

void TestException::throw$() {
	throw *this;
}

$Class* TestException::load$($String* name, bool initialize) {
	$loadClass(TestException, name, initialize, &_TestException_ClassInfo_, allocate$TestException);
	return class$;
}

$Class* TestException::class$ = nullptr;

				} // support
			} // flow
		} // tck
	} // reactivestreams
} // org