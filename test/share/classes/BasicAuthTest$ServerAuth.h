#ifndef _BasicAuthTest$ServerAuth_h_
#define _BasicAuthTest$ServerAuth_h_
//$ class BasicAuthTest$ServerAuth
//$ extends com.sun.net.httpserver.BasicAuthenticator

#include <com/sun/net/httpserver/BasicAuthenticator.h>

class $export BasicAuthTest$ServerAuth : public ::com::sun::net::httpserver::BasicAuthenticator {
	$class(BasicAuthTest$ServerAuth, $NO_CLASS_INIT, ::com::sun::net::httpserver::BasicAuthenticator)
public:
	BasicAuthTest$ServerAuth();
	void init$($String* realm);
	virtual bool checkCredentials($String* username, $String* password) override;
};

#endif // _BasicAuthTest$ServerAuth_h_