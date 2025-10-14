#ifndef _Frame$HeaderWriter_h_
#define _Frame$HeaderWriter_h_
//$ class Frame$HeaderWriter
//$ extends java.lang.Object

#include <java/lang/Object.h>

class Frame$Opcode;
namespace java {
	namespace nio {
		class ByteBuffer;
	}
}

class Frame$HeaderWriter : public ::java::lang::Object {
	$class(Frame$HeaderWriter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Frame$HeaderWriter();
	void init$();
	::Frame$HeaderWriter* fin(bool value);
	::Frame$HeaderWriter* mask(int32_t value);
	::Frame$HeaderWriter* noMask();
	::Frame$HeaderWriter* opcode(::Frame$Opcode* value);
	::Frame$HeaderWriter* payloadLen(int64_t value);
	::Frame$HeaderWriter* rsv1(bool value);
	::Frame$HeaderWriter* rsv2(bool value);
	::Frame$HeaderWriter* rsv3(bool value);
	void write(::java::nio::ByteBuffer* buffer);
	char16_t firstChar = 0;
	int64_t payloadLen$ = 0;
	int32_t maskingKey = 0;
	bool mask$ = false;
};

#endif // _Frame$HeaderWriter_h_