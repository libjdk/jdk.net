#include <org/reactivestreams/tck/flow/support/TestException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

TestException::TestException(const TestException& e) {
}

TestException TestException::wrapper$() {
	$pendingException(this);
	return *this;
}

void TestException::throwWrapper$() {
	$pendingException(this);
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