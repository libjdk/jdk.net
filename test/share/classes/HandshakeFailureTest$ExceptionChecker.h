#ifndef _HandshakeFailureTest$ExceptionChecker_h_
#define _HandshakeFailureTest$ExceptionChecker_h_
//$ class HandshakeFailureTest$ExceptionChecker
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

class $export HandshakeFailureTest$ExceptionChecker : public ::java::lang::Object {
	$class(HandshakeFailureTest$ExceptionChecker, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HandshakeFailureTest$ExceptionChecker();
	void init$();
	void check($Throwable* expected);
	void check(int32_t max);
	int32_t count = 0;
	$Throwable* aborted = nullptr;
};

#endif // _HandshakeFailureTest$ExceptionChecker_h_