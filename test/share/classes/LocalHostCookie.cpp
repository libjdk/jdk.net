#include <LocalHostCookie.h>

#include <LocalHostCookie$Server.h>
#include <java/io/InputStream.h>
#include <java/net/CookieHandler.h>
#include <java/net/CookieManager.h>
#include <java/net/HttpURLConnection.h>
#include <java/net/Proxy.h>
#include <java/net/URI.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef NO_PROXY

using $LocalHostCookie$Server = ::LocalHostCookie$Server;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $CookieHandler = ::java::net::CookieHandler;
using $CookieManager = ::java::net::CookieManager;
using $HttpURLConnection = ::java::net::HttpURLConnection;
using $Proxy = ::java::net::Proxy;
using $URI = ::java::net::URI;
using $URL = ::java::net::URL;
using $URLConnection = ::java::net::URLConnection;
using $List = ::java::util::List;
using $Map = ::java::util::Map;

$MethodInfo _LocalHostCookie_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocalHostCookie::*)()>(&LocalHostCookie::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&LocalHostCookie::main)), "java.lang.Exception"},
	{"runTest", "()V", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$InnerClassInfo _LocalHostCookie_InnerClassesInfo_[] = {
	{"LocalHostCookie$MyCookieHandler", "LocalHostCookie", "MyCookieHandler", 0},
	{"LocalHostCookie$Server", "LocalHostCookie", "Server", 0},
	{}
};

$ClassInfo _LocalHostCookie_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"LocalHostCookie",
	"java.lang.Object",
	nullptr,
	nullptr,
	_LocalHostCookie_MethodInfo_,
	nullptr,
	nullptr,
	_LocalHostCookie_InnerClassesInfo_,
	nullptr,
	nullptr,
	"LocalHostCookie$MyCookieHandler,LocalHostCookie$Server"
};

$Object* allocate$LocalHostCookie($Class* clazz) {
	return $of($alloc(LocalHostCookie));
}

void LocalHostCookie::init$() {
}

void LocalHostCookie::main($StringArray* args) {
	$$new(LocalHostCookie)->runTest();
}

void LocalHostCookie::runTest() {
	$useLocalCurrentObjectStackCache();
	$var($LocalHostCookie$Server, s, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$assign(s, $new($LocalHostCookie$Server, this));
			s->startServer();
			$var($URL, url, $new($URL, "http"_s, "localhost"_s, s->getPort(), "/"_s));
			$init($Proxy);
			$var($HttpURLConnection, urlConnection, $cast($HttpURLConnection, url->openConnection($Proxy::NO_PROXY)));
			$nc(urlConnection)->setRequestMethod("GET"_s);
			urlConnection->setDoOutput(true);
			urlConnection->connect();
			urlConnection->getInputStream();
			$var($CookieHandler, cookieHandler, $CookieHandler::getDefault());
			if (cookieHandler == nullptr) {
				$assign(cookieHandler, $new($CookieManager));
				$CookieHandler::setDefault(cookieHandler);
			}
			$var($URI, var$1, $nc($(urlConnection->getURL()))->toURI());
			$nc(cookieHandler)->put(var$1, $(urlConnection->getHeaderFields()));
			$var($URI, var$2, $nc($(urlConnection->getURL()))->toURI());
			$var($Map, map, cookieHandler->get(var$2, $(urlConnection->getHeaderFields())));
			if ($nc(map)->containsKey("Cookie"_s)) {
				$var($List, list, $cast($List, map->get("Cookie"_s)));
				if (list == nullptr || $nc(list)->size() == 0) {
					$throwNew($RuntimeException, "Test failed!"_s);
				}
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} /*finally*/ {
			if (s != nullptr) {
				s->stopServer();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

LocalHostCookie::LocalHostCookie() {
}

$Class* LocalHostCookie::load$($String* name, bool initialize) {
	$loadClass(LocalHostCookie, name, initialize, &_LocalHostCookie_ClassInfo_, allocate$LocalHostCookie);
	return class$;
}

$Class* LocalHostCookie::class$ = nullptr;