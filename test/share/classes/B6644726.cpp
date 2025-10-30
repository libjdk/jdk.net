#include <B6644726.h>

#include <java/net/CookieManager.h>
#include <java/net/CookiePolicy.h>
#include <java/net/CookieStore.h>
#include <java/net/HttpCookie.h>
#include <java/net/URI.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef ACCEPT_ALL

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $CookieManager = ::java::net::CookieManager;
using $CookiePolicy = ::java::net::CookiePolicy;
using $CookieStore = ::java::net::CookieStore;
using $HttpCookie = ::java::net::HttpCookie;
using $URI = ::java::net::URI;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;

$MethodInfo _B6644726_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(B6644726::*)()>(&B6644726::init$))},
	{"fail", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&B6644726::fail)), "java.lang.Exception"},
	{"isIn", "(Ljava/util/List;Ljava/lang/String;)Z", "(Ljava/util/List<Ljava/lang/String;>;Ljava/lang/String;)Z", $PRIVATE | $STATIC, $method(static_cast<bool(*)($List*,$String*)>(&B6644726::isIn))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&B6644726::main)), "java.lang.Exception"},
	{"testCookieStore", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&B6644726::testCookieStore)), "java.lang.Exception"},
	{}
};

$ClassInfo _B6644726_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"B6644726",
	"java.lang.Object",
	nullptr,
	nullptr,
	_B6644726_MethodInfo_
};

$Object* allocate$B6644726($Class* clazz) {
	return $of($alloc(B6644726));
}

void B6644726::init$() {
}

void B6644726::main($StringArray* args) {
	testCookieStore();
}

void B6644726::testCookieStore() {
	$useLocalCurrentObjectStackCache();
	$var($CookieManager, cm, $new($CookieManager));
	$var($CookieStore, cs, cm->getCookieStore());
	$var($URI, uri, $new($URI, "http://www.s1.sun.com/dir/foo/doc.html"_s));
	$var($URI, suri, $new($URI, "https://www.s1.sun.com/dir/foo/index.html"_s));
	$init($CookiePolicy);
	cm->setCookiePolicy($CookiePolicy::ACCEPT_ALL);
	$var($ArrayList, lst, $new($ArrayList));
	lst->add("myCookie1=foo"_s);
	lst->add("myCookie2=bar; path=/dir; expires=Tue, 19 Aug 2025 16:00:00 GMT"_s);
	lst->add("myCookie3=test; path=/dir; expires=Tue Aug 19 2025 16:00:00 GMT-0100"_s);
	lst->add("myCookie4=test; domain=.sun.com; path=/dir/foo"_s);
	$var($HashMap, map, $new($HashMap));
	map->put("Set-Cookie"_s, lst);
	cm->put(uri, map);
	map->clear();
	lst->clear();
	lst->add("myCookie5=test; secure"_s);
	map->put("Set-Cookie"_s, lst);
	cm->put(suri, map);
	$var($List, cookies, $nc(cs)->getCookies());
	if ($nc(cookies)->size() != 5) {
		fail($$str({"Should have 5 cookies. Got only "_s, $$str(cookies->size()), ", expires probably didn\'t parse correctly"_s}));
	}
	{
		$var($Iterator, i$, $nc(cookies)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($HttpCookie, c, $cast($HttpCookie, i$->next()));
			{
				if ($nc($($nc(c)->getName()))->equals("myCookie1"_s)) {
					if (!"/dir/foo/"_s->equals($(c->getPath()))) {
						fail($$str({"Default path for myCookie1 is "_s, $(c->getPath())}));
					}
				}
			}
		}
	}
	$var($HashMap, emptyMap, $new($HashMap));
	$var($Map, m, cm->get($$new($URI, "http://www.s2.sun.com/dir/foo/doc2.html"_s), emptyMap));
	$var($List, clst, $cast($List, $nc(m)->get("Cookie"_s)));
	if ($nc(clst)->size() != 1) {
		fail($$str({"We should have only 1 cookie, not "_s, $$str(clst->size())}));
	} else if (!$nc(($cast($String, $(clst->get(0)))))->startsWith("myCookie4"_s)) {
		fail($$str({"The cookie should be myCookie4, not "_s, $cast($String, $(clst->get(0)))}));
	}
	$assign(m, cm->get(suri, emptyMap));
	$assign(clst, $cast($List, m->get("Cookie"_s)));
	if ($nc(clst)->size() != 5) {
		fail($$str({"Cookies didn\'t cross from http to https. Got only "_s, $$str(clst->size())}));
	}
	$assign(m, cm->get(uri, emptyMap));
	$assign(clst, $cast($List, m->get("Cookie"_s)));
	if ($nc(clst)->size() != 4) {
		fail($$str({"We should have gotten only 4 cookies over http (non secure), got "_s, $$str(clst->size())}));
	}
	if (isIn(clst, "myCookie5="_s)) {
		fail("Got the secure cookie over a non secure link"_s);
	}
	$assign(uri, $new($URI, "http://www.sun.com/"_s));
	lst->clear();
	lst->add("myCookie6=foo"_s);
	map->clear();
	map->put("Set-Cookie"_s, lst);
	cm->put(uri, map);
	$assign(uri, $new($URI, "http://www.sun.com"_s));
	$assign(m, cm->get(uri, emptyMap));
	$assign(clst, $cast($List, m->get("Cookie"_s)));
	if ($nc(clst)->size() != 1) {
		fail("Missing a cookie when using an empty path"_s);
	}
	$assign(uri, $new($URI, "http://www.sun.com"_s));
	lst->clear();
	lst->add("myCookie7=foo"_s);
	map->clear();
	map->put("Set-Cookie"_s, lst);
	cm->put(uri, map);
	$assign(uri, $new($URI, "http://www.sun.com/"_s));
	$assign(m, cm->get(uri, emptyMap));
	$assign(clst, $cast($List, m->get("Cookie"_s)));
	if (!isIn(clst, "myCookie7="_s)) {
		fail("Missing a cookie when using an empty path"_s);
	}
	lst->clear();
	lst->add("myCookie8=porttest; port"_s);
	lst->add("myCookie9=porttest; port=\"80,8000\""_s);
	lst->add("myCookie10=porttest; port=\"8000\""_s);
	map->clear();
	map->put("Set-Cookie"_s, lst);
	$assign(uri, $new($URI, "http://www.sun.com/"_s));
	cm->put(uri, map);
	$assign(cookies, cs->getCookies());
	{
		$var($Iterator, i$, cookies->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($HttpCookie, c, $cast($HttpCookie, i$->next()));
			{
				if ($nc($($nc(c)->getName()))->equals("myCookie10"_s)) {
					fail("A cookie with an invalid port list was accepted"_s);
				}
			}
		}
	}
	$assign(uri, $new($URI, "http://www.sun.com:80/"_s));
	$assign(m, cm->get(uri, emptyMap));
	$assign(clst, $cast($List, m->get("Cookie"_s)));
	bool var$0 = !isIn(clst, "myCookie8="_s);
	if (var$0 || !isIn(clst, "myCookie9="_s)) {
		fail("Missing a cookie on port 80"_s);
	}
	$assign(uri, $new($URI, "http://www.sun.com:8000/"_s));
	$assign(m, cm->get(uri, emptyMap));
	$assign(clst, $cast($List, m->get("Cookie"_s)));
	if (!isIn(clst, "myCookie9="_s)) {
		fail("Missing a cookie on port 80"_s);
	}
	if (isIn(clst, "myCookie8="_s)) {
		fail("A cookie with an invalid port list was returned"_s);
	}
	lst->clear();
	map->clear();
	$nc($(cm->getCookieStore()))->removeAll();
	lst->add("myCookie11=httpOnlyTest; httpOnly"_s);
	map->put("Set-Cookie"_s, lst);
	$assign(uri, $new($URI, "http://www.sun.com/"_s));
	cm->put(uri, map);
	$assign(m, cm->get(uri, emptyMap));
	$assign(clst, $cast($List, m->get("Cookie"_s)));
	if (!isIn(clst, "myCookie11="_s)) {
		fail("Missing cookie with httpOnly flag"_s);
	}
	$assign(uri, $new($URI, "javascript://www.sun.com/"_s));
	$assign(m, cm->get(uri, emptyMap));
	$assign(clst, $cast($List, m->get("Cookie"_s)));
	if (isIn(clst, "myCookie11="_s)) {
		fail("Should get the cookie with httpOnly when scheme is javascript:"_s);
	}
}

bool B6644726::isIn($List* lst, $String* cookie) {
	$useLocalCurrentObjectStackCache();
	if (lst == nullptr || $nc(lst)->isEmpty()) {
		return false;
	}
	{
		$var($Iterator, i$, $nc(lst)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, s, $cast($String, i$->next()));
			{
				if ($nc(s)->startsWith(cookie)) {
					return true;
				}
			}
		}
	}
	return false;
}

void B6644726::fail($String* msg) {
	$throwNew($RuntimeException, msg);
}

B6644726::B6644726() {
}

$Class* B6644726::load$($String* name, bool initialize) {
	$loadClass(B6644726, name, initialize, &_B6644726_ClassInfo_, allocate$B6644726);
	return class$;
}

$Class* B6644726::class$ = nullptr;