#ifndef _MultiAuthTest$HttpRequestBuilderFactory_h_
#define _MultiAuthTest$HttpRequestBuilderFactory_h_
//$ interface MultiAuthTest$HttpRequestBuilderFactory
//$ extends java.util.function.Function

#include <java/util/function/Function.h>

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

class $export MultiAuthTest$HttpRequestBuilderFactory : public ::java::util::function::Function {
	$interface(MultiAuthTest$HttpRequestBuilderFactory, $NO_CLASS_INIT, ::java::util::function::Function)
public:
	virtual ::java::net::http::HttpRequest$Builder* request(::java::net::URI* uri);
};

#endif // _MultiAuthTest$HttpRequestBuilderFactory_h_