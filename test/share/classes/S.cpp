#include <S.h>

#include <S$1.h>
#include <S$2.h>
#include <S$3.h>
#include <S$NReadsInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <java/security/SecureRandom.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/List.h>
#include <java/util/Random.h>
#include <java/util/concurrent/Flow$Publisher.h>
#include <java/util/concurrent/Flow$Subscriber.h>
#include <java/util/concurrent/Flow$Subscription.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef RANDOM
#undef S
#undef US_ASCII

using $S$1 = ::S$1;
using $S$2 = ::S$2;
using $S$3 = ::S$3;
using $S$NReadsInputStream = ::S$NReadsInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Charset = ::java::nio::charset::Charset;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $SecureRandom = ::java::security::SecureRandom;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $List = ::java::util::List;
using $Random = ::java::util::Random;
using $Flow$Publisher = ::java::util::concurrent::Flow$Publisher;
using $Flow$Subscriber = ::java::util::concurrent::Flow$Subscriber;
using $Flow$Subscription = ::java::util::concurrent::Flow$Subscription;
using $Stream = ::java::util::stream::Stream;

class S$$Lambda$lambda$newErroredPublisher$0 : public $Flow$Publisher {
	$class(S$$Lambda$lambda$newErroredPublisher$0, $NO_CLASS_INIT, $Flow$Publisher)
public:
	void init$() {
	}
	virtual void subscribe($Flow$Subscriber* subscriber) override {
		S::lambda$newErroredPublisher$0(subscriber);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<S$$Lambda$lambda$newErroredPublisher$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo S$$Lambda$lambda$newErroredPublisher$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(S$$Lambda$lambda$newErroredPublisher$0::*)()>(&S$$Lambda$lambda$newErroredPublisher$0::init$))},
	{"subscribe", "(Ljava/util/concurrent/Flow$Subscriber;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo S$$Lambda$lambda$newErroredPublisher$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"S$$Lambda$lambda$newErroredPublisher$0",
	"java.lang.Object",
	"java.util.concurrent.Flow$Publisher",
	nullptr,
	methodInfos
};
$Class* S$$Lambda$lambda$newErroredPublisher$0::load$($String* name, bool initialize) {
	$loadClass(S$$Lambda$lambda$newErroredPublisher$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* S$$Lambda$lambda$newErroredPublisher$0::class$ = nullptr;

$FieldInfo _S_FieldInfo_[] = {
	{"RANDOM", "Ljava/util/Random;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(S, RANDOM)},
	{}
};

$MethodInfo _S_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(S::*)()>(&S::init$))},
	{"arrayOfNRandomBytes", "(I)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)(int32_t)>(&S::arrayOfNRandomBytes))},
	{"arrayOfNRandomBytes", "(J)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)(int64_t)>(&S::arrayOfNRandomBytes))},
	{"bufferOfNRandomASCIIBytes", "(I)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ByteBuffer*(*)(int32_t)>(&S::bufferOfNRandomASCIIBytes))},
	{"bufferOfNRandomBytes", "(I)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ByteBuffer*(*)(int32_t)>(&S::bufferOfNRandomBytes))},
	{"inputStreamOfNReads", "(J)Ljava/io/InputStream;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$InputStream*(*)(int64_t)>(&S::inputStreamOfNReads))},
	{"lambda$newErroredPublisher$0", "(Ljava/util/concurrent/Flow$Subscriber;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($Flow$Subscriber*)>(&S::lambda$newErroredPublisher$0))},
	{"listOfBuffersFromBufferOfNBytes", "(I)Ljava/util/List;", "(I)Ljava/util/List<Ljava/nio/ByteBuffer;>;", $PUBLIC | $STATIC, $method(static_cast<$List*(*)(int32_t)>(&S::listOfBuffersFromBufferOfNBytes))},
	{"newErroredPublisher", "()Ljava/util/concurrent/Flow$Publisher;", "<T:Ljava/lang/Object;>()Ljava/util/concurrent/Flow$Publisher<TT;>;", $PUBLIC | $STATIC, $method(static_cast<$Flow$Publisher*(*)()>(&S::newErroredPublisher))},
	{"nonCompliantSubscriber", "()Ljava/util/concurrent/Flow$Subscriber;", "<T:Ljava/lang/Object;>()Ljava/util/concurrent/Flow$Subscriber<TT;>;", $PUBLIC | $STATIC, $method(static_cast<$Flow$Subscriber*(*)()>(&S::nonCompliantSubscriber))},
	{"publisherOfStream", "(Ljava/util/stream/Stream;)Ljava/util/concurrent/Flow$Publisher;", "<T:Ljava/lang/Object;>(Ljava/util/stream/Stream<+TT;>;)Ljava/util/concurrent/Flow$Publisher<TT;>;", $PUBLIC | $STATIC, $method(static_cast<$Flow$Publisher*(*)($Stream*)>(&S::publisherOfStream))},
	{"randomIntUpTo", "(I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&S::randomIntUpTo))},
	{"scatterBuffer", "(Ljava/nio/ByteBuffer;)Ljava/util/List;", "(Ljava/nio/ByteBuffer;)Ljava/util/List<Ljava/nio/ByteBuffer;>;", $PUBLIC | $STATIC, $method(static_cast<$List*(*)($ByteBuffer*)>(&S::scatterBuffer))},
	{}
};

$InnerClassInfo _S_InnerClassesInfo_[] = {
	{"S$NReadsInputStream", "S", "NReadsInputStream", $STATIC | $FINAL},
	{"S$2", nullptr, nullptr, 0},
	{"S$3", nullptr, nullptr, 0},
	{"S$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _S_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"S",
	"java.lang.Object",
	nullptr,
	_S_FieldInfo_,
	_S_MethodInfo_,
	nullptr,
	nullptr,
	_S_InnerClassesInfo_,
	nullptr,
	nullptr,
	"S$NReadsInputStream,S$2,S$3,S$3$1,S$1"
};

$Object* allocate$S($Class* clazz) {
	return $of($alloc(S));
}

$Random* S::RANDOM = nullptr;

void S::init$() {
}

$List* S::listOfBuffersFromBufferOfNBytes(int32_t nBytes) {
	$init(S);
	return scatterBuffer($(bufferOfNRandomBytes(nBytes)));
}

$List* S::scatterBuffer($ByteBuffer* src) {
	$init(S);
	$useLocalCurrentObjectStackCache();
	$var($List, buffers, $new($ArrayList));
	while ($nc(src)->hasRemaining()) {
		int32_t capacity = $nc(S::RANDOM)->nextInt(src->remaining()) + 1;
		$var($ByteBuffer, b, $ByteBuffer::allocate(capacity));
		for (int32_t i = 0; i < capacity; ++i) {
			$nc(b)->put(src->get());
		}
		$nc(b)->flip();
		buffers->add(b);
	}
	return $List::copyOf(buffers);
}

$ByteBuffer* S::bufferOfNRandomBytes(int32_t capacity) {
	$init(S);
	return $ByteBuffer::wrap($(arrayOfNRandomBytes(capacity)));
}

$bytes* S::arrayOfNRandomBytes(int32_t nBytes) {
	$init(S);
	$var($bytes, contents, $new($bytes, nBytes));
	$nc(S::RANDOM)->nextBytes(contents);
	return contents;
}

$InputStream* S::inputStreamOfNReads(int64_t n) {
	$init(S);
	return $new($S$NReadsInputStream, n);
}

$bytes* S::arrayOfNRandomBytes(int64_t nBytes) {
	$init(S);
	return arrayOfNRandomBytes((int32_t)nBytes);
}

$ByteBuffer* S::bufferOfNRandomASCIIBytes(int32_t capacity) {
	$init(S);
	$useLocalCurrentObjectStackCache();
	$var($String, alphaNumeric, "abcdefghijklmnopqrstuvwxyz1234567890"_s);
	$var($StringBuilder, builder, $new($StringBuilder, capacity));
	for (int32_t i = 0; i < capacity; ++i) {
		int32_t idx = $nc(S::RANDOM)->nextInt(alphaNumeric->length());
		builder->append(alphaNumeric->charAt(idx));
	}
	$init($StandardCharsets);
	return $ByteBuffer::wrap($($nc($(builder->toString()))->getBytes($StandardCharsets::US_ASCII)));
}

$Flow$Subscriber* S::nonCompliantSubscriber() {
	$init(S);
	return $new($S$1);
}

int32_t S::randomIntUpTo(int32_t bound) {
	$init(S);
	return $nc(S::RANDOM)->nextInt(bound);
}

$Flow$Publisher* S::newErroredPublisher() {
	$init(S);
	return static_cast<$Flow$Publisher*>($new(S$$Lambda$lambda$newErroredPublisher$0));
}

$Flow$Publisher* S::publisherOfStream($Stream* stream) {
	$init(S);
	if (stream == nullptr) {
		$throwNew($NullPointerException);
	}
	return $new($S$3, stream);
}

void S::lambda$newErroredPublisher$0($Flow$Subscriber* subscriber) {
	$init(S);
	$useLocalCurrentObjectStackCache();
	$nc(subscriber)->onSubscribe($$new($S$2));
	subscriber->onError($$new($IOException));
}

void clinit$S($Class* class$) {
	$assignStatic(S::RANDOM, $new($SecureRandom));
}

S::S() {
}

$Class* S::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(S$$Lambda$lambda$newErroredPublisher$0::classInfo$.name)) {
			return S$$Lambda$lambda$newErroredPublisher$0::load$(name, initialize);
		}
	}
	$loadClass(S, name, initialize, &_S_ClassInfo_, clinit$S, allocate$S);
	return class$;
}

$Class* S::class$ = nullptr;