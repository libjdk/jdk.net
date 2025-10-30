#include <jdk/internal/net/http/hpack/BuffersTestingKit$2.h>

#include <java/lang/Iterable.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/Iterator.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/Random.h>
#include <java/util/function/Supplier.h>
#include <jdk/internal/net/http/hpack/BuffersTestingKit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Iterator = ::java::util::Iterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Random = ::java::util::Random;
using $Supplier = ::java::util::function::Supplier;
using $BuffersTestingKit = ::jdk::internal::net::http::hpack::BuffersTestingKit;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace hpack {

$FieldInfo _BuffersTestingKit$2_FieldInfo_[] = {
	{"val$emptyBufferFactory", "Ljava/util/function/Supplier;", nullptr, $FINAL | $SYNTHETIC, $field(BuffersTestingKit$2, val$emptyBufferFactory)},
	{"val$source", "Ljava/lang/Iterable;", nullptr, $FINAL | $SYNTHETIC, $field(BuffersTestingKit$2, val$source)},
	{"it", "Ljava/util/Iterator;", "Ljava/util/Iterator<+Ljava/nio/ByteBuffer;>;", $PRIVATE | $FINAL, $field(BuffersTestingKit$2, it)},
	{"next", "Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $field(BuffersTestingKit$2, next$)},
	{}
};

$MethodInfo _BuffersTestingKit$2_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Iterable;Ljava/util/function/Supplier;)V", "()V", 0, $method(static_cast<void(BuffersTestingKit$2::*)($Iterable*,$Supplier*)>(&BuffersTestingKit$2::init$))},
	{"calculateNext", "()Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $method(static_cast<$ByteBuffer*(BuffersTestingKit$2::*)()>(&BuffersTestingKit$2::calculateNext))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _BuffersTestingKit$2_EnclosingMethodInfo_ = {
	"jdk.internal.net.http.hpack.BuffersTestingKit",
	"injectEmptyBuffers",
	"(Ljava/lang/Iterable;Ljava/util/function/Supplier;)Ljava/lang/Iterable;"
};

$InnerClassInfo _BuffersTestingKit$2_InnerClassesInfo_[] = {
	{"jdk.internal.net.http.hpack.BuffersTestingKit$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BuffersTestingKit$2_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.net.http.hpack.BuffersTestingKit$2",
	"java.lang.Object",
	"java.util.Iterator",
	_BuffersTestingKit$2_FieldInfo_,
	_BuffersTestingKit$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljava/nio/ByteBuffer;>;",
	&_BuffersTestingKit$2_EnclosingMethodInfo_,
	_BuffersTestingKit$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.net.http.hpack.BuffersTestingKit"
};

$Object* allocate$BuffersTestingKit$2($Class* clazz) {
	return $of($alloc(BuffersTestingKit$2));
}

void BuffersTestingKit$2::init$($Iterable* val$source, $Supplier* val$emptyBufferFactory) {
	$set(this, val$source, val$source);
	$set(this, val$emptyBufferFactory, val$emptyBufferFactory);
	$set(this, it, $nc(this->val$source)->iterator());
	$set(this, next$, calculateNext());
}

$ByteBuffer* BuffersTestingKit$2::calculateNext() {
	$init($BuffersTestingKit);
	if ($nc($BuffersTestingKit::random)->nextBoolean()) {
		return $cast($ByteBuffer, $nc(this->val$emptyBufferFactory)->get());
	} else if ($nc(this->it)->hasNext()) {
		return $cast($ByteBuffer, $nc(this->it)->next());
	} else {
		return nullptr;
	}
}

bool BuffersTestingKit$2::hasNext() {
	return this->next$ != nullptr;
}

$Object* BuffersTestingKit$2::next() {
	if (!hasNext()) {
		$throwNew($NoSuchElementException);
	}
	$var($ByteBuffer, next, this->next$);
	$set(this, next$, calculateNext());
	return $of(next);
}

BuffersTestingKit$2::BuffersTestingKit$2() {
}

$Class* BuffersTestingKit$2::load$($String* name, bool initialize) {
	$loadClass(BuffersTestingKit$2, name, initialize, &_BuffersTestingKit$2_ClassInfo_, allocate$BuffersTestingKit$2);
	return class$;
}

$Class* BuffersTestingKit$2::class$ = nullptr;

				} // hpack
			} // http
		} // net
	} // internal
} // jdk