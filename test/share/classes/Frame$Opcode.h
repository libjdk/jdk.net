#ifndef _Frame$Opcode_h_
#define _Frame$Opcode_h_
//$ class Frame$Opcode
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("BINARY")
#undef BINARY
#pragma push_macro("CLOSE")
#undef CLOSE
#pragma push_macro("CONTINUATION")
#undef CONTINUATION
#pragma push_macro("PING")
#undef PING
#pragma push_macro("PONG")
#undef PONG
#pragma push_macro("TEXT")
#undef TEXT

class Frame$Opcode : public ::java::lang::Enum {
	$class(Frame$Opcode, 0, ::java::lang::Enum)
public:
	Frame$Opcode();
	static $Array<Frame$Opcode>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, int32_t code);
	virtual bool isControl();
	static ::Frame$Opcode* ofCode(int32_t code);
	static ::Frame$Opcode* valueOf($String* name);
	static $Array<Frame$Opcode>* values();
	static ::Frame$Opcode* CONTINUATION;
	static ::Frame$Opcode* TEXT;
	static ::Frame$Opcode* BINARY;
	static ::Frame$Opcode* NON_CONTROL_0x3;
	static ::Frame$Opcode* NON_CONTROL_0x4;
	static ::Frame$Opcode* NON_CONTROL_0x5;
	static ::Frame$Opcode* NON_CONTROL_0x6;
	static ::Frame$Opcode* NON_CONTROL_0x7;
	static ::Frame$Opcode* CLOSE;
	static ::Frame$Opcode* PING;
	static ::Frame$Opcode* PONG;
	static ::Frame$Opcode* CONTROL_0xB;
	static ::Frame$Opcode* CONTROL_0xC;
	static ::Frame$Opcode* CONTROL_0xD;
	static ::Frame$Opcode* CONTROL_0xE;
	static ::Frame$Opcode* CONTROL_0xF;
	static $Array<Frame$Opcode>* $VALUES;
	static $Array<Frame$Opcode>* opcodes;
	int8_t code = 0;
};

#pragma pop_macro("BINARY")
#pragma pop_macro("CLOSE")
#pragma pop_macro("CONTINUATION")
#pragma pop_macro("PING")
#pragma pop_macro("PONG")
#pragma pop_macro("TEXT")

#endif // _Frame$Opcode_h_