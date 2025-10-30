#include <B6791927.h>

#include <java/net/HttpCookie.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef FRANCE

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $HttpCookie = ::java::net::HttpCookie;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;

$MethodInfo _B6791927_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(B6791927::*)()>(&B6791927::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<void(*)($StringArray*)>(&B6791927::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _B6791927_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"B6791927",
	"java.lang.Object",
	nullptr,
	nullptr,
	_B6791927_MethodInfo_
};

$Object* allocate$B6791927($Class* clazz) {
	return $of($alloc(B6791927));
}

void B6791927::init$() {
}

void B6791927::main($StringArray* aaParamters) {
	$useLocalCurrentObjectStackCache();
	$var($Locale, reservedLocale, $Locale::getDefault());
	{
		$var($Throwable, var$0, nullptr);
		try {
			$Locale::setDefault($Locale::FRANCE);
			$var($List, cookies, $HttpCookie::parse("set-cookie: CUSTOMER=WILE_E_COYOTE; expires=Sat, 09-Nov-2041 23:12:40 GMT"_s));
			if (cookies == nullptr || $nc(cookies)->isEmpty()) {
				$throwNew($RuntimeException, "No cookie found"_s);
			}
			{
				$var($Iterator, i$, $nc(cookies)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($HttpCookie, c, $cast($HttpCookie, i$->next()));
					{
						if ($nc(c)->getMaxAge() == 0) {
							$throwNew($RuntimeException, "Expiration date shouldn\'t be 0"_s);
						}
					}
				}
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$Locale::setDefault(reservedLocale);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

B6791927::B6791927() {
}

$Class* B6791927::load$($String* name, bool initialize) {
	$loadClass(B6791927, name, initialize, &_B6791927_ClassInfo_, allocate$B6791927);
	return class$;
}

$Class* B6791927::class$ = nullptr;