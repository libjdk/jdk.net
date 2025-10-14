#ifndef _S_h_
#define _S_h_
//$ class S
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("RANDOM")
#undef RANDOM
#pragma push_macro("S")
#undef S

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace util {
		class List;
		class Random;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class Flow$Publisher;
			class Flow$Subscriber;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Stream;
		}
	}
}

class $export S : public ::java::lang::Object {
	$class(S, 0, ::java::lang::Object)
public:
	S();
	void init$();
	static $bytes* arrayOfNRandomBytes(int32_t nBytes);
	static $bytes* arrayOfNRandomBytes(int64_t nBytes);
	static ::java::nio::ByteBuffer* bufferOfNRandomASCIIBytes(int32_t capacity);
	static ::java::nio::ByteBuffer* bufferOfNRandomBytes(int32_t capacity);
	static ::java::io::InputStream* inputStreamOfNReads(int64_t n);
	static void lambda$newErroredPublisher$0(::java::util::concurrent::Flow$Subscriber* subscriber);
	static ::java::util::List* listOfBuffersFromBufferOfNBytes(int32_t nBytes);
	static ::java::util::concurrent::Flow$Publisher* newErroredPublisher();
	static ::java::util::concurrent::Flow$Subscriber* nonCompliantSubscriber();
	static ::java::util::concurrent::Flow$Publisher* publisherOfStream(::java::util::stream::Stream* stream);
	static int32_t randomIntUpTo(int32_t bound);
	static ::java::util::List* scatterBuffer(::java::nio::ByteBuffer* src);
	static ::java::util::Random* RANDOM;
};

#pragma pop_macro("RANDOM")
#pragma pop_macro("S")

#endif // _S_h_