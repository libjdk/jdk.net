#include <HttpInputStreamTest.h>

#include <HttpInputStreamTest$HttpInputStreamHandler.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/Reader.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/URI.h>
#include <java/net/http/HttpClient.h>
#include <java/net/http/HttpHeaders.h>
#include <java/net/http/HttpRequest$Builder.h>
#include <java/net/http/HttpRequest.h>
#include <java/net/http/HttpResponse$BodyHandler.h>
#include <java/net/http/HttpResponse.h>
#include <java/nio/charset/Charset.h>
#include <java/util/Locale.h>
#include <java/util/Optional.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef DEBUG
#undef ROOT

using $HttpInputStreamTest$HttpInputStreamHandler = ::HttpInputStreamTest$HttpInputStreamHandler;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $PrintStream = ::java::io::PrintStream;
using $Reader = ::java::io::Reader;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $URI = ::java::net::URI;
using $HttpClient = ::java::net::http::HttpClient;
using $HttpHeaders = ::java::net::http::HttpHeaders;
using $HttpRequest = ::java::net::http::HttpRequest;
using $HttpRequest$Builder = ::java::net::http::HttpRequest$Builder;
using $HttpResponse = ::java::net::http::HttpResponse;
using $HttpResponse$BodyHandler = ::java::net::http::HttpResponse$BodyHandler;
using $Charset = ::java::nio::charset::Charset;
using $Locale = ::java::util::Locale;
using $Optional = ::java::util::Optional;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;

class HttpInputStreamTest$$Lambda$lambda$getCharset$0 : public $Function {
	$class(HttpInputStreamTest$$Lambda$lambda$getCharset$0, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* x) override {
		 return $of(HttpInputStreamTest::lambda$getCharset$0($cast($String, x)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<HttpInputStreamTest$$Lambda$lambda$getCharset$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo HttpInputStreamTest$$Lambda$lambda$getCharset$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HttpInputStreamTest$$Lambda$lambda$getCharset$0::*)()>(&HttpInputStreamTest$$Lambda$lambda$getCharset$0::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo HttpInputStreamTest$$Lambda$lambda$getCharset$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"HttpInputStreamTest$$Lambda$lambda$getCharset$0",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* HttpInputStreamTest$$Lambda$lambda$getCharset$0::load$($String* name, bool initialize) {
	$loadClass(HttpInputStreamTest$$Lambda$lambda$getCharset$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* HttpInputStreamTest$$Lambda$lambda$getCharset$0::class$ = nullptr;

class HttpInputStreamTest$$Lambda$trim$1 : public $Function {
	$class(HttpInputStreamTest$$Lambda$trim$1, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($String, inst$)->trim());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<HttpInputStreamTest$$Lambda$trim$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo HttpInputStreamTest$$Lambda$trim$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HttpInputStreamTest$$Lambda$trim$1::*)()>(&HttpInputStreamTest$$Lambda$trim$1::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo HttpInputStreamTest$$Lambda$trim$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"HttpInputStreamTest$$Lambda$trim$1",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* HttpInputStreamTest$$Lambda$trim$1::load$($String* name, bool initialize) {
	$loadClass(HttpInputStreamTest$$Lambda$trim$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* HttpInputStreamTest$$Lambda$trim$1::class$ = nullptr;

class HttpInputStreamTest$$Lambda$lambda$getCharset$1$2 : public $Predicate {
	$class(HttpInputStreamTest$$Lambda$lambda$getCharset$1$2, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* x) override {
		 return HttpInputStreamTest::lambda$getCharset$1($cast($String, x));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<HttpInputStreamTest$$Lambda$lambda$getCharset$1$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo HttpInputStreamTest$$Lambda$lambda$getCharset$1$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HttpInputStreamTest$$Lambda$lambda$getCharset$1$2::*)()>(&HttpInputStreamTest$$Lambda$lambda$getCharset$1$2::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo HttpInputStreamTest$$Lambda$lambda$getCharset$1$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"HttpInputStreamTest$$Lambda$lambda$getCharset$1$2",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* HttpInputStreamTest$$Lambda$lambda$getCharset$1$2::load$($String* name, bool initialize) {
	$loadClass(HttpInputStreamTest$$Lambda$lambda$getCharset$1$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* HttpInputStreamTest$$Lambda$lambda$getCharset$1$2::class$ = nullptr;

class HttpInputStreamTest$$Lambda$lambda$getCharset$2$3 : public $Function {
	$class(HttpInputStreamTest$$Lambda$lambda$getCharset$2$3, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* x) override {
		 return $of(HttpInputStreamTest::lambda$getCharset$2($cast($String, x)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<HttpInputStreamTest$$Lambda$lambda$getCharset$2$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo HttpInputStreamTest$$Lambda$lambda$getCharset$2$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HttpInputStreamTest$$Lambda$lambda$getCharset$2$3::*)()>(&HttpInputStreamTest$$Lambda$lambda$getCharset$2$3::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo HttpInputStreamTest$$Lambda$lambda$getCharset$2$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"HttpInputStreamTest$$Lambda$lambda$getCharset$2$3",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* HttpInputStreamTest$$Lambda$lambda$getCharset$2$3::load$($String* name, bool initialize) {
	$loadClass(HttpInputStreamTest$$Lambda$lambda$getCharset$2$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* HttpInputStreamTest$$Lambda$lambda$getCharset$2$3::class$ = nullptr;

class HttpInputStreamTest$$Lambda$forName$4 : public $Function {
	$class(HttpInputStreamTest$$Lambda$forName$4, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* arg0) override {
		 return $of($Charset::forName($cast($String, arg0)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<HttpInputStreamTest$$Lambda$forName$4>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo HttpInputStreamTest$$Lambda$forName$4::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HttpInputStreamTest$$Lambda$forName$4::*)()>(&HttpInputStreamTest$$Lambda$forName$4::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo HttpInputStreamTest$$Lambda$forName$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"HttpInputStreamTest$$Lambda$forName$4",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* HttpInputStreamTest$$Lambda$forName$4::load$($String* name, bool initialize) {
	$loadClass(HttpInputStreamTest$$Lambda$forName$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* HttpInputStreamTest$$Lambda$forName$4::class$ = nullptr;

$FieldInfo _HttpInputStreamTest_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(HttpInputStreamTest, $assertionsDisabled)},
	{"DEBUG", "Z", nullptr, $PUBLIC | $STATIC, $staticField(HttpInputStreamTest, DEBUG)},
	{}
};

$MethodInfo _HttpInputStreamTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HttpInputStreamTest::*)()>(&HttpInputStreamTest::init$))},
	{"getCharset", "(Ljava/net/http/HttpHeaders;)Ljava/util/Optional;", "(Ljava/net/http/HttpHeaders;)Ljava/util/Optional<Ljava/nio/charset/Charset;>;", $PUBLIC | $STATIC, $method(static_cast<$Optional*(*)($HttpHeaders*)>(&HttpInputStreamTest::getCharset))},
	{"lambda$getCharset$0", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)($String*)>(&HttpInputStreamTest::lambda$getCharset$0))},
	{"lambda$getCharset$1", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($String*)>(&HttpInputStreamTest::lambda$getCharset$1))},
	{"lambda$getCharset$2", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)($String*)>(&HttpInputStreamTest::lambda$getCharset$2))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HttpInputStreamTest::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _HttpInputStreamTest_InnerClassesInfo_[] = {
	{"HttpInputStreamTest$HttpInputStreamHandler", "HttpInputStreamTest", "HttpInputStreamHandler", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _HttpInputStreamTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HttpInputStreamTest",
	"java.lang.Object",
	nullptr,
	_HttpInputStreamTest_FieldInfo_,
	_HttpInputStreamTest_MethodInfo_,
	nullptr,
	nullptr,
	_HttpInputStreamTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"HttpInputStreamTest$HttpInputStreamHandler,HttpInputStreamTest$HttpInputStreamHandler$HttpResponseInputStream"
};

$Object* allocate$HttpInputStreamTest($Class* clazz) {
	return $of($alloc(HttpInputStreamTest));
}

bool HttpInputStreamTest::$assertionsDisabled = false;
bool HttpInputStreamTest::DEBUG = false;

void HttpInputStreamTest::init$() {
}

$Optional* HttpInputStreamTest::getCharset($HttpHeaders* headers) {
	$init(HttpInputStreamTest);
	$useLocalCurrentObjectStackCache();
	$var($Optional, contentType, $nc(headers)->firstValue("Content-Type"_s));
	$var($Optional, charset, $Optional::empty());
	if ($nc(contentType)->isPresent()) {
		$var($StringArray, values, $nc(($cast($String, $(contentType->get()))))->split(";"_s));
		if ($nc(values->get(0))->startsWith("text/"_s)) {
			$assign(charset, $nc($($Optional::of($cast($String, $($nc($($nc($($nc($($nc($($nc($($nc($($Stream::of(values)))->map(static_cast<$Function*>($$new(HttpInputStreamTest$$Lambda$lambda$getCharset$0)))))->map(static_cast<$Function*>($$new(HttpInputStreamTest$$Lambda$trim$1)))))->filter(static_cast<$Predicate*>($$new(HttpInputStreamTest$$Lambda$lambda$getCharset$1$2)))))->map(static_cast<$Function*>($$new(HttpInputStreamTest$$Lambda$lambda$getCharset$2$3)))))->findFirst()))->orElse("ISO-8859-1"_s))))))->map(static_cast<$Function*>($$new(HttpInputStreamTest$$Lambda$forName$4))));
		}
	}
	return charset;
}

void HttpInputStreamTest::main($StringArray* args) {
	$init(HttpInputStreamTest);
	$useLocalCurrentObjectStackCache();
	$var($HttpClient, client, $HttpClient::newHttpClient());
	$var($HttpRequest, request, $nc($($nc($($HttpRequest::newBuilder($$new($URI, "http://hg.openjdk.java.net/jdk9/sandbox/jdk/shortlog/http-client-branch/"_s))))->GET()))->build());
	$var($CompletableFuture, handle, $nc(client)->sendAsync(request, $$new($HttpInputStreamTest$HttpInputStreamHandler, 3)));
	if (HttpInputStreamTest::DEBUG) {
		$nc($System::err)->println("Request sent"_s);
	}
	$var($HttpResponse, pending, $cast($HttpResponse, $nc(handle)->get()));
	$var($HttpHeaders, responseHeaders, $nc(pending)->headers());
	$var($Optional, charset, getCharset(responseHeaders));
	{
		$var($InputStream, is, $cast($InputStream, pending->body()));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$var($Reader, r, $new($InputStreamReader, is, $cast($Charset, $($nc(charset)->get()))));
					{
						$var($Throwable, var$1, nullptr);
						try {
							try {
								$var($chars, buff, $new($chars, 32));
								int32_t off = 0;
								int32_t n = 0;
								if (HttpInputStreamTest::DEBUG) {
									$nc($System::err)->println("Start receiving response body"_s);
								}
								if (HttpInputStreamTest::DEBUG) {
									$nc($System::err)->println($$str({"Charset: "_s, $($nc(charset)->get())}));
								}
								while ((n = r->read(buff, off, buff->length - off)) > 0) {
									if (!HttpInputStreamTest::$assertionsDisabled && !((buff->length - off) > 0)) {
										$throwNew($AssertionError);
									}
									if (!HttpInputStreamTest::$assertionsDisabled && !(n <= (buff->length - off))) {
										$throwNew($AssertionError);
									}
									if (n == (buff->length - off)) {
										$nc($System::out)->print(buff);
										off = 0;
									} else {
										off += n;
									}
									if (!HttpInputStreamTest::$assertionsDisabled && !(off < buff->length)) {
										$throwNew($AssertionError);
									}
								}
								if (!HttpInputStreamTest::$assertionsDisabled && !(off >= 0 && off < buff->length)) {
									$throwNew($AssertionError);
								}
								for (int32_t i = 0; i < off; ++i) {
									$nc($System::out)->print(buff->get(i));
								}
								$nc($System::out)->println("Done!"_s);
							} catch ($Throwable& t$) {
								try {
									r->close();
								} catch ($Throwable& x2) {
									t$->addSuppressed(x2);
								}
								$throw(t$);
							}
						} catch ($Throwable& var$2) {
							$assign(var$1, var$2);
						} /*finally*/ {
							r->close();
						}
						if (var$1 != nullptr) {
							$throw(var$1);
						}
					}
				} catch ($Throwable& t$) {
					if (is != nullptr) {
						try {
							is->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$3) {
				$assign(var$0, var$3);
			} /*finally*/ {
				if (is != nullptr) {
					is->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

$String* HttpInputStreamTest::lambda$getCharset$2($String* x) {
	$init(HttpInputStreamTest);
	return $nc(x)->substring("charset="_s->length());
}

bool HttpInputStreamTest::lambda$getCharset$1($String* x) {
	$init(HttpInputStreamTest);
	return $nc(x)->startsWith("charset="_s);
}

$String* HttpInputStreamTest::lambda$getCharset$0($String* x) {
	$init(HttpInputStreamTest);
	$init($Locale);
	return $nc(x)->toLowerCase($Locale::ROOT);
}

void clinit$HttpInputStreamTest($Class* class$) {
	HttpInputStreamTest::$assertionsDisabled = !HttpInputStreamTest::class$->desiredAssertionStatus();
	HttpInputStreamTest::DEBUG = $Boolean::getBoolean("test.debug"_s);
}

HttpInputStreamTest::HttpInputStreamTest() {
}

$Class* HttpInputStreamTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(HttpInputStreamTest$$Lambda$lambda$getCharset$0::classInfo$.name)) {
			return HttpInputStreamTest$$Lambda$lambda$getCharset$0::load$(name, initialize);
		}
		if (name->equals(HttpInputStreamTest$$Lambda$trim$1::classInfo$.name)) {
			return HttpInputStreamTest$$Lambda$trim$1::load$(name, initialize);
		}
		if (name->equals(HttpInputStreamTest$$Lambda$lambda$getCharset$1$2::classInfo$.name)) {
			return HttpInputStreamTest$$Lambda$lambda$getCharset$1$2::load$(name, initialize);
		}
		if (name->equals(HttpInputStreamTest$$Lambda$lambda$getCharset$2$3::classInfo$.name)) {
			return HttpInputStreamTest$$Lambda$lambda$getCharset$2$3::load$(name, initialize);
		}
		if (name->equals(HttpInputStreamTest$$Lambda$forName$4::classInfo$.name)) {
			return HttpInputStreamTest$$Lambda$forName$4::load$(name, initialize);
		}
	}
	$loadClass(HttpInputStreamTest, name, initialize, &_HttpInputStreamTest_ClassInfo_, clinit$HttpInputStreamTest, allocate$HttpInputStreamTest);
	return class$;
}

$Class* HttpInputStreamTest::class$ = nullptr;