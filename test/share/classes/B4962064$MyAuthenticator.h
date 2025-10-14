#ifndef _B4962064$MyAuthenticator_h_
#define _B4962064$MyAuthenticator_h_
//$ class B4962064$MyAuthenticator
//$ extends java.net.Authenticator

#include <java/net/Authenticator.h>

namespace java {
	namespace net {
		class PasswordAuthentication;
	}
}

class $export B4962064$MyAuthenticator : public ::java::net::Authenticator {
	$class(B4962064$MyAuthenticator, $NO_CLASS_INIT, ::java::net::Authenticator)
public:
	B4962064$MyAuthenticator();
	void init$();
	virtual ::java::net::PasswordAuthentication* getPasswordAuthentication() override;
	int32_t count = 0;
};

#endif // _B4962064$MyAuthenticator_h_