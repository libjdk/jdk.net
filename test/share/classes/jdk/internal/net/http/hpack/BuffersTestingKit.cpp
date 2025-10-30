#include <jdk/internal/net/http/hpack/BuffersTestingKit.h>

#include <java/io/Serializable.h>
#include <java/lang/InternalError.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractSequentialList.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <java/util/List.h>
#include <java/util/Random.h>
#include <java/util/Stack.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Function.h>
#include <java/util/function/Supplier.h>
#include <jdk/internal/net/http/hpack/BuffersTestingKit$1.h>
#include <jdk/internal/net/http/hpack/BuffersTestingKit$2.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $AbstractList = ::java::util::AbstractList;
using $AbstractSequentialList = ::java::util::AbstractSequentialList;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $List = ::java::util::List;
using $Random = ::java::util::Random;
using $Stack = ::java::util::Stack;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;
using $Supplier = ::java::util::function::Supplier;
using $BuffersTestingKit$1 = ::jdk::internal::net::http::hpack::BuffersTestingKit$1;
using $BuffersTestingKit$2 = ::jdk::internal::net::http::hpack::BuffersTestingKit$2;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace hpack {

class BuffersTestingKit$$Lambda$lambda$relocateBuffers$0 : public $Iterable {
	$class(BuffersTestingKit$$Lambda$lambda$relocateBuffers$0, $NO_CLASS_INIT, $Iterable)
public:
	void init$($Iterable* source) {
		$set(this, source, source);
	}
	virtual $Iterator* iterator() override {
		 return BuffersTestingKit::lambda$relocateBuffers$0(source);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BuffersTestingKit$$Lambda$lambda$relocateBuffers$0>());
	}
	$Iterable* source = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo BuffersTestingKit$$Lambda$lambda$relocateBuffers$0::fieldInfos[2] = {
	{"source", "Ljava/lang/Iterable;", nullptr, $PUBLIC, $field(BuffersTestingKit$$Lambda$lambda$relocateBuffers$0, source)},
	{}
};
$MethodInfo BuffersTestingKit$$Lambda$lambda$relocateBuffers$0::methodInfos[3] = {
	{"<init>", "(Ljava/lang/Iterable;)V", nullptr, $PUBLIC, $method(static_cast<void(BuffersTestingKit$$Lambda$lambda$relocateBuffers$0::*)($Iterable*)>(&BuffersTestingKit$$Lambda$lambda$relocateBuffers$0::init$))},
	{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC},
	{}
};
$ClassInfo BuffersTestingKit$$Lambda$lambda$relocateBuffers$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.net.http.hpack.BuffersTestingKit$$Lambda$lambda$relocateBuffers$0",
	"java.lang.Object",
	"java.lang.Iterable",
	fieldInfos,
	methodInfos
};
$Class* BuffersTestingKit$$Lambda$lambda$relocateBuffers$0::load$($String* name, bool initialize) {
	$loadClass(BuffersTestingKit$$Lambda$lambda$relocateBuffers$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BuffersTestingKit$$Lambda$lambda$relocateBuffers$0::class$ = nullptr;

class BuffersTestingKit$$Lambda$lambda$injectEmptyBuffers$1$1 : public $Supplier {
	$class(BuffersTestingKit$$Lambda$lambda$injectEmptyBuffers$1$1, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $of(BuffersTestingKit::lambda$injectEmptyBuffers$1());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BuffersTestingKit$$Lambda$lambda$injectEmptyBuffers$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo BuffersTestingKit$$Lambda$lambda$injectEmptyBuffers$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BuffersTestingKit$$Lambda$lambda$injectEmptyBuffers$1$1::*)()>(&BuffersTestingKit$$Lambda$lambda$injectEmptyBuffers$1$1::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo BuffersTestingKit$$Lambda$lambda$injectEmptyBuffers$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.net.http.hpack.BuffersTestingKit$$Lambda$lambda$injectEmptyBuffers$1$1",
	"java.lang.Object",
	"java.util.function.Supplier",
	nullptr,
	methodInfos
};
$Class* BuffersTestingKit$$Lambda$lambda$injectEmptyBuffers$1$1::load$($String* name, bool initialize) {
	$loadClass(BuffersTestingKit$$Lambda$lambda$injectEmptyBuffers$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BuffersTestingKit$$Lambda$lambda$injectEmptyBuffers$1$1::class$ = nullptr;

class BuffersTestingKit$$Lambda$lambda$injectEmptyBuffers$2$2 : public $Iterable {
	$class(BuffersTestingKit$$Lambda$lambda$injectEmptyBuffers$2$2, $NO_CLASS_INIT, $Iterable)
public:
	void init$($Iterable* source, $Supplier* emptyBufferFactory) {
		$set(this, source, source);
		$set(this, emptyBufferFactory, emptyBufferFactory);
	}
	virtual $Iterator* iterator() override {
		 return BuffersTestingKit::lambda$injectEmptyBuffers$2(source, emptyBufferFactory);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BuffersTestingKit$$Lambda$lambda$injectEmptyBuffers$2$2>());
	}
	$Iterable* source = nullptr;
	$Supplier* emptyBufferFactory = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo BuffersTestingKit$$Lambda$lambda$injectEmptyBuffers$2$2::fieldInfos[3] = {
	{"source", "Ljava/lang/Iterable;", nullptr, $PUBLIC, $field(BuffersTestingKit$$Lambda$lambda$injectEmptyBuffers$2$2, source)},
	{"emptyBufferFactory", "Ljava/util/function/Supplier;", nullptr, $PUBLIC, $field(BuffersTestingKit$$Lambda$lambda$injectEmptyBuffers$2$2, emptyBufferFactory)},
	{}
};
$MethodInfo BuffersTestingKit$$Lambda$lambda$injectEmptyBuffers$2$2::methodInfos[3] = {
	{"<init>", "(Ljava/lang/Iterable;Ljava/util/function/Supplier;)V", nullptr, $PUBLIC, $method(static_cast<void(BuffersTestingKit$$Lambda$lambda$injectEmptyBuffers$2$2::*)($Iterable*,$Supplier*)>(&BuffersTestingKit$$Lambda$lambda$injectEmptyBuffers$2$2::init$))},
	{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC},
	{}
};
$ClassInfo BuffersTestingKit$$Lambda$lambda$injectEmptyBuffers$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.net.http.hpack.BuffersTestingKit$$Lambda$lambda$injectEmptyBuffers$2$2",
	"java.lang.Object",
	"java.lang.Iterable",
	fieldInfos,
	methodInfos
};
$Class* BuffersTestingKit$$Lambda$lambda$injectEmptyBuffers$2$2::load$($String* name, bool initialize) {
	$loadClass(BuffersTestingKit$$Lambda$lambda$injectEmptyBuffers$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BuffersTestingKit$$Lambda$lambda$injectEmptyBuffers$2$2::class$ = nullptr;

class BuffersTestingKit$$Lambda$allocate$3 : public $Function {
	$class(BuffersTestingKit$$Lambda$allocate$3, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* arg0) override {
		 return $of($ByteBuffer::allocate($intValue(arg0)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BuffersTestingKit$$Lambda$allocate$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo BuffersTestingKit$$Lambda$allocate$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BuffersTestingKit$$Lambda$allocate$3::*)()>(&BuffersTestingKit$$Lambda$allocate$3::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo BuffersTestingKit$$Lambda$allocate$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.net.http.hpack.BuffersTestingKit$$Lambda$allocate$3",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* BuffersTestingKit$$Lambda$allocate$3::load$($String* name, bool initialize) {
	$loadClass(BuffersTestingKit$$Lambda$allocate$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BuffersTestingKit$$Lambda$allocate$3::class$ = nullptr;

class BuffersTestingKit$$Lambda$lambda$forEachSplit$3$4 : public $Consumer {
	$class(BuffersTestingKit$$Lambda$lambda$forEachSplit$3$4, $NO_CLASS_INIT, $Consumer)
public:
	void init$($ByteBuffer* bb, $Consumer* action) {
		$set(this, bb, bb);
		$set(this, action, action);
	}
	virtual void accept(Object$* lengths) override {
		BuffersTestingKit::lambda$forEachSplit$3(bb, action, $cast($Iterable, lengths));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BuffersTestingKit$$Lambda$lambda$forEachSplit$3$4>());
	}
	$ByteBuffer* bb = nullptr;
	$Consumer* action = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo BuffersTestingKit$$Lambda$lambda$forEachSplit$3$4::fieldInfos[3] = {
	{"bb", "Ljava/nio/ByteBuffer;", nullptr, $PUBLIC, $field(BuffersTestingKit$$Lambda$lambda$forEachSplit$3$4, bb)},
	{"action", "Ljava/util/function/Consumer;", nullptr, $PUBLIC, $field(BuffersTestingKit$$Lambda$lambda$forEachSplit$3$4, action)},
	{}
};
$MethodInfo BuffersTestingKit$$Lambda$lambda$forEachSplit$3$4::methodInfos[3] = {
	{"<init>", "(Ljava/nio/ByteBuffer;Ljava/util/function/Consumer;)V", nullptr, $PUBLIC, $method(static_cast<void(BuffersTestingKit$$Lambda$lambda$forEachSplit$3$4::*)($ByteBuffer*,$Consumer*)>(&BuffersTestingKit$$Lambda$lambda$forEachSplit$3$4::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo BuffersTestingKit$$Lambda$lambda$forEachSplit$3$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.net.http.hpack.BuffersTestingKit$$Lambda$lambda$forEachSplit$3$4",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* BuffersTestingKit$$Lambda$lambda$forEachSplit$3$4::load$($String* name, bool initialize) {
	$loadClass(BuffersTestingKit$$Lambda$lambda$forEachSplit$3$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BuffersTestingKit$$Lambda$lambda$forEachSplit$3$4::class$ = nullptr;

$FieldInfo _BuffersTestingKit_FieldInfo_[] = {
	{"random", "Ljava/util/Random;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BuffersTestingKit, random)},
	{}
};

$MethodInfo _BuffersTestingKit_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(BuffersTestingKit::*)()>(&BuffersTestingKit::init$))},
	{"concat", "(Ljava/lang/Iterable;)Ljava/nio/ByteBuffer;", "(Ljava/lang/Iterable<+Ljava/nio/ByteBuffer;>;)Ljava/nio/ByteBuffer;", $PUBLIC | $STATIC, $method(static_cast<$ByteBuffer*(*)($Iterable*)>(&BuffersTestingKit::concat))},
	{"concat", "(Ljava/lang/Iterable;Ljava/util/function/Function;)Ljava/nio/ByteBuffer;", "(Ljava/lang/Iterable<+Ljava/nio/ByteBuffer;>;Ljava/util/function/Function<-Ljava/lang/Integer;+Ljava/nio/ByteBuffer;>;)Ljava/nio/ByteBuffer;", $PUBLIC | $STATIC, $method(static_cast<$ByteBuffer*(*)($Iterable*,$Function*)>(&BuffersTestingKit::concat))},
	{"forEachSplit", "(Ljava/nio/ByteBuffer;Ljava/util/function/Consumer;)V", "(Ljava/nio/ByteBuffer;Ljava/util/function/Consumer<-Ljava/lang/Iterable<+Ljava/nio/ByteBuffer;>;>;)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($ByteBuffer*,$Consumer*)>(&BuffersTestingKit::forEachSplit))},
	{"forEachSplit", "(ILjava/util/function/Consumer;)V", "(ILjava/util/function/Consumer<-Ljava/lang/Iterable<+Ljava/lang/Integer;>;>;)V", $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t,$Consumer*)>(&BuffersTestingKit::forEachSplit))},
	{"forEachSplit", "(ILjava/util/Stack;Ljava/util/function/Consumer;)V", "(ILjava/util/Stack<Ljava/lang/Integer;>;Ljava/util/function/Consumer<-Ljava/lang/Iterable<+Ljava/lang/Integer;>;>;)V", $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t,$Stack*,$Consumer*)>(&BuffersTestingKit::forEachSplit))},
	{"injectEmptyBuffers", "(Ljava/lang/Iterable;)Ljava/lang/Iterable;", "(Ljava/lang/Iterable<+Ljava/nio/ByteBuffer;>;)Ljava/lang/Iterable<+Ljava/nio/ByteBuffer;>;", $PUBLIC | $STATIC, $method(static_cast<$Iterable*(*)($Iterable*)>(&BuffersTestingKit::injectEmptyBuffers))},
	{"injectEmptyBuffers", "(Ljava/lang/Iterable;Ljava/util/function/Supplier;)Ljava/lang/Iterable;", "(Ljava/lang/Iterable<+Ljava/nio/ByteBuffer;>;Ljava/util/function/Supplier<+Ljava/nio/ByteBuffer;>;)Ljava/lang/Iterable<+Ljava/nio/ByteBuffer;>;", $PUBLIC | $STATIC, $method(static_cast<$Iterable*(*)($Iterable*,$Supplier*)>(&BuffersTestingKit::injectEmptyBuffers))},
	{"lambda$forEachSplit$3", "(Ljava/nio/ByteBuffer;Ljava/util/function/Consumer;Ljava/lang/Iterable;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($ByteBuffer*,$Consumer*,$Iterable*)>(&BuffersTestingKit::lambda$forEachSplit$3))},
	{"lambda$injectEmptyBuffers$1", "()Ljava/nio/ByteBuffer;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$ByteBuffer*(*)()>(&BuffersTestingKit::lambda$injectEmptyBuffers$1))},
	{"lambda$injectEmptyBuffers$2", "(Ljava/lang/Iterable;Ljava/util/function/Supplier;)Ljava/util/Iterator;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Iterator*(*)($Iterable*,$Supplier*)>(&BuffersTestingKit::lambda$injectEmptyBuffers$2))},
	{"lambda$relocateBuffers$0", "(Ljava/lang/Iterable;)Ljava/util/Iterator;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Iterator*(*)($Iterable*)>(&BuffersTestingKit::lambda$relocateBuffers$0))},
	{"relocate", "(Ljava/nio/ByteBuffer;II)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ByteBuffer*(*)($ByteBuffer*,int32_t,int32_t)>(&BuffersTestingKit::relocate))},
	{"relocateBuffers", "(Ljava/lang/Iterable;)Ljava/lang/Iterable;", "(Ljava/lang/Iterable<+Ljava/nio/ByteBuffer;>;)Ljava/lang/Iterable<+Ljava/nio/ByteBuffer;>;", $PUBLIC | $STATIC, $method(static_cast<$Iterable*(*)($Iterable*)>(&BuffersTestingKit::relocateBuffers))},
	{}
};

$InnerClassInfo _BuffersTestingKit_InnerClassesInfo_[] = {
	{"jdk.internal.net.http.hpack.BuffersTestingKit$1", nullptr, nullptr, 0},
	{"jdk.internal.net.http.hpack.BuffersTestingKit$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BuffersTestingKit_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.net.http.hpack.BuffersTestingKit",
	"java.lang.Object",
	nullptr,
	_BuffersTestingKit_FieldInfo_,
	_BuffersTestingKit_MethodInfo_,
	nullptr,
	nullptr,
	_BuffersTestingKit_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.internal.net.http.hpack.BuffersTestingKit$1,jdk.internal.net.http.hpack.BuffersTestingKit$2"
};

$Object* allocate$BuffersTestingKit($Class* clazz) {
	return $of($alloc(BuffersTestingKit));
}

$Random* BuffersTestingKit::random = nullptr;

$ByteBuffer* BuffersTestingKit::relocate($ByteBuffer* buffer, int32_t newPosition, int32_t newCapacity) {
	$init(BuffersTestingKit);
	$useLocalCurrentObjectStackCache();
	int32_t oldPosition = $nc(buffer)->position();
	int32_t oldLimit = buffer->limit();
	if (newPosition + oldLimit - oldPosition > newCapacity) {
		$throwNew($IllegalArgumentException);
	}
	$var($ByteBuffer, result, nullptr);
	if (buffer->isDirect()) {
		$assign(result, $ByteBuffer::allocateDirect(newCapacity));
	} else {
		$assign(result, $ByteBuffer::allocate(newCapacity));
	}
	$nc(result)->position(newPosition);
	$nc($($nc($(result->put(buffer)))->limit(result->position())))->position(newPosition);
	buffer->position(oldPosition);
	if (buffer->isReadOnly()) {
		return result->asReadOnlyBuffer();
	}
	return result;
}

$Iterable* BuffersTestingKit::relocateBuffers($Iterable* source) {
	$init(BuffersTestingKit);
	return static_cast<$Iterable*>($new(BuffersTestingKit$$Lambda$lambda$relocateBuffers$0, source));
}

$Iterable* BuffersTestingKit::injectEmptyBuffers($Iterable* source) {
	$init(BuffersTestingKit);
	return injectEmptyBuffers(source, static_cast<$Supplier*>($$new(BuffersTestingKit$$Lambda$lambda$injectEmptyBuffers$1$1)));
}

$Iterable* BuffersTestingKit::injectEmptyBuffers($Iterable* source, $Supplier* emptyBufferFactory) {
	$init(BuffersTestingKit);
	return static_cast<$Iterable*>($new(BuffersTestingKit$$Lambda$lambda$injectEmptyBuffers$2$2, source, emptyBufferFactory));
}

$ByteBuffer* BuffersTestingKit::concat($Iterable* split) {
	$init(BuffersTestingKit);
	return concat(split, static_cast<$Function*>($$new(BuffersTestingKit$$Lambda$allocate$3)));
}

$ByteBuffer* BuffersTestingKit::concat($Iterable* split, $Function* concatBufferFactory) {
	$init(BuffersTestingKit);
	$useLocalCurrentObjectStackCache();
	int32_t size = 0;
	{
		$var($Iterator, i$, $nc(split)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ByteBuffer, bb, $cast($ByteBuffer, i$->next()));
			{
				size += $nc(bb)->remaining();
			}
		}
	}
	$var($ByteBuffer, result, $cast($ByteBuffer, $nc(concatBufferFactory)->apply($($Integer::valueOf(size)))));
	{
		$var($Iterator, i$, split->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ByteBuffer, bb, $cast($ByteBuffer, i$->next()));
			{
				$nc(result)->put(bb);
			}
		}
	}
	$nc(result)->flip();
	return result;
}

void BuffersTestingKit::forEachSplit($ByteBuffer* bb, $Consumer* action) {
	$init(BuffersTestingKit);
	int32_t var$0 = $nc(bb)->remaining();
	forEachSplit(var$0, static_cast<$Consumer*>($$new(BuffersTestingKit$$Lambda$lambda$forEachSplit$3$4, bb, action)));
}

void BuffersTestingKit::forEachSplit(int32_t n, $Consumer* action) {
	$init(BuffersTestingKit);
	forEachSplit(n, $$new($Stack), action);
}

void BuffersTestingKit::forEachSplit(int32_t n, $Stack* path, $Consumer* action) {
	$init(BuffersTestingKit);
	$useLocalCurrentObjectStackCache();
	if (n == 0) {
		$nc(action)->accept(path);
	} else {
		for (int32_t i = 1; i <= n; ++i) {
			$nc(path)->push($($Integer::valueOf(i)));
			forEachSplit(n - i, path, action);
			path->pop();
		}
	}
}

void BuffersTestingKit::init$() {
	$throwNew($InternalError);
}

void BuffersTestingKit::lambda$forEachSplit$3($ByteBuffer* bb, $Consumer* action, $Iterable* lengths) {
	$init(BuffersTestingKit);
	$useLocalCurrentObjectStackCache();
	int32_t end = $nc(bb)->position();
	$var($List, buffers, $new($LinkedList));
	{
		$var($Iterator, i$, $nc(lengths)->iterator());
		for (; $nc(i$)->hasNext();) {
			int32_t len = $nc(($cast($Integer, $(i$->next()))))->intValue();
			{
				$var($ByteBuffer, d, bb->duplicate());
				$nc(d)->position(end);
				d->limit(end + len);
				end += len;
				buffers->add(d);
			}
		}
	}
	$nc(action)->accept(buffers);
}

$Iterator* BuffersTestingKit::lambda$injectEmptyBuffers$2($Iterable* source, $Supplier* emptyBufferFactory) {
	$init(BuffersTestingKit);
	return $new($BuffersTestingKit$2, source, emptyBufferFactory);
}

$ByteBuffer* BuffersTestingKit::lambda$injectEmptyBuffers$1() {
	$init(BuffersTestingKit);
	return $ByteBuffer::allocate(0);
}

$Iterator* BuffersTestingKit::lambda$relocateBuffers$0($Iterable* source) {
	$init(BuffersTestingKit);
	return $new($BuffersTestingKit$1, source);
}

void clinit$BuffersTestingKit($Class* class$) {
	$assignStatic(BuffersTestingKit::random, $new($Random));
}

BuffersTestingKit::BuffersTestingKit() {
}

$Class* BuffersTestingKit::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(BuffersTestingKit$$Lambda$lambda$relocateBuffers$0::classInfo$.name)) {
			return BuffersTestingKit$$Lambda$lambda$relocateBuffers$0::load$(name, initialize);
		}
		if (name->equals(BuffersTestingKit$$Lambda$lambda$injectEmptyBuffers$1$1::classInfo$.name)) {
			return BuffersTestingKit$$Lambda$lambda$injectEmptyBuffers$1$1::load$(name, initialize);
		}
		if (name->equals(BuffersTestingKit$$Lambda$lambda$injectEmptyBuffers$2$2::classInfo$.name)) {
			return BuffersTestingKit$$Lambda$lambda$injectEmptyBuffers$2$2::load$(name, initialize);
		}
		if (name->equals(BuffersTestingKit$$Lambda$allocate$3::classInfo$.name)) {
			return BuffersTestingKit$$Lambda$allocate$3::load$(name, initialize);
		}
		if (name->equals(BuffersTestingKit$$Lambda$lambda$forEachSplit$3$4::classInfo$.name)) {
			return BuffersTestingKit$$Lambda$lambda$forEachSplit$3$4::load$(name, initialize);
		}
	}
	$loadClass(BuffersTestingKit, name, initialize, &_BuffersTestingKit_ClassInfo_, clinit$BuffersTestingKit, allocate$BuffersTestingKit);
	return class$;
}

$Class* BuffersTestingKit::class$ = nullptr;

				} // hpack
			} // http
		} // net
	} // internal
} // jdk