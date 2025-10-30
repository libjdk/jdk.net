#include <jdk/internal/net/http/AbstractRandomTest.h>

#include <java/lang/NumberFormatException.h>
#include <java/util/Random.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $Random = ::java::util::Random;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

$FieldInfo _AbstractRandomTest_FieldInfo_[] = {
	{"random", "Ljava/util/Random;", nullptr, $PRIVATE | $STATIC, $staticField(AbstractRandomTest, random)},
	{}
};

$MethodInfo _AbstractRandomTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AbstractRandomTest::*)()>(&AbstractRandomTest::init$))},
	{"getSeed", "()J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)()>(&AbstractRandomTest::getSeed))},
	{"getSystemSeed", "()Ljava/lang/Long;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Long*(*)()>(&AbstractRandomTest::getSystemSeed))},
	{"randomRange", "(II)I", nullptr, $PROTECTED | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&AbstractRandomTest::randomRange))},
	{}
};

$ClassInfo _AbstractRandomTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.net.http.AbstractRandomTest",
	"java.lang.Object",
	nullptr,
	_AbstractRandomTest_FieldInfo_,
	_AbstractRandomTest_MethodInfo_
};

$Object* allocate$AbstractRandomTest($Class* clazz) {
	return $of($alloc(AbstractRandomTest));
}

$Random* AbstractRandomTest::random = nullptr;

void AbstractRandomTest::init$() {
}

$Long* AbstractRandomTest::getSystemSeed() {
	$init(AbstractRandomTest);
	$useLocalCurrentObjectStackCache();
	$var($Long, seed, nullptr);
	try {
		$assign(seed, $Long::valueOf($($System::getProperty("seed"_s))));
	} catch ($NumberFormatException& e) {
	}
	return seed;
}

int64_t AbstractRandomTest::getSeed() {
	$init(AbstractRandomTest);
	$useLocalCurrentObjectStackCache();
	$var($Long, seed, getSystemSeed());
	if (seed == nullptr) {
		$assign(seed, $Long::valueOf(($$new($Random))->nextLong()));
	}
	$nc($System::out)->println($$str({"Seed from AbstractRandomTest.getSeed = "_s, seed, "L"_s}));
	return $nc(seed)->longValue();
}

int32_t AbstractRandomTest::randomRange(int32_t lower, int32_t upper) {
	$init(AbstractRandomTest);
	if (lower > upper) {
		$throwNew($IllegalArgumentException, "lower > upper"_s);
	}
	int32_t diff = upper - lower;
	int32_t r = lower + $nc(AbstractRandomTest::random)->nextInt(diff);
	return r - (r % 8);
}

void clinit$AbstractRandomTest($Class* class$) {
	$assignStatic(AbstractRandomTest::random, $new($Random, AbstractRandomTest::getSeed()));
}

AbstractRandomTest::AbstractRandomTest() {
}

$Class* AbstractRandomTest::load$($String* name, bool initialize) {
	$loadClass(AbstractRandomTest, name, initialize, &_AbstractRandomTest_ClassInfo_, clinit$AbstractRandomTest, allocate$AbstractRandomTest);
	return class$;
}

$Class* AbstractRandomTest::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk