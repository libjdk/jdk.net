#include <jdk/internal/net/http/websocket/TestSupport$2.h>

#include <java/util/Iterator.h>
#include <java/util/NoSuchElementException.h>
#include <jdk/internal/net/http/websocket/TestSupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $TestSupport = ::jdk::internal::net::http::websocket::TestSupport;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace websocket {

$FieldInfo _TestSupport$2_FieldInfo_[] = {
	{"val$elements", "Ljava/util/Iterator;", nullptr, $FINAL | $SYNTHETIC, $field(TestSupport$2, val$elements)},
	{"val$maxElements", "I", nullptr, $FINAL | $SYNTHETIC, $field(TestSupport$2, val$maxElements)},
	{"count", "I", nullptr, 0, $field(TestSupport$2, count)},
	{}
};

$MethodInfo _TestSupport$2_MethodInfo_[] = {
	{"<init>", "(ILjava/util/Iterator;)V", nullptr, 0, $method(static_cast<void(TestSupport$2::*)(int32_t,$Iterator*)>(&TestSupport$2::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/lang/Object;", "()TT;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _TestSupport$2_EnclosingMethodInfo_ = {
	"jdk.internal.net.http.websocket.TestSupport",
	"limit",
	"(ILjava/util/Iterator;)Ljava/util/Iterator;"
};

$InnerClassInfo _TestSupport$2_InnerClassesInfo_[] = {
	{"jdk.internal.net.http.websocket.TestSupport$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestSupport$2_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.net.http.websocket.TestSupport$2",
	"java.lang.Object",
	"java.util.Iterator",
	_TestSupport$2_FieldInfo_,
	_TestSupport$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<TT;>;",
	&_TestSupport$2_EnclosingMethodInfo_,
	_TestSupport$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.net.http.websocket.TestSupport"
};

$Object* allocate$TestSupport$2($Class* clazz) {
	return $of($alloc(TestSupport$2));
}

void TestSupport$2::init$(int32_t val$maxElements, $Iterator* val$elements) {
	this->val$maxElements = val$maxElements;
	$set(this, val$elements, val$elements);
	this->count = this->val$maxElements;
}

bool TestSupport$2::hasNext() {
	return this->count > 0 && $nc(this->val$elements)->hasNext();
}

$Object* TestSupport$2::next() {
	if (!hasNext()) {
		$throwNew($NoSuchElementException);
	}
	--this->count;
	return $of($nc(this->val$elements)->next());
}

TestSupport$2::TestSupport$2() {
}

$Class* TestSupport$2::load$($String* name, bool initialize) {
	$loadClass(TestSupport$2, name, initialize, &_TestSupport$2_ClassInfo_, allocate$TestSupport$2);
	return class$;
}

$Class* TestSupport$2::class$ = nullptr;

				} // websocket
			} // http
		} // net
	} // internal
} // jdk