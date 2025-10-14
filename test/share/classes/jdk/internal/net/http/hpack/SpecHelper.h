#ifndef _jdk_internal_net_http_hpack_SpecHelper_h_
#define _jdk_internal_net_http_hpack_SpecHelper_h_
//$ class jdk.internal.net.http.hpack.SpecHelper
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace hpack {

class $export SpecHelper : public ::java::lang::Object {
	$class(SpecHelper, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SpecHelper();
	void init$();
	static ::java::nio::ByteBuffer* toBytes($String* hexdump);
	static $String* toHexdump(::java::nio::ByteBuffer* bb);
};

				} // hpack
			} // http
		} // net
	} // internal
} // jdk

#endif // _jdk_internal_net_http_hpack_SpecHelper_h_