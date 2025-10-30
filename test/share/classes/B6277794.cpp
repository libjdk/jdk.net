#include <B6277794.h>

#include <java/net/CookieManager.h>
#include <java/net/CookieStore.h>
#include <java/net/HttpCookie.h>
#include <java/net/URI.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $CookieManager = ::java::net::CookieManager;
using $CookieStore = ::java::net::CookieStore;
using $HttpCookie = ::java::net::HttpCookie;
using $URI = ::java::net::URI;
using $List = ::java::util::List;

$MethodInfo _B6277794_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(B6277794::*)()>(&B6277794::init$))},
	{"fail", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&B6277794::fail)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&B6277794::main)), "java.lang.Exception"},
	{"testCookieStore", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&B6277794::testCookieStore)), "java.lang.Exception"},
	{}
};

$ClassInfo _B6277794_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"B6277794",
	"java.lang.Object",
	nullptr,
	nullptr,
	_B6277794_MethodInfo_
};

$Object* allocate$B6277794($Class* clazz) {
	return $of($alloc(B6277794));
}

void B6277794::init$() {
}

void B6277794::main($StringArray* args) {
	testCookieStore();
}

void B6277794::testCookieStore() {
	$useLocalCurrentObjectStackCache();
	$var($CookieManager, cm, $new($CookieManager));
	$var($CookieStore, cs, cm->getCookieStore());
	$var($HttpCookie, c1, $new($HttpCookie, "COOKIE1"_s, "COOKIE1"_s));
	$var($HttpCookie, c2, $new($HttpCookie, "COOKIE2"_s, "COOKIE2"_s));
	$nc(cs)->add($$new($URI, "http://www.sun.com/solaris"_s), c1);
	cs->add($$new($URI, "http://www.sun.com/java"_s), c2);
	$var($List, uris, cs->getURIs());
	bool var$0 = $nc(uris)->size() != 1;
	if (var$0 || !$nc(($cast($URI, $($nc(uris)->get(0)))))->equals($$new($URI, "http://www.sun.com"_s))) {
		fail("CookieStore.getURIs() fail."_s);
	}
}

void B6277794::fail($String* msg) {
	$throwNew($RuntimeException, msg);
}

B6277794::B6277794() {
}

$Class* B6277794::load$($String* name, bool initialize) {
	$loadClass(B6277794, name, initialize, &_B6277794_ClassInfo_, allocate$B6277794);
	return class$;
}

$Class* B6277794::class$ = nullptr;