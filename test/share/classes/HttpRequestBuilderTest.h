#ifndef _HttpRequestBuilderTest_h_
#define _HttpRequestBuilderTest_h_
//$ class HttpRequestBuilderTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("TEST_URI")
#undef TEST_URI

namespace java {
	namespace lang {
		class Exception;
		class Runnable;
	}
}
namespace java {
	namespace net {
		class URI;
	}
}
namespace java {
	namespace net {
		namespace http {
			class HttpRequest$Builder;
		}
	}
}
namespace java {
	namespace util {
		namespace function {
			class BiFunction;
			class Function;
			class Supplier;
		}
	}
}

class $export HttpRequestBuilderTest : public ::java::lang::Object {
	$class(HttpRequestBuilderTest, 0, ::java::lang::Object)
public:
	HttpRequestBuilderTest();
	void init$();
	static $String* expectedNames($ClassArray* exceptions);
	static bool isExpected(::java::lang::Exception* x, $ClassArray* expected);
	static bool lambda$isExpected$19(::java::lang::Exception* x, $Class* c);
	static void lambda$main$0();
	static void lambda$main$1();
	static ::java::net::http::HttpRequest$Builder* lambda$main$10();
	static ::java::net::http::HttpRequest$Builder* lambda$main$11();
	static ::java::net::http::HttpRequest$Builder* lambda$main$12();
	static ::java::net::http::HttpRequest$Builder* lambda$main$13();
	static ::java::net::http::HttpRequest$Builder* lambda$main$14();
	static ::java::net::http::HttpRequest$Builder* lambda$main$15();
	static ::java::net::http::HttpRequest$Builder* lambda$main$16();
	static ::java::net::http::HttpRequest$Builder* lambda$main$17();
	static ::java::net::http::HttpRequest$Builder* lambda$main$18();
	static void lambda$main$2();
	static void lambda$main$3();
	static void lambda$main$4();
	static void lambda$main$5();
	static void lambda$main$6();
	static void lambda$main$7();
	static ::java::net::http::HttpRequest$Builder* lambda$main$8();
	static ::java::net::http::HttpRequest$Builder* lambda$main$9();
	static void main($StringArray* args);
	static void method($String* name, ::java::util::function::Supplier* supplier, $String* expectedMethod);
	static bool shouldFail($ClassArray* exceptions);
	static void test0($String* name, ::java::lang::Runnable* r, $ClassArray* ex);
	static $Object* test1($String* name, Object$* receiver, ::java::util::function::Function* m, Object$* arg, $ClassArray* ex);
	static $Object* test2($String* name, Object$* receiver, ::java::util::function::BiFunction* m, Object$* arg1, Object$* arg2, $ClassArray* ex);
	static ::java::net::URI* TEST_URI;
};

#pragma pop_macro("TEST_URI")

#endif // _HttpRequestBuilderTest_h_