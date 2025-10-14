#ifndef _Http1ChunkedTest$Responses_h_
#define _Http1ChunkedTest$Responses_h_
//$ class Http1ChunkedTest$Responses
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("REQ0")
#undef REQ0
#pragma push_macro("REQ1")
#undef REQ1
#pragma push_macro("REQ2")
#undef REQ2
#pragma push_macro("REQ3")
#undef REQ3
#pragma push_macro("REQ4")
#undef REQ4
#pragma push_macro("REQ5")
#undef REQ5

namespace java {
	namespace util {
		class List;
	}
}

class $export Http1ChunkedTest$Responses : public ::java::lang::Enum {
	$class(Http1ChunkedTest$Responses, 0, ::java::lang::Enum)
public:
	Http1ChunkedTest$Responses();
	static $Array<Http1ChunkedTest$Responses>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* headers, ::java::util::List* body);
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* headers, ::java::util::List* body, int64_t delay);
	static ::Http1ChunkedTest$Responses* valueOf($String* name);
	static $Array<Http1ChunkedTest$Responses>* values();
	static ::Http1ChunkedTest$Responses* REQ0;
	static ::Http1ChunkedTest$Responses* REQ1;
	static ::Http1ChunkedTest$Responses* REQ2;
	static ::Http1ChunkedTest$Responses* REQ3;
	static ::Http1ChunkedTest$Responses* REQ4;
	static ::Http1ChunkedTest$Responses* REQ5;
	static $Array<Http1ChunkedTest$Responses>* $VALUES;
	$String* headers = nullptr;
	::java::util::List* body = nullptr;
	int64_t delay = 0;
};

#pragma pop_macro("REQ0")
#pragma pop_macro("REQ1")
#pragma pop_macro("REQ2")
#pragma pop_macro("REQ3")
#pragma pop_macro("REQ4")
#pragma pop_macro("REQ5")

#endif // _Http1ChunkedTest$Responses_h_