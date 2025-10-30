#include <S$NReadsInputStream.h>

#include <S.h>
#include <java/io/InputStream.h>
#include <java/util/Objects.h>
#include <java/util/Random.h>
#include <jcpp.h>

#undef EOF
#undef RANDOM

using $S = ::S;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $Random = ::java::util::Random;

$FieldInfo _S$NReadsInputStream_FieldInfo_[] = {
	{"EOF", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(S$NReadsInputStream, EOF)},
	{"readsLeft", "J", nullptr, $PRIVATE, $field(S$NReadsInputStream, readsLeft)},
	{}
};

$MethodInfo _S$NReadsInputStream_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, 0, $method(static_cast<void(S$NReadsInputStream::*)(int64_t)>(&S$NReadsInputStream::init$))},
	{"read", "()I", nullptr, $PUBLIC},
	{"read", "([BII)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _S$NReadsInputStream_InnerClassesInfo_[] = {
	{"S$NReadsInputStream", "S", "NReadsInputStream", $STATIC | $FINAL},
	{}
};

$ClassInfo _S$NReadsInputStream_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"S$NReadsInputStream",
	"java.io.InputStream",
	nullptr,
	_S$NReadsInputStream_FieldInfo_,
	_S$NReadsInputStream_MethodInfo_,
	nullptr,
	nullptr,
	_S$NReadsInputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"S"
};

$Object* allocate$S$NReadsInputStream($Class* clazz) {
	return $of($alloc(S$NReadsInputStream));
}

void S$NReadsInputStream::init$(int64_t n) {
	$InputStream::init$();
	if (n < 0) {
		$throwNew($IllegalArgumentException, $($String::valueOf(n)));
	}
	this->readsLeft = n;
}

int32_t S$NReadsInputStream::read() {
	if (this->readsLeft == (int64_t)0) {
		return S$NReadsInputStream::EOF;
	}
	--this->readsLeft;
	return $S::randomIntUpTo(256);
}

int32_t S$NReadsInputStream::read($bytes* b, int32_t off, int32_t len) {
	$Objects::checkFromIndexSize(off, len, $nc(b)->length);
	if (len == 0) {
		return 0;
	}
	if (this->readsLeft == (int64_t)0) {
		return S$NReadsInputStream::EOF;
	}
	--this->readsLeft;
	$init($S);
	int32_t r = $nc($S::RANDOM)->nextInt(len) + 1;
	for (int32_t i = 0; i < r; ++i) {
		$nc(b)->set(i, (int8_t)$S::randomIntUpTo(256));
	}
	return r;
}

S$NReadsInputStream::S$NReadsInputStream() {
}

$Class* S$NReadsInputStream::load$($String* name, bool initialize) {
	$loadClass(S$NReadsInputStream, name, initialize, &_S$NReadsInputStream_ClassInfo_, allocate$S$NReadsInputStream);
	return class$;
}

$Class* S$NReadsInputStream::class$ = nullptr;