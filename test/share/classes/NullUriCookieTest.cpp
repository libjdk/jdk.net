#include <NullUriCookieTest.h>

#include <java/net/CookieManager.h>
#include <java/net/CookieStore.h>
#include <java/net/HttpCookie.h>
#include <java/net/URI.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $CookieManager = ::java::net::CookieManager;
using $CookieStore = ::java::net::CookieStore;
using $HttpCookie = ::java::net::HttpCookie;
using $URI = ::java::net::URI;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;

$FieldInfo _NullUriCookieTest_FieldInfo_[] = {
	{"fail", "Z", nullptr, $STATIC, $staticField(NullUriCookieTest, fail)},
	{}
};

$MethodInfo _NullUriCookieTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NullUriCookieTest::*)()>(&NullUriCookieTest::init$))},
	{"checkCookieNullUri", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&NullUriCookieTest::checkCookieNullUri)), "java.lang.Exception"},
	{"checkFail", "(Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*)>(&NullUriCookieTest::checkFail))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&NullUriCookieTest::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _NullUriCookieTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"NullUriCookieTest",
	"java.lang.Object",
	nullptr,
	_NullUriCookieTest_FieldInfo_,
	_NullUriCookieTest_MethodInfo_
};

$Object* allocate$NullUriCookieTest($Class* clazz) {
	return $of($alloc(NullUriCookieTest));
}

bool NullUriCookieTest::fail = false;

void NullUriCookieTest::init$() {
}

void NullUriCookieTest::main($StringArray* args) {
	$init(NullUriCookieTest);
	checkCookieNullUri();
}

void NullUriCookieTest::checkCookieNullUri() {
	$init(NullUriCookieTest);
	$useLocalCurrentObjectStackCache();
	$var($CookieStore, cookieStore, ($$new($CookieManager))->getCookieStore());
	if ($nc(cookieStore)->removeAll()) {
		NullUriCookieTest::fail = true;
	}
	checkFail("removeAll on empty store should return false"_s);
	$var($HttpCookie, cookie, $new($HttpCookie, "MY_COOKIE"_s, "MY_COOKIE_VALUE"_s));
	cookie->setDomain("foo.com"_s);
	$nc(cookieStore)->add(nullptr, cookie);
	$var($URI, uri, $new($URI, "http://foo.com"_s));
	$var($List, addedCookieList, cookieStore->get(uri));
	if ($nc(addedCookieList)->size() != 1) {
		NullUriCookieTest::fail = true;
	}
	checkFail("Abnormal size of cookie jar"_s);
	{
		$var($Iterator, i$, $nc(addedCookieList)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($HttpCookie, chip, $cast($HttpCookie, i$->next()));
			{
				if (!$nc(chip)->equals(cookie)) {
					NullUriCookieTest::fail = true;
				}
			}
		}
	}
	checkFail("Cookie not retrieved from Cookie Jar"_s);
	bool ret = cookieStore->remove(nullptr, cookie);
	if (!ret) {
		NullUriCookieTest::fail = true;
	}
	checkFail("Abnormal removal behaviour from Cookie Jar"_s);
}

void NullUriCookieTest::checkFail($String* exp) {
	$init(NullUriCookieTest);
	if (NullUriCookieTest::fail) {
		$throwNew($RuntimeException, exp);
	}
}

void clinit$NullUriCookieTest($Class* class$) {
	NullUriCookieTest::fail = false;
}

NullUriCookieTest::NullUriCookieTest() {
}

$Class* NullUriCookieTest::load$($String* name, bool initialize) {
	$loadClass(NullUriCookieTest, name, initialize, &_NullUriCookieTest_ClassInfo_, clinit$NullUriCookieTest, allocate$NullUriCookieTest);
	return class$;
}

$Class* NullUriCookieTest::class$ = nullptr;