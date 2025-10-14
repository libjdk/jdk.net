#ifndef _B4769350$MyAuthenticator_h_
#define _B4769350$MyAuthenticator_h_
//$ class B4769350$MyAuthenticator
//$ extends java.net.Authenticator

#include <java/net/Authenticator.h>

namespace java {
	namespace net {
		class PasswordAuthentication;
	}
}

class $export B4769350$MyAuthenticator : public ::java::net::Authenticator {
	$class(B4769350$MyAuthenticator, $NO_CLASS_INIT, ::java::net::Authenticator)
public:
	B4769350$MyAuthenticator();
	void init$();
	virtual int32_t getCount();
	virtual ::java::net::PasswordAuthentication* getPasswordAuthentication() override;
	virtual void resetCount();
	$volatile(int32_t) count = 0;
};

#endif // _B4769350$MyAuthenticator_h_