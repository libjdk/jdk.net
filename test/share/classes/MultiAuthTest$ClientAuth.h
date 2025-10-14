#ifndef _MultiAuthTest$ClientAuth_h_
#define _MultiAuthTest$ClientAuth_h_
//$ class MultiAuthTest$ClientAuth
//$ extends java.net.Authenticator

#include <java/net/Authenticator.h>

namespace java {
	namespace net {
		class PasswordAuthentication;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicInteger;
			}
		}
	}
}

class $export MultiAuthTest$ClientAuth : public ::java::net::Authenticator {
	$class(MultiAuthTest$ClientAuth, $NO_CLASS_INIT, ::java::net::Authenticator)
public:
	MultiAuthTest$ClientAuth();
	void init$();
	virtual ::java::net::PasswordAuthentication* getPasswordAuthentication() override;
	::java::util::concurrent::atomic::AtomicInteger* count = nullptr;
	$volatile($String*) passwd = nullptr;
};

#endif // _MultiAuthTest$ClientAuth_h_