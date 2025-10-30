#include <HandshakeFailureTest$ExceptionChecker.h>

#include <HandshakeFailureTest$ExpectedExceptionType.h>
#include <HandshakeFailureTest.h>
#include <java/lang/AssertionError.h>
#include <jcpp.h>

#undef WSAECONNABORTED

using $HandshakeFailureTest = ::HandshakeFailureTest;
using $HandshakeFailureTest$ExpectedExceptionType = ::HandshakeFailureTest$ExpectedExceptionType;
using $PrintStream = ::java::io::PrintStream;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _HandshakeFailureTest$ExceptionChecker_FieldInfo_[] = {
	{"count", "I", nullptr, 0, $field(HandshakeFailureTest$ExceptionChecker, count)},
	{"aborted", "Ljava/lang/Throwable;", nullptr, 0, $field(HandshakeFailureTest$ExceptionChecker, aborted)},
	{}
};

$MethodInfo _HandshakeFailureTest$ExceptionChecker_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HandshakeFailureTest$ExceptionChecker::*)()>(&HandshakeFailureTest$ExceptionChecker::init$))},
	{"check", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(HandshakeFailureTest$ExceptionChecker::*)($Throwable*)>(&HandshakeFailureTest$ExceptionChecker::check))},
	{"check", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(HandshakeFailureTest$ExceptionChecker::*)(int32_t)>(&HandshakeFailureTest$ExceptionChecker::check))},
	{}
};

$InnerClassInfo _HandshakeFailureTest$ExceptionChecker_InnerClassesInfo_[] = {
	{"HandshakeFailureTest$ExceptionChecker", "HandshakeFailureTest", "ExceptionChecker", $STATIC | $FINAL},
	{}
};

$ClassInfo _HandshakeFailureTest$ExceptionChecker_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"HandshakeFailureTest$ExceptionChecker",
	"java.lang.Object",
	nullptr,
	_HandshakeFailureTest$ExceptionChecker_FieldInfo_,
	_HandshakeFailureTest$ExceptionChecker_MethodInfo_,
	nullptr,
	nullptr,
	_HandshakeFailureTest$ExceptionChecker_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HandshakeFailureTest"
};

$Object* allocate$HandshakeFailureTest$ExceptionChecker($Class* clazz) {
	return $of($alloc(HandshakeFailureTest$ExceptionChecker));
}

void HandshakeFailureTest$ExceptionChecker::init$() {
	$set(this, aborted, nullptr);
}

void HandshakeFailureTest$ExceptionChecker::check($Throwable* expected) {
	$init($HandshakeFailureTest$ExpectedExceptionType);
	if ($HandshakeFailureTest$ExpectedExceptionType::WSAECONNABORTED == $HandshakeFailureTest::checkExceptionOrCause(expected)) {
		++this->count;
		$set(this, aborted, expected);
	}
}

void HandshakeFailureTest$ExceptionChecker::check(int32_t max) {
	$useLocalCurrentObjectStackCache();
	if (this->count > max) {
		$nc($System::out)->println($$str({"WSAECONNABORTED received too many times: "_s, $$str(this->count)}));
		$nc(this->aborted)->printStackTrace($System::out);
		$throwNew($AssertionError, $$str({"WSAECONNABORTED received too many times: "_s, $$str(this->count)}), this->aborted);
	}
}

HandshakeFailureTest$ExceptionChecker::HandshakeFailureTest$ExceptionChecker() {
}

$Class* HandshakeFailureTest$ExceptionChecker::load$($String* name, bool initialize) {
	$loadClass(HandshakeFailureTest$ExceptionChecker, name, initialize, &_HandshakeFailureTest$ExceptionChecker_ClassInfo_, allocate$HandshakeFailureTest$ExceptionChecker);
	return class$;
}

$Class* HandshakeFailureTest$ExceptionChecker::class$ = nullptr;