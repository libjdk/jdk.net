#ifndef _Frame$Reader_h_
#define _Frame$Reader_h_
//$ class Frame$Reader
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("AWAITING_FIRST_BYTE")
#undef AWAITING_FIRST_BYTE
#pragma push_macro("AWAITING_SECOND_BYTE")
#undef AWAITING_SECOND_BYTE
#pragma push_macro("READING_16_LENGTH")
#undef READING_16_LENGTH
#pragma push_macro("READING_64_LENGTH")
#undef READING_64_LENGTH
#pragma push_macro("READING_MASK")
#undef READING_MASK
#pragma push_macro("READING_PAYLOAD")
#undef READING_PAYLOAD

class Frame$Consumer;
namespace java {
	namespace lang {
		class IllegalArgumentException;
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
	}
}

class Frame$Reader : public ::java::lang::Object {
	$class(Frame$Reader, 0, ::java::lang::Object)
public:
	Frame$Reader();
	void init$();
	static ::java::lang::IllegalArgumentException* negativePayload(int64_t payloadLength);
	static ::java::lang::IllegalArgumentException* notMinimalEncoding(int64_t payloadLength);
	void readFrame(::java::nio::ByteBuffer* input, ::Frame$Consumer* consumer);
	static bool $assertionsDisabled;
	static const int32_t AWAITING_FIRST_BYTE = 1;
	static const int32_t AWAITING_SECOND_BYTE = 2;
	static const int32_t READING_16_LENGTH = 4;
	static const int32_t READING_64_LENGTH = 8;
	static const int32_t READING_MASK = 16;
	static const int32_t READING_PAYLOAD = 32;
	::java::nio::ByteBuffer* accumulator = nullptr;
	int32_t state = 0;
	bool mask = false;
	int64_t remainingPayloadLength = 0;
};

#pragma pop_macro("AWAITING_FIRST_BYTE")
#pragma pop_macro("AWAITING_SECOND_BYTE")
#pragma pop_macro("READING_16_LENGTH")
#pragma pop_macro("READING_64_LENGTH")
#pragma pop_macro("READING_MASK")
#pragma pop_macro("READING_PAYLOAD")

#endif // _Frame$Reader_h_