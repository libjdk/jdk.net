#ifndef _Cert_h_
#define _Cert_h_
//$ class Cert
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("BAD_CERT")
#undef BAD_CERT
#pragma push_macro("GOOD_CERT")
#undef GOOD_CERT
#pragma push_macro("LOOPBACK_CERT")
#undef LOOPBACK_CERT

class $export Cert : public ::java::lang::Enum {
	$class(Cert, 0, ::java::lang::Enum)
public:
	Cert();
	static $Array<Cert>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* keyAlgo, $String* certStr, $String* keyStr);
	static ::Cert* valueOf($String* name);
	static $Array<Cert>* values();
	static ::Cert* BAD_CERT;
	static ::Cert* GOOD_CERT;
	static ::Cert* LOOPBACK_CERT;
	static $Array<Cert>* $VALUES;
	$String* keyAlgo = nullptr;
	$String* certStr = nullptr;
	$String* keyStr = nullptr;
};

#pragma pop_macro("BAD_CERT")
#pragma pop_macro("GOOD_CERT")
#pragma pop_macro("LOOPBACK_CERT")

#endif // _Cert_h_