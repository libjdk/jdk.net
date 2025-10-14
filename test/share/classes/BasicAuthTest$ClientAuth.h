#ifndef _BasicAuthTest$ClientAuth_h_
#define _BasicAuthTest$ClientAuth_h_
//$ class BasicAuthTest$ClientAuth
//$ extends java.net.Authenticator

#include <java/net/Authenticator.h>

namespace java {
	namespace net {
		class PasswordAuthentication;
	}
}

class $export BasicAuthTest$ClientAuth : public ::java::net::Authenticator {
	$class(BasicAuthTest$ClientAuth, $NO_CLASS_INIT, ::java::net::Authenticator)
public:
	BasicAuthTest$ClientAuth();
	void init$();
	virtual ::java::net::PasswordAuthentication* getPasswordAuthentication() override;
	$volatile(int32_t) count = 0;
};

#endif // _BasicAuthTest$ClientAuth_h_