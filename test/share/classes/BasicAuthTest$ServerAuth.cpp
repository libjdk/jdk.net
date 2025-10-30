#include <BasicAuthTest$ServerAuth.h>

#include <BasicAuthTest.h>
#include <com/sun/net/httpserver/BasicAuthenticator.h>
#include <jcpp.h>

using $BasicAuthTest = ::BasicAuthTest;
using $BasicAuthenticator = ::com::sun::net::httpserver::BasicAuthenticator;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _BasicAuthTest$ServerAuth_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(BasicAuthTest$ServerAuth::*)($String*)>(&BasicAuthTest$ServerAuth::init$))},
	{"checkCredentials", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicAuthTest$ServerAuth_InnerClassesInfo_[] = {
	{"BasicAuthTest$ServerAuth", "BasicAuthTest", "ServerAuth", $STATIC},
	{}
};

$ClassInfo _BasicAuthTest$ServerAuth_ClassInfo_ = {
	$ACC_SUPER,
	"BasicAuthTest$ServerAuth",
	"com.sun.net.httpserver.BasicAuthenticator",
	nullptr,
	nullptr,
	_BasicAuthTest$ServerAuth_MethodInfo_,
	nullptr,
	nullptr,
	_BasicAuthTest$ServerAuth_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"BasicAuthTest"
};

$Object* allocate$BasicAuthTest$ServerAuth($Class* clazz) {
	return $of($alloc(BasicAuthTest$ServerAuth));
}

void BasicAuthTest$ServerAuth::init$($String* realm) {
	$BasicAuthenticator::init$(realm);
}

bool BasicAuthTest$ServerAuth::checkCredentials($String* username, $String* password) {
	bool var$0 = !"user"_s->equals(username);
	if (var$0 || !"passwd"_s->equals(password)) {
		return false;
	}
	return true;
}

BasicAuthTest$ServerAuth::BasicAuthTest$ServerAuth() {
}

$Class* BasicAuthTest$ServerAuth::load$($String* name, bool initialize) {
	$loadClass(BasicAuthTest$ServerAuth, name, initialize, &_BasicAuthTest$ServerAuth_ClassInfo_, allocate$BasicAuthTest$ServerAuth);
	return class$;
}

$Class* BasicAuthTest$ServerAuth::class$ = nullptr;