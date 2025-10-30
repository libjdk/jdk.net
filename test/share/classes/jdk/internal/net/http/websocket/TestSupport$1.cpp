#include <jdk/internal/net/http/websocket/TestSupport$1.h>

#include <java/util/List.h>
#include <java/util/NoSuchElementException.h>
#include <jdk/internal/net/http/websocket/TestSupport$F.h>
#include <jdk/internal/net/http/websocket/TestSupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $TestSupport = ::jdk::internal::net::http::websocket::TestSupport;
using $TestSupport$F = ::jdk::internal::net::http::websocket::TestSupport$F;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace websocket {

$FieldInfo _TestSupport$1_FieldInfo_[] = {
	{"val$function", "Ljdk/internal/net/http/websocket/TestSupport$F;", nullptr, $FINAL | $SYNTHETIC, $field(TestSupport$1, val$function)},
	{"val$params", "Ljava/util/List;", nullptr, $FINAL | $SYNTHETIC, $field(TestSupport$1, val$params)},
	{"arity", "I", nullptr, $PRIVATE | $FINAL, $field(TestSupport$1, arity)},
	{"coordinates", "[I", nullptr, $PRIVATE | $FINAL, $field(TestSupport$1, coordinates)},
	{"hasNext", "Z", nullptr, $PRIVATE, $field(TestSupport$1, hasNext$)},
	{}
};

$MethodInfo _TestSupport$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/List;Ljdk/internal/net/http/websocket/TestSupport$F;)V", nullptr, 0, $method(static_cast<void(TestSupport$1::*)($List*,$TestSupport$F*)>(&TestSupport$1::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/lang/Object;", "()TR;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _TestSupport$1_EnclosingMethodInfo_ = {
	"jdk.internal.net.http.websocket.TestSupport",
	"cartesianIterator",
	"(Ljava/util/List;Ljdk/internal/net/http/websocket/TestSupport$F;)Ljava/util/Iterator;"
};

$InnerClassInfo _TestSupport$1_InnerClassesInfo_[] = {
	{"jdk.internal.net.http.websocket.TestSupport$1", nullptr, nullptr, 0},
	{"jdk.internal.net.http.websocket.TestSupport$F", "jdk.internal.net.http.websocket.TestSupport", "F", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _TestSupport$1_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.net.http.websocket.TestSupport$1",
	"java.lang.Object",
	"java.util.Iterator",
	_TestSupport$1_FieldInfo_,
	_TestSupport$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<TR;>;",
	&_TestSupport$1_EnclosingMethodInfo_,
	_TestSupport$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.net.http.websocket.TestSupport"
};

$Object* allocate$TestSupport$1($Class* clazz) {
	return $of($alloc(TestSupport$1));
}

void TestSupport$1::init$($List* val$params, $TestSupport$F* val$function) {
	$set(this, val$params, val$params);
	$set(this, val$function, val$function);
	this->arity = $nc(this->val$params)->size();
	$set(this, coordinates, $new($ints, this->arity));
	this->hasNext$ = true;
}

bool TestSupport$1::hasNext() {
	return this->hasNext$;
}

$Object* TestSupport$1::next() {
	$useLocalCurrentObjectStackCache();
	if (!this->hasNext$) {
		$throwNew($NoSuchElementException);
	}
	$var($ObjectArray, array, $new($ObjectArray, this->arity));
	for (int32_t i = 0; i < this->arity; ++i) {
		array->set(i, $($nc(($cast($List, $($nc(this->val$params)->get(i)))))->get($nc(this->coordinates)->get(i))));
	}
	int32_t p = this->arity - 1;
	while (p >= 0 && $nc(this->coordinates)->get(p) == $nc(($cast($List, $($nc(this->val$params)->get(p)))))->size() - 1) {
		--p;
	}
	if (p < 0) {
		this->hasNext$ = false;
	} else {
		++(*$nc(this->coordinates))[p];
		for (int32_t i = p + 1; i < this->arity; ++i) {
			$nc(this->coordinates)->set(i, 0);
		}
	}
	return $of($nc(this->val$function)->apply(array));
}

TestSupport$1::TestSupport$1() {
}

$Class* TestSupport$1::load$($String* name, bool initialize) {
	$loadClass(TestSupport$1, name, initialize, &_TestSupport$1_ClassInfo_, allocate$TestSupport$1);
	return class$;
}

$Class* TestSupport$1::class$ = nullptr;

				} // websocket
			} // http
		} // net
	} // internal
} // jdk