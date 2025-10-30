#include <TestHttpCookie.h>

#include <java/net/HttpCookie.h>
#include <java/util/List.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $HttpCookie = ::java::net::HttpCookie;
using $List = ::java::util::List;

$FieldInfo _TestHttpCookie_FieldInfo_[] = {
	{"testCount", "I", nullptr, $PRIVATE | $STATIC, $staticField(TestHttpCookie, testCount)},
	{"cHeader", "Ljava/lang/String;", nullptr, $PRIVATE, $field(TestHttpCookie, cHeader)},
	{"cookies", "Ljava/util/List;", "Ljava/util/List<Ljava/net/HttpCookie;>;", $PRIVATE, $field(TestHttpCookie, cookies)},
	{}
};

$MethodInfo _TestHttpCookie_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(TestHttpCookie::*)($String*)>(&TestHttpCookie::init$))},
	{"a", "(IJ)LTestHttpCookie;", nullptr, 0},
	{"a", "(J)LTestHttpCookie;", nullptr, 0},
	{"c", "(ILjava/lang/String;)LTestHttpCookie;", nullptr, 0},
	{"c", "(Ljava/lang/String;)LTestHttpCookie;", nullptr, 0},
	{"cu", "(ILjava/lang/String;)LTestHttpCookie;", nullptr, 0},
	{"cu", "(Ljava/lang/String;)LTestHttpCookie;", nullptr, 0},
	{"d", "(ILjava/lang/String;)LTestHttpCookie;", nullptr, 0},
	{"d", "(Ljava/lang/String;)LTestHttpCookie;", nullptr, 0},
	{"dm", "(Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $STATIC, $method(static_cast<void(*)($String*,$String*,bool)>(&TestHttpCookie::dm))},
	{"dsc", "(IZ)LTestHttpCookie;", nullptr, 0},
	{"dsc", "(Z)LTestHttpCookie;", nullptr, 0},
	{"eq", "(Ljava/net/HttpCookie;Ljava/net/HttpCookie;Z)V", nullptr, $STATIC, $method(static_cast<void(*)($HttpCookie*,$HttpCookie*,bool)>(&TestHttpCookie::eq))},
	{"header", "(Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*)>(&TestHttpCookie::header))},
	{"httpOnly", "(IZ)LTestHttpCookie;", nullptr, 0},
	{"httpOnly", "(Z)LTestHttpCookie;", nullptr, 0},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestHttpCookie::main))},
	{"misc", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&TestHttpCookie::misc))},
	{"n", "(ILjava/lang/String;)LTestHttpCookie;", nullptr, 0},
	{"n", "(Ljava/lang/String;)LTestHttpCookie;", nullptr, 0},
	{"netscape", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&TestHttpCookie::netscape))},
	{"nil", "()LTestHttpCookie;", nullptr, 0},
	{"p", "(ILjava/lang/String;)LTestHttpCookie;", nullptr, 0},
	{"p", "(Ljava/lang/String;)LTestHttpCookie;", nullptr, 0},
	{"port", "(ILjava/lang/String;)LTestHttpCookie;", nullptr, 0},
	{"port", "(Ljava/lang/String;)LTestHttpCookie;", nullptr, 0},
	{"raiseError", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0},
	{"raiseError", "(Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*)>(&TestHttpCookie::raiseError))},
	{"rfc2965", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&TestHttpCookie::rfc2965))},
	{"runTests", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&TestHttpCookie::runTests))},
	{"test", "(Ljava/lang/String;)LTestHttpCookie;", nullptr, $STATIC, $method(static_cast<TestHttpCookie*(*)($String*)>(&TestHttpCookie::test))},
	{"v", "(ILjava/lang/String;)LTestHttpCookie;", nullptr, 0},
	{"v", "(Ljava/lang/String;)LTestHttpCookie;", nullptr, 0},
	{"ver", "(II)LTestHttpCookie;", nullptr, 0},
	{"ver", "(I)LTestHttpCookie;", nullptr, 0},
	{}
};

$ClassInfo _TestHttpCookie_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestHttpCookie",
	"java.lang.Object",
	nullptr,
	_TestHttpCookie_FieldInfo_,
	_TestHttpCookie_MethodInfo_
};

$Object* allocate$TestHttpCookie($Class* clazz) {
	return $of($alloc(TestHttpCookie));
}

int32_t TestHttpCookie::testCount = 0;

TestHttpCookie* TestHttpCookie::test($String* cookieHeader) {
	$init(TestHttpCookie);
	++TestHttpCookie::testCount;
	return $new(TestHttpCookie, cookieHeader);
}

void TestHttpCookie::init$($String* cHeader) {
	$set(this, cHeader, nullptr);
	$set(this, cookies, nullptr);
	$set(this, cHeader, cHeader);
	try {
		$var($List, cookies, $HttpCookie::parse(cHeader));
		$set(this, cookies, cookies);
	} catch ($IllegalArgumentException& ignored) {
		$set(this, cookies, nullptr);
	}
}

TestHttpCookie* TestHttpCookie::n(int32_t index, $String* n) {
	$useLocalCurrentObjectStackCache();
	$var($HttpCookie, cookie, $cast($HttpCookie, $nc(this->cookies)->get(index)));
	if (cookie == nullptr || !$nc(n)->equalsIgnoreCase($($nc(cookie)->getName()))) {
		raiseError("name"_s, $($nc(cookie)->getName()), n);
	}
	return this;
}

TestHttpCookie* TestHttpCookie::n($String* n) {
	return this->n(0, n);
}

TestHttpCookie* TestHttpCookie::v(int32_t index, $String* v) {
	$useLocalCurrentObjectStackCache();
	$var($HttpCookie, cookie, $cast($HttpCookie, $nc(this->cookies)->get(index)));
	if (cookie == nullptr || !$nc(v)->equals($($nc(cookie)->getValue()))) {
		raiseError("value"_s, $($nc(cookie)->getValue()), v);
	}
	return this;
}

TestHttpCookie* TestHttpCookie::v($String* v) {
	return this->v(0, v);
}

TestHttpCookie* TestHttpCookie::ver(int32_t index, int32_t ver) {
	$useLocalCurrentObjectStackCache();
	$var($HttpCookie, cookie, $cast($HttpCookie, $nc(this->cookies)->get(index)));
	if (cookie == nullptr || (ver != $nc(cookie)->getVersion())) {
		$var($String, var$0, "version"_s);
		$var($String, var$1, $Integer::toString(cookie->getVersion()));
		raiseError(var$0, var$1, $($Integer::toString(ver)));
	}
	return this;
}

TestHttpCookie* TestHttpCookie::ver(int32_t ver) {
	return this->ver(0, ver);
}

TestHttpCookie* TestHttpCookie::p(int32_t index, $String* p) {
	$useLocalCurrentObjectStackCache();
	$var($HttpCookie, cookie, $cast($HttpCookie, $nc(this->cookies)->get(index)));
	if (cookie == nullptr || !$nc(p)->equals($($nc(cookie)->getPath()))) {
		raiseError("path"_s, $($nc(cookie)->getPath()), p);
	}
	return this;
}

TestHttpCookie* TestHttpCookie::p($String* p) {
	return this->p(0, p);
}

TestHttpCookie* TestHttpCookie::nil() {
	if (this->cookies != nullptr) {
		raiseError("Check null-ability fail"_s);
	}
	return this;
}

TestHttpCookie* TestHttpCookie::c(int32_t index, $String* c) {
	$useLocalCurrentObjectStackCache();
	$var($HttpCookie, cookie, $cast($HttpCookie, $nc(this->cookies)->get(index)));
	if (cookie == nullptr || !$nc(c)->equals($($nc(cookie)->getComment()))) {
		raiseError("comment"_s, $($nc(cookie)->getComment()), c);
	}
	return this;
}

TestHttpCookie* TestHttpCookie::c($String* c) {
	return this->c(0, c);
}

TestHttpCookie* TestHttpCookie::cu(int32_t index, $String* cu) {
	$useLocalCurrentObjectStackCache();
	$var($HttpCookie, cookie, $cast($HttpCookie, $nc(this->cookies)->get(index)));
	if (cookie == nullptr || !$nc(cu)->equals($($nc(cookie)->getCommentURL()))) {
		raiseError("comment url"_s, $($nc(cookie)->getCommentURL()), cu);
	}
	return this;
}

TestHttpCookie* TestHttpCookie::cu($String* cu) {
	return this->cu(0, cu);
}

TestHttpCookie* TestHttpCookie::dsc(int32_t index, bool dsc) {
	$useLocalCurrentObjectStackCache();
	$var($HttpCookie, cookie, $cast($HttpCookie, $nc(this->cookies)->get(index)));
	if (cookie == nullptr || (dsc != $nc(cookie)->getDiscard())) {
		$var($String, var$0, "discard"_s);
		$var($String, var$1, $Boolean::toString(cookie->getDiscard()));
		raiseError(var$0, var$1, $($Boolean::toString(dsc)));
	}
	return this;
}

TestHttpCookie* TestHttpCookie::dsc(bool dsc) {
	return this->dsc(0, dsc);
}

TestHttpCookie* TestHttpCookie::d(int32_t index, $String* d) {
	$useLocalCurrentObjectStackCache();
	$var($HttpCookie, cookie, $cast($HttpCookie, $nc(this->cookies)->get(index)));
	if (cookie == nullptr || !$nc(d)->equalsIgnoreCase($($nc(cookie)->getDomain()))) {
		raiseError("domain"_s, $($nc(cookie)->getDomain()), d);
	}
	return this;
}

TestHttpCookie* TestHttpCookie::d($String* d) {
	return this->d(0, d);
}

TestHttpCookie* TestHttpCookie::a(int32_t index, int64_t a) {
	$useLocalCurrentObjectStackCache();
	$var($HttpCookie, cookie, $cast($HttpCookie, $nc(this->cookies)->get(index)));
	if (cookie == nullptr || (a != $nc(cookie)->getMaxAge())) {
		$var($String, var$0, "max-age"_s);
		$var($String, var$1, $Long::toString(cookie->getMaxAge()));
		raiseError(var$0, var$1, $($Long::toString(a)));
	}
	return this;
}

TestHttpCookie* TestHttpCookie::a(int64_t a) {
	return this->a(0, a);
}

TestHttpCookie* TestHttpCookie::port(int32_t index, $String* p) {
	$useLocalCurrentObjectStackCache();
	$var($HttpCookie, cookie, $cast($HttpCookie, $nc(this->cookies)->get(index)));
	if (cookie == nullptr || !$nc(p)->equals($($nc(cookie)->getPortlist()))) {
		raiseError("portlist"_s, $($nc(cookie)->getPortlist()), p);
	}
	return this;
}

TestHttpCookie* TestHttpCookie::port($String* p) {
	return port(0, p);
}

TestHttpCookie* TestHttpCookie::httpOnly(int32_t index, bool b) {
	$useLocalCurrentObjectStackCache();
	$var($HttpCookie, cookie, $cast($HttpCookie, $nc(this->cookies)->get(index)));
	if (cookie == nullptr || b != $nc(cookie)->isHttpOnly()) {
		$var($String, var$0, "HttpOnly"_s);
		$var($String, var$1, $String::valueOf(cookie->isHttpOnly()));
		raiseError(var$0, var$1, $($String::valueOf(b)));
	}
	return this;
}

TestHttpCookie* TestHttpCookie::httpOnly(bool b) {
	return httpOnly(0, b);
}

void TestHttpCookie::eq($HttpCookie* ck1, $HttpCookie* ck2, bool same) {
	$init(TestHttpCookie);
	$useLocalCurrentObjectStackCache();
	++TestHttpCookie::testCount;
	if ($nc(ck1)->equals(ck2) != same) {
		raiseError($$str({"Comparison inconsistent: "_s, ck1, " "_s, ck2, " should "_s, (same ? "equal"_s : "not equal"_s)}));
	}
	int32_t h1 = $nc(ck1)->hashCode();
	int32_t h2 = $nc(ck2)->hashCode();
	if ((h1 == h2) != same) {
		raiseError($$str({"Comparison inconsistent: hashCode for "_s, ck1, " "_s, ck2, " should "_s, (same ? "equal"_s : "not equal"_s)}));
	}
}

void TestHttpCookie::dm($String* domain, $String* host, bool matches) {
	$init(TestHttpCookie);
	++TestHttpCookie::testCount;
	if ($HttpCookie::domainMatches(domain, host) != matches) {
		raiseError($$str({"Host "_s, host, (matches ? " should "_s : " should not "_s), "domain-match with domain "_s, domain}));
	}
}

void TestHttpCookie::raiseError($String* attr, $String* realValue, $String* expectedValue) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append("Cookie "_s)->append(attr)->append(" is "_s)->append(realValue)->append(", should be "_s)->append(expectedValue)->append(" ("_s)->append(this->cHeader)->append(")"_s);
	$throwNew($RuntimeException, $(sb->toString()));
}

void TestHttpCookie::raiseError($String* prompt) {
	$init(TestHttpCookie);
	$throwNew($RuntimeException, prompt);
}

void TestHttpCookie::runTests() {
	$init(TestHttpCookie);
	rfc2965();
	netscape();
	misc();
}

void TestHttpCookie::rfc2965() {
	$init(TestHttpCookie);
	$useLocalCurrentObjectStackCache();
	header("Test using rfc 2965 syntax"_s);
	$nc($($nc($($nc($($nc($(test("set-cookie2: Customer=\"WILE_E_COYOTE\"; Version=\"1\"; Path=\"/acme\""_s)))->n("Customer"_s)))->v("WILE_E_COYOTE"_s)))->ver(1)))->p("/acme"_s);
	$nc($($nc($($nc($($nc($(test("set-cookie2: Customer = \"WILE_E_COYOTE\"; Version = \"1\"; Path = \"/acme\""_s)))->n("Customer"_s)))->v("WILE_E_COYOTE"_s)))->ver(1)))->p("/acme"_s);
	$nc($(test("set-cookie2: $Customer = \"WILE_E_COYOTE\"; Version = \"1\"; Path = \"/acme\""_s)))->nil();
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("set-cookie2: Customer=\"WILE_E_COYOTE\";Version=\"1\";Path=\"/acme\";Comment=\"this is a coyote\";CommentURL=\"http://www.coyote.org\";Discard;Domain=\".coyote.org\";Max-Age=\"3600\";Port=\"80\";Secure"_s)))->n("Customer"_s)))->v("WILE_E_COYOTE"_s)))->ver(1)))->p("/acme"_s)))->c("this is a coyote"_s)))->cu("http://www.coyote.org"_s)))->dsc(true)))->d(".coyote.org"_s)))->a(3600)))->port("80"_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("Customer=\"WILE_E_COYOTE\";Version=\"1\";Path=\"/acme\";Comment=\"this is a coyote\";CommentURL=\"http://www.coyote.org\";Discard;Domain=\".coyote.org\";Max-Age=\"3600\";Port=\"80\";Secure"_s)))->n("Customer"_s)))->v("WILE_E_COYOTE"_s)))->ver(1)))->p("/acme"_s)))->c("this is a coyote"_s)))->cu("http://www.coyote.org"_s)))->dsc(true)))->d(".coyote.org"_s)))->a(3600)))->port("80"_s);
	$nc($(test(""_s)))->nil();
	try {
		test(nullptr);
	} catch ($NullPointerException& ignored) {
	}
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("Set-Cookie2:Customer=\"dtftest\"; Discard; Secure; Domain=\".sun.com\"; Max-Age=\"100\"; Version=\"1\";  path=\"/www\"; Port=\"80\""_s)))->n("Customer"_s)))->v("dtftest"_s)))->ver(1)))->d(".sun.com"_s)))->p("/www"_s)))->port("80"_s)))->dsc(true)))->a(100);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("Set-Cookie2:Customer=\"dtftest\"; Discard; Secure; Domain=\".sun.com\"; Max-Age=\"100\"; Version=\"1\";  path=\"/www\"; Port=\"80\";Domain=\".java.sun.com\"; Max-Age=\"200\"; path=\"/javadoc\"; Port=\"8080\""_s)))->n("Customer"_s)))->v("dtftest"_s)))->ver(1)))->d(".sun.com"_s)))->p("/www"_s)))->port("80"_s)))->dsc(true)))->a(100);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("Set-Cookie2:Customer=\"dtftest\";Discard; Secure; Domain=\"sun.com\"; Max-Age=\"100\";Version=\"1\";  Path=\"/www\"; Port=\"80,8080\""_s)))->n("Customer"_s)))->v("dtftest"_s)))->ver(1)))->d("sun.com"_s)))->p("/www"_s)))->port("80,8080"_s)))->dsc(true)))->a(100);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("Set-Cookie2:Customer=\"developer\";Domain=\"sun.com\";Max-Age=\"100\";Path=\"/www\";Port=\"80,8080\";CommentURL=\"http://www.sun.com/java1,000,000.html\""_s)))->n("Customer"_s)))->v("developer"_s)))->d("sun.com"_s)))->p("/www"_s)))->port("80,8080"_s)))->a(100)))->cu("http://www.sun.com/java1,000,000.html"_s);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($(test("Set-Cookie2:C1=\"V1\";Domain=\".sun1.com\";path=\"/www1\";Max-Age=\"100\",C2=\"V2\";Domain=\".sun2.com\";path=\"/www2\";Max-Age=\"200\""_s)))->n(0, "C1"_s)))->v(0, "V1"_s)))->p(0, "/www1"_s)))->a(0, 100)))->d(0, ".sun1.com"_s)))->n(1, "C2"_s)))->v(1, "V2"_s)))->p(1, "/www2"_s)))->a(1, 200)))->d(1, ".sun2.com"_s);
	$nc($($nc($(test("Set-Cookie2:C1=\"V1\";foobar"_s)))->n(0, "C1"_s)))->v(0, "V1"_s);
}

void TestHttpCookie::netscape() {
	$init(TestHttpCookie);
	$useLocalCurrentObjectStackCache();
	header("Test using netscape cookie syntax"_s);
	$nc($($nc($($nc($($nc($(test("set-cookie: CUSTOMER=WILE_E_COYOTE; path=/; expires=Wednesday, 09-Nov-99 23:12:40 GMT"_s)))->n("CUSTOMER"_s)))->v("WILE_E_COYOTE"_s)))->p("/"_s)))->ver(0);
	$nc($($nc($($nc($($nc($(test("CUSTOMER=WILE_E_COYOTE; path=/; expires=Wednesday, 09-Nov-99 23:12:40 GMT"_s)))->n("CUSTOMER"_s)))->v("WILE_E_COYOTE"_s)))->p("/"_s)))->ver(0);
	$nc($($nc($($nc($($nc($($nc($(test("Set-Cookie: PREF=ID=1eda537de48ac25d:CR=1:TM=1112868587:LM=1112868587:S=t3FPA-mT9lTR3bxU;expires=Sun, 17-Jan-2038 19:14:07 GMT; path=/; domain=.google.com"_s)))->n("PREF"_s)))->v("ID=1eda537de48ac25d:CR=1:TM=1112868587:LM=1112868587:S=t3FPA-mT9lTR3bxU"_s)))->p("/"_s)))->d(".google.com"_s)))->ver(0);
	$nc($($nc($($nc($($nc($(test("set-cookie: CUSTOMER=WILE_E_COYOTE; path=/; expires=Wednesday, 09-Nov-99 23:12:40 GMT; Secure"_s)))->n("CUSTOMER"_s)))->v("WILE_E_COYOTE"_s)))->p("/"_s)))->ver(0);
	$nc($($nc($($nc($($nc($(test("set-cookie: CUSTOMER=WILE_E_COYOTE; path=/; expires=Wednesday, 09-Nov-99 23:12:40 GMT; path=\"/acme\""_s)))->n("CUSTOMER"_s)))->v("WILE_E_COYOTE"_s)))->p("/"_s)))->ver(0);
	$nc($(test("set-cookie: CUSTOMER=WILE_E_COYOTE; version=\'1\'"_s)))->ver(1);
}

void TestHttpCookie::misc() {
	$init(TestHttpCookie);
	$useLocalCurrentObjectStackCache();
	header("Test equals()"_s);
	$var($HttpCookie, c1, $new($HttpCookie, "Customer"_s, "WILE_E_COYOTE"_s));
	c1->setDomain(".coyote.org"_s);
	c1->setPath("/acme"_s);
	$var($HttpCookie, c2, $cast($HttpCookie, c1->clone()));
	eq(c1, c2, true);
	$assign(c1, $new($HttpCookie, "Customer"_s, "WILE_E_COYOTE"_s));
	$assign(c2, $new($HttpCookie, "CUSTOMER"_s, "WILE_E_COYOTE"_s));
	eq(c1, c2, true);
	$assign(c1, $new($HttpCookie, "Customer"_s, "WILE_E_COYOTE"_s));
	$assign(c2, $new($HttpCookie, "CUSTOMER"_s, "WILE_E_COYOTE"_s));
	c1->setPath("/acme"_s);
	c2->setPath("/ACME"_s);
	eq(c1, c2, false);
	header("Test domainMatches()"_s);
	dm(".foo.com"_s, "y.x.foo.com"_s, false);
	dm(".foo.com"_s, "x.foo.com"_s, true);
	dm(".com"_s, "whatever.com"_s, false);
	dm(".com."_s, "whatever.com"_s, false);
	dm(".ajax.com"_s, "ajax.com"_s, true);
	dm(".local"_s, "example.local"_s, true);
	dm("example.local"_s, "example"_s, true);
	++TestHttpCookie::testCount;
	try {
		$assign(c1, $new($HttpCookie, ""_s, "whatever"_s));
	} catch ($IllegalArgumentException& ignored) {
	}
	$nc($(test("set-cookie: CUSTOMER=WILE_E_COYOTE;HttpOnly"_s)))->httpOnly(true);
	$nc($(test("set-cookie: CUSTOMER=WILE_E_COYOTE"_s)))->httpOnly(false);
	$nc($(test("set-cookie: CUST OMER=WILE_E_COYOTE"_s)))->nil();
}

void TestHttpCookie::header($String* prompt) {
	$init(TestHttpCookie);
	$nc($System::out)->println($$str({"== "_s, prompt, " =="_s}));
}

void TestHttpCookie::main($StringArray* args) {
	$init(TestHttpCookie);
	$useLocalCurrentObjectStackCache();
	runTests();
	$nc($System::out)->println($$str({"Succeeded in running "_s, $$str(TestHttpCookie::testCount), " tests."_s}));
}

void clinit$TestHttpCookie($Class* class$) {
	TestHttpCookie::testCount = 0;
}

TestHttpCookie::TestHttpCookie() {
}

$Class* TestHttpCookie::load$($String* name, bool initialize) {
	$loadClass(TestHttpCookie, name, initialize, &_TestHttpCookie_ClassInfo_, clinit$TestHttpCookie, allocate$TestHttpCookie);
	return class$;
}

$Class* TestHttpCookie::class$ = nullptr;