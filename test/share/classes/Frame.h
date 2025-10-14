#ifndef _Frame_h_
#define _Frame_h_
//$ class Frame
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("MAX_CONTROL_FRAME_PAYLOAD_SIZE")
#undef MAX_CONTROL_FRAME_PAYLOAD_SIZE
#pragma push_macro("MAX_HEADER_SIZE_BYTES")
#undef MAX_HEADER_SIZE_BYTES

class Frame$Opcode;
namespace java {
	namespace nio {
		class ByteBuffer;
	}
}

class Frame : public ::java::lang::Object {
	$class(Frame, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Frame();
	void init$(::Frame$Opcode* opcode, ::java::nio::ByteBuffer* data, bool last);
	::Frame$Opcode* opcode = nullptr;
	::java::nio::ByteBuffer* data = nullptr;
	bool last = false;
	static const int32_t MAX_HEADER_SIZE_BYTES = 14; // 2 + 8 + 4
	static const int32_t MAX_CONTROL_FRAME_PAYLOAD_SIZE = 125;
};

#pragma pop_macro("MAX_CONTROL_FRAME_PAYLOAD_SIZE")
#pragma pop_macro("MAX_HEADER_SIZE_BYTES")

#endif // _Frame_h_