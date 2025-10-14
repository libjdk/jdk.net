#ifndef _Frame$Consumer_h_
#define _Frame$Consumer_h_
//$ interface Frame$Consumer
//$ extends java.lang.Object

#include <java/lang/Object.h>

class Frame$Opcode;
namespace java {
	namespace nio {
		class ByteBuffer;
	}
}

class Frame$Consumer : public ::java::lang::Object {
	$interface(Frame$Consumer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void endFrame() {}
	virtual void fin(bool value) {}
	virtual void mask(bool value) {}
	virtual void maskingKey(int32_t value) {}
	virtual void opcode(::Frame$Opcode* value) {}
	virtual void payloadData(::java::nio::ByteBuffer* data) {}
	virtual void payloadLen(int64_t value) {}
	virtual void rsv1(bool value) {}
	virtual void rsv2(bool value) {}
	virtual void rsv3(bool value) {}
};

#endif // _Frame$Consumer_h_