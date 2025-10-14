#ifndef _HandshakeFailureTest$ExpectedExceptionType_h_
#define _HandshakeFailureTest$ExpectedExceptionType_h_
//$ class HandshakeFailureTest$ExpectedExceptionType
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("HANDSHAKE_FAILURE")
#undef HANDSHAKE_FAILURE
#pragma push_macro("WSAECONNABORTED")
#undef WSAECONNABORTED

class $export HandshakeFailureTest$ExpectedExceptionType : public ::java::lang::Enum {
	$class(HandshakeFailureTest$ExpectedExceptionType, 0, ::java::lang::Enum)
public:
	HandshakeFailureTest$ExpectedExceptionType();
	static $Array<HandshakeFailureTest$ExpectedExceptionType>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::HandshakeFailureTest$ExpectedExceptionType* valueOf($String* name);
	static $Array<HandshakeFailureTest$ExpectedExceptionType>* values();
	static ::HandshakeFailureTest$ExpectedExceptionType* HANDSHAKE_FAILURE;
	static ::HandshakeFailureTest$ExpectedExceptionType* WSAECONNABORTED;
	static $Array<HandshakeFailureTest$ExpectedExceptionType>* $VALUES;
};

#pragma pop_macro("HANDSHAKE_FAILURE")
#pragma pop_macro("WSAECONNABORTED")

#endif // _HandshakeFailureTest$ExpectedExceptionType_h_