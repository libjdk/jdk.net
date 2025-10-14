#ifndef _JavadocExamples_h_
#define _JavadocExamples_h_
//$ class JavadocExamples
//$ extends java.lang.Object

#include <java/lang/Object.h>

class JavadocExamples$LineParserSubscriber;
namespace java {
	namespace lang {
		class Integer;
	}
}
namespace java {
	namespace net {
		namespace http {
			class HttpClient;
			class HttpRequest;
			class HttpResponse$BodySubscriber;
			class HttpResponse$ResponseInfo;
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace java {
	namespace util {
		namespace regex {
			class Pattern;
		}
	}
}

class $export JavadocExamples : public ::java::lang::Object {
	$class(JavadocExamples, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JavadocExamples();
	void init$();
	virtual void fromHttpClientClasslevelDescription();
	virtual void fromHttpRequest();
	virtual void fromHttpResponse();
	virtual void fromLineSubscriber1();
	virtual void fromLineSubscriber2();
	static bool lambda$fromHttpRequest$0($String* n, $String* v);
	static bool lambda$fromHttpRequest$1($String* n, $String* v);
	static bool lambda$fromHttpRequest$2($String* name, $String* value);
	static ::java::net::http::HttpResponse$BodySubscriber* lambda$fromHttpResponse$3(::java::net::http::HttpResponse$ResponseInfo* info);
	static ::java::net::http::HttpResponse$BodySubscriber* lambda$fromHttpResponse$4(::java::net::http::HttpResponse$ResponseInfo* responseInfo);
	static ::java::net::http::HttpResponse$BodySubscriber* lambda$fromHttpResponse$5(::java::net::http::HttpResponse$ResponseInfo* responseInfo);
	static ::java::net::http::HttpResponse$BodySubscriber* lambda$fromHttpResponse$6(::java::net::http::HttpResponse$ResponseInfo* responseInfo);
	static ::java::net::http::HttpResponse$BodySubscriber* lambda$fromHttpResponse$7(::java::net::http::HttpResponse$ResponseInfo* responseInfo);
	static ::java::net::http::HttpResponse$BodySubscriber* lambda$fromHttpResponse$8(::java::net::http::HttpResponse$ResponseInfo* resp);
	static void lambda$fromLineSubscriber1$9(::java::lang::Integer* status);
	static ::java::util::List* lambda$fromLineSubscriber2$10(::JavadocExamples$LineParserSubscriber* s);
	::java::net::http::HttpRequest* request = nullptr;
	::java::net::http::HttpClient* client = nullptr;
	::java::util::regex::Pattern* p = nullptr;
};

#endif // _JavadocExamples_h_