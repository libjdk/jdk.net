#include <HeadersTest2$CompareTest.h>

#include <HeadersTest2.h>
#include <java/net/URI.h>
#include <java/net/http/HttpHeaders.h>
#include <java/net/http/HttpRequest$Builder.h>
#include <java/net/http/HttpRequest.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

using $HeadersTest2 = ::HeadersTest2;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $URI = ::java::net::URI;
using $HttpHeaders = ::java::net::http::HttpHeaders;
using $HttpRequest = ::java::net::http::HttpRequest;
using $HttpRequest$Builder = ::java::net::http::HttpRequest$Builder;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;

$FieldInfo _HeadersTest2$CompareTest_FieldInfo_[] = {
	{"succeed", "Z", nullptr, 0, $field(HeadersTest2$CompareTest, succeed)},
	{"nameValues1", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", 0, $field(HeadersTest2$CompareTest, nameValues1)},
	{"nameValues2", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", 0, $field(HeadersTest2$CompareTest, nameValues2)},
	{}
};

$MethodInfo _HeadersTest2$CompareTest_MethodInfo_[] = {
	{"<init>", "(ZLjava/util/List;Ljava/util/List;)V", "(ZLjava/util/List<Ljava/lang/String;>;Ljava/util/List<Ljava/lang/String;>;)V", 0, $method(static_cast<void(HeadersTest2$CompareTest::*)(bool,$List*,$List*)>(&HeadersTest2$CompareTest::init$))},
	{"getRequest", "(Ljava/util/List;)Ljava/net/http/HttpRequest;", "(Ljava/util/List<Ljava/lang/String;>;)Ljava/net/http/HttpRequest;", 0},
	{"print", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/lang/String;>;)V", $STATIC, $method(static_cast<void(*)($List*)>(&HeadersTest2$CompareTest::print))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _HeadersTest2$CompareTest_InnerClassesInfo_[] = {
	{"HeadersTest2$CompareTest", "HeadersTest2", "CompareTest", $STATIC},
	{}
};

$ClassInfo _HeadersTest2$CompareTest_ClassInfo_ = {
	$ACC_SUPER,
	"HeadersTest2$CompareTest",
	"java.lang.Object",
	nullptr,
	_HeadersTest2$CompareTest_FieldInfo_,
	_HeadersTest2$CompareTest_MethodInfo_,
	nullptr,
	nullptr,
	_HeadersTest2$CompareTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadersTest2"
};

$Object* allocate$HeadersTest2$CompareTest($Class* clazz) {
	return $of($alloc(HeadersTest2$CompareTest));
}

void HeadersTest2$CompareTest::init$(bool succeed, $List* l1, $List* l2) {
	this->succeed = succeed;
	$set(this, nameValues1, l1);
	$set(this, nameValues2, l2);
}

void HeadersTest2$CompareTest::run() {
	$useLocalCurrentObjectStackCache();
	$var($HttpRequest, r1, getRequest(this->nameValues1));
	$var($HttpRequest, r2, getRequest(this->nameValues2));
	$var($HttpHeaders, h1, $nc(r1)->headers());
	$var($HttpHeaders, h2, $nc(r2)->headers());
	bool equal = $nc(h1)->equals(h2);
	if (equal && !this->succeed) {
		$nc($System::err)->println("Expected failure"_s);
		print(this->nameValues1);
		print(this->nameValues2);
		$throwNew($RuntimeException);
	} else if (!equal && this->succeed) {
		$nc($System::err)->println("Expected success"_s);
		print(this->nameValues1);
		print(this->nameValues2);
		$throwNew($RuntimeException);
	}
	if (h1->equals($$new($Object))) {
		$throwNew($RuntimeException, "Unexpected h1 equals Object"_s);
	}
	if ($nc(h2)->equals(r1)) {
		$throwNew($RuntimeException, "Unexpected h2 equals r1"_s);
	}
}

void HeadersTest2$CompareTest::print($List* list) {
	$useLocalCurrentObjectStackCache();
	$nc($System::err)->print("{"_s);
	{
		$var($Iterator, i$, $nc(list)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, s, $cast($String, i$->next()));
			{
				$nc($System::err)->print($$str({s, " "_s}));
			}
		}
	}
	$nc($System::err)->println("}"_s);
}

$HttpRequest* HeadersTest2$CompareTest::getRequest($List* headers) {
	$useLocalCurrentObjectStackCache();
	$init($HeadersTest2);
	$var($HttpRequest$Builder, builder, $HttpRequest::newBuilder($HeadersTest2::uri));
	$var($Iterator, iterator, $nc(headers)->iterator());
	while ($nc(iterator)->hasNext()) {
		$var($String, name, $cast($String, iterator->next()));
		$var($String, value, $cast($String, iterator->next()));
		$nc(builder)->header(name, value);
	}
	return $nc($($nc(builder)->GET()))->build();
}

HeadersTest2$CompareTest::HeadersTest2$CompareTest() {
}

$Class* HeadersTest2$CompareTest::load$($String* name, bool initialize) {
	$loadClass(HeadersTest2$CompareTest, name, initialize, &_HeadersTest2$CompareTest_ClassInfo_, allocate$HeadersTest2$CompareTest);
	return class$;
}

$Class* HeadersTest2$CompareTest::class$ = nullptr;