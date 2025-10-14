#ifndef _ImmutableHeaders_h_
#define _ImmutableHeaders_h_
//$ class ImmutableHeaders
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("RESPONSE")
#undef RESPONSE

class $export ImmutableHeaders : public ::java::lang::Object {
	$class(ImmutableHeaders, 0, ::java::lang::Object)
public:
	ImmutableHeaders();
	void init$();
	static void main($StringArray* args);
	static $String* RESPONSE;
};

#pragma pop_macro("RESPONSE")

#endif // _ImmutableHeaders_h_