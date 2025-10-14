#ifndef _Http1ChunkedTest$Data_h_
#define _Http1ChunkedTest$Data_h_
//$ class Http1ChunkedTest$Data
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("REQ0_RESPONSE_BODY")
#undef REQ0_RESPONSE_BODY
#pragma push_macro("REQ1_RESPONSE_BODY")
#undef REQ1_RESPONSE_BODY
#pragma push_macro("REQ2_RESPONSE_BODY")
#undef REQ2_RESPONSE_BODY
#pragma push_macro("REQ3_RESPONSE_BODY")
#undef REQ3_RESPONSE_BODY
#pragma push_macro("REQ4_RESPONSE_BODY")
#undef REQ4_RESPONSE_BODY
#pragma push_macro("REQ5_RESPONSE_BODY")
#undef REQ5_RESPONSE_BODY
#pragma push_macro("RESPONSE_HEADERS")
#undef RESPONSE_HEADERS

namespace java {
	namespace util {
		class List;
	}
}

class $export Http1ChunkedTest$Data : public ::java::lang::Object {
	$class(Http1ChunkedTest$Data, 0, ::java::lang::Object)
public:
	Http1ChunkedTest$Data();
	void init$();
	static $String* RESPONSE_HEADERS;
	static ::java::util::List* REQ0_RESPONSE_BODY;
	static ::java::util::List* REQ1_RESPONSE_BODY;
	static ::java::util::List* REQ2_RESPONSE_BODY;
	static ::java::util::List* REQ3_RESPONSE_BODY;
	static ::java::util::List* REQ4_RESPONSE_BODY;
	static ::java::util::List* REQ5_RESPONSE_BODY;
};

#pragma pop_macro("REQ0_RESPONSE_BODY")
#pragma pop_macro("REQ1_RESPONSE_BODY")
#pragma pop_macro("REQ2_RESPONSE_BODY")
#pragma pop_macro("REQ3_RESPONSE_BODY")
#pragma pop_macro("REQ4_RESPONSE_BODY")
#pragma pop_macro("REQ5_RESPONSE_BODY")
#pragma pop_macro("RESPONSE_HEADERS")

#endif // _Http1ChunkedTest$Data_h_