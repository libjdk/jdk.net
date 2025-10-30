#include <ProxyServer$Credentials.h>

#include <ProxyServer.h>
#include <jcpp.h>

using $ProxyServer = ::ProxyServer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _ProxyServer$Credentials_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ProxyServer$Credentials, name$)},
	{"password", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ProxyServer$Credentials, password$)},
	{}
};

$MethodInfo _ProxyServer$Credentials_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(ProxyServer$Credentials::*)($String*,$String*)>(&ProxyServer$Credentials::init$))},
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"password", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ProxyServer$Credentials_InnerClassesInfo_[] = {
	{"ProxyServer$Credentials", "ProxyServer", "Credentials", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ProxyServer$Credentials_ClassInfo_ = {
	$ACC_SUPER,
	"ProxyServer$Credentials",
	"java.lang.Object",
	nullptr,
	_ProxyServer$Credentials_FieldInfo_,
	_ProxyServer$Credentials_MethodInfo_,
	nullptr,
	nullptr,
	_ProxyServer$Credentials_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ProxyServer"
};

$Object* allocate$ProxyServer$Credentials($Class* clazz) {
	return $of($alloc(ProxyServer$Credentials));
}

void ProxyServer$Credentials::init$($String* name, $String* password) {
	$set(this, name$, name);
	$set(this, password$, password);
}

$String* ProxyServer$Credentials::name() {
	return this->name$;
}

$String* ProxyServer$Credentials::password() {
	return this->password$;
}

ProxyServer$Credentials::ProxyServer$Credentials() {
}

$Class* ProxyServer$Credentials::load$($String* name, bool initialize) {
	$loadClass(ProxyServer$Credentials, name, initialize, &_ProxyServer$Credentials_ClassInfo_, allocate$ProxyServer$Credentials);
	return class$;
}

$Class* ProxyServer$Credentials::class$ = nullptr;