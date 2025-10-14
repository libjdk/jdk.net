#ifndef _GetAuthenticatorTest$MyAuthenticator_h_
#define _GetAuthenticatorTest$MyAuthenticator_h_
//$ class GetAuthenticatorTest$MyAuthenticator
//$ extends java.net.Authenticator

#include <java/net/Authenticator.h>

namespace java {
	namespace net {
		class PasswordAuthentication;
	}
}

class $export GetAuthenticatorTest$MyAuthenticator : public ::java::net::Authenticator {
	$class(GetAuthenticatorTest$MyAuthenticator, $NO_CLASS_INIT, ::java::net::Authenticator)
public:
	GetAuthenticatorTest$MyAuthenticator();
	void init$();
	virtual ::java::net::PasswordAuthentication* getPasswordAuthentication() override;
};

#endif // _GetAuthenticatorTest$MyAuthenticator_h_