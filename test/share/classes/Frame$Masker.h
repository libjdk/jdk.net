#ifndef _Frame$Masker_h_
#define _Frame$Masker_h_
//$ class Frame$Masker
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}

class Frame$Masker : public ::java::lang::Object {
	$class(Frame$Masker, 0, ::java::lang::Object)
public:
	Frame$Masker();
	void init$();
	void begin(::java::nio::ByteBuffer* src, ::java::nio::ByteBuffer* dst);
	void end(::java::nio::ByteBuffer* src, ::java::nio::ByteBuffer* dst);
	void loop(::java::nio::ByteBuffer* src, ::java::nio::ByteBuffer* dst);
	::Frame$Masker* mask(int32_t value);
	static void transferMasking(::java::nio::ByteBuffer* src, ::java::nio::ByteBuffer* dst, int32_t mask);
	::Frame$Masker* transferMasking(::java::nio::ByteBuffer* src, ::java::nio::ByteBuffer* dst);
	static bool $assertionsDisabled;
	::java::nio::ByteBuffer* acc = nullptr;
	$ints* maskBytes = nullptr;
	int32_t offset = 0;
	int64_t maskLong = 0;
};

#endif // _Frame$Masker_h_