#ifndef _MultiAuthTest$ServerAuth_h_
#define _MultiAuthTest$ServerAuth_h_
//$ class MultiAuthTest$ServerAuth
//$ extends com.sun.net.httpserver.BasicAuthenticator

#include <com/sun/net/httpserver/BasicAuthenticator.h>

class $export MultiAuthTest$ServerAuth : public ::com::sun::net::httpserver::BasicAuthenticator {
	$class(MultiAuthTest$ServerAuth, $NO_CLASS_INIT, ::com::sun::net::httpserver::BasicAuthenticator)
public:
	MultiAuthTest$ServerAuth();
	void init$($String* realm);
	virtual bool checkCredentials($String* username, $String* password) override;
	$volatile($String*) passwd = nullptr;
};

#endif // _MultiAuthTest$ServerAuth_h_