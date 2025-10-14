#ifndef _JavadocExamples$FromMappingSubscriber_h_
#define _JavadocExamples$FromMappingSubscriber_h_
//$ class JavadocExamples$FromMappingSubscriber
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace net {
		namespace http {
			class HttpResponse$BodySubscriber;
		}
	}
}
namespace java {
	namespace util {
		namespace function {
			class Supplier;
		}
	}
}

class $export JavadocExamples$FromMappingSubscriber : public ::java::lang::Object {
	$class(JavadocExamples$FromMappingSubscriber, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JavadocExamples$FromMappingSubscriber();
	void init$();
	static ::java::net::http::HttpResponse$BodySubscriber* asJSON($Class* targetType);
	static $Object* lambda$asJSON$0(::java::io::InputStream* is, $Class* targetType);
	static ::java::util::function::Supplier* lambda$asJSON$1($Class* targetType, ::java::io::InputStream* is);
};

#endif // _JavadocExamples$FromMappingSubscriber_h_