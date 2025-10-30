#include <HeadersTest2.h>

#include <HeadersTest2$CompareTest.h>
#include <java/net/URI.h>
#include <java/util/List.h>
#include <jcpp.h>

using $HeadersTest2$CompareTest = ::HeadersTest2$CompareTest;
using $HeadersTest2$CompareTestArray = $Array<HeadersTest2$CompareTest>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $List = ::java::util::List;

$FieldInfo _HeadersTest2_FieldInfo_[] = {
	{"uri", "Ljava/net/URI;", nullptr, $STATIC, $staticField(HeadersTest2, uri)},
	{"compareTests", "[LHeadersTest2$CompareTest;", nullptr, $STATIC, $staticField(HeadersTest2, compareTests)},
	{}
};

$MethodInfo _HeadersTest2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HeadersTest2::*)()>(&HeadersTest2::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HeadersTest2::main))},
	{"test", "(ZLjava/util/List;Ljava/util/List;)LHeadersTest2$CompareTest;", "(ZLjava/util/List<Ljava/lang/String;>;Ljava/util/List<Ljava/lang/String;>;)LHeadersTest2$CompareTest;", $STATIC, $method(static_cast<$HeadersTest2$CompareTest*(*)(bool,$List*,$List*)>(&HeadersTest2::test))},
	{}
};

$InnerClassInfo _HeadersTest2_InnerClassesInfo_[] = {
	{"HeadersTest2$CompareTest", "HeadersTest2", "CompareTest", $STATIC},
	{}
};

$ClassInfo _HeadersTest2_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HeadersTest2",
	"java.lang.Object",
	nullptr,
	_HeadersTest2_FieldInfo_,
	_HeadersTest2_MethodInfo_,
	nullptr,
	nullptr,
	_HeadersTest2_InnerClassesInfo_,
	nullptr,
	nullptr,
	"HeadersTest2$CompareTest"
};

$Object* allocate$HeadersTest2($Class* clazz) {
	return $of($alloc(HeadersTest2));
}

$URI* HeadersTest2::uri = nullptr;
$HeadersTest2$CompareTestArray* HeadersTest2::compareTests = nullptr;

void HeadersTest2::init$() {
}

$HeadersTest2$CompareTest* HeadersTest2::test(bool s, $List* l1, $List* l2) {
	$init(HeadersTest2);
	return $new($HeadersTest2$CompareTest, s, l1, l2);
}

void HeadersTest2::main($StringArray* args) {
	$init(HeadersTest2);
	$useLocalCurrentObjectStackCache();
	{
		$var($HeadersTest2$CompareTestArray, arr$, HeadersTest2::compareTests);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($HeadersTest2$CompareTest, test, arr$->get(i$));
			{
				$nc(test)->run();
			}
		}
	}
}

void clinit$HeadersTest2($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(HeadersTest2::uri, $URI::create("http://www.foo.com/"_s));
	$var($List, var$0, $List::of("Dontent-length"_s, "99"_s));
	$var($List, var$1, $List::of("Dontent-length"_s, "99"_s));
	$var($List, var$2, $List::of("Name1"_s, "val1"_s, "Name1"_s, "val2"_s, "name1"_s, "val3"_s));
	$var($List, var$3, $List::of("Name1"_s, "val1"_s, "Name1"_s, "val2"_s, "name1"_s, "val3"_s));
	$assignStatic(HeadersTest2::compareTests, $new($HeadersTest2$CompareTestArray, {
		$(HeadersTest2::test(true, var$0, $($List::of("dontent-length"_s, "99"_s)))),
		$(HeadersTest2::test(false, var$1, $($List::of("dontent-length"_s, "100"_s)))),
		$(HeadersTest2::test(false, var$2, $($List::of("Name1"_s, "val1"_s, "Name1"_s, "val2"_s)))),
		$(HeadersTest2::test(true, var$3, $($List::of("NaMe1"_s, "val1"_s, "NAme1"_s, "val2"_s, "name1"_s, "val3"_s))))
	}));
}

HeadersTest2::HeadersTest2() {
}

$Class* HeadersTest2::load$($String* name, bool initialize) {
	$loadClass(HeadersTest2, name, initialize, &_HeadersTest2_ClassInfo_, clinit$HeadersTest2, allocate$HeadersTest2);
	return class$;
}

$Class* HeadersTest2::class$ = nullptr;