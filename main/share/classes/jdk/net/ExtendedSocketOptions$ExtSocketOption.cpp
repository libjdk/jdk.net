#include <jdk/net/ExtendedSocketOptions$ExtSocketOption.h>

#include <jdk/net/ExtendedSocketOptions.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SocketOption = ::java::net::SocketOption;
using $ExtendedSocketOptions = ::jdk::net::ExtendedSocketOptions;

namespace jdk {
	namespace net {

$FieldInfo _ExtendedSocketOptions$ExtSocketOption_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ExtendedSocketOptions$ExtSocketOption, name$)},
	{"type", "Ljava/lang/Class;", "Ljava/lang/Class<TT;>;", $PRIVATE | $FINAL, $field(ExtendedSocketOptions$ExtSocketOption, type$)},
	{}
};

$MethodInfo _ExtendedSocketOptions$ExtSocketOption_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/Class;)V", "(Ljava/lang/String;Ljava/lang/Class<TT;>;)V", 0, $method(static_cast<void(ExtendedSocketOptions$ExtSocketOption::*)($String*,$Class*)>(&ExtendedSocketOptions$ExtSocketOption::init$))},
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"type", "()Ljava/lang/Class;", "()Ljava/lang/Class<TT;>;", $PUBLIC},
	{}
};

$InnerClassInfo _ExtendedSocketOptions$ExtSocketOption_InnerClassesInfo_[] = {
	{"jdk.net.ExtendedSocketOptions$ExtSocketOption", "jdk.net.ExtendedSocketOptions", "ExtSocketOption", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ExtendedSocketOptions$ExtSocketOption_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.net.ExtendedSocketOptions$ExtSocketOption",
	"java.lang.Object",
	"java.net.SocketOption",
	_ExtendedSocketOptions$ExtSocketOption_FieldInfo_,
	_ExtendedSocketOptions$ExtSocketOption_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/net/SocketOption<TT;>;",
	nullptr,
	_ExtendedSocketOptions$ExtSocketOption_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.net.ExtendedSocketOptions"
};

$Object* allocate$ExtendedSocketOptions$ExtSocketOption($Class* clazz) {
	return $of($alloc(ExtendedSocketOptions$ExtSocketOption));
}

void ExtendedSocketOptions$ExtSocketOption::init$($String* name, $Class* type) {
	$set(this, name$, name);
	$set(this, type$, type);
}

$String* ExtendedSocketOptions$ExtSocketOption::name() {
	return this->name$;
}

$Class* ExtendedSocketOptions$ExtSocketOption::type() {
	return this->type$;
}

$String* ExtendedSocketOptions$ExtSocketOption::toString() {
	return this->name$;
}

ExtendedSocketOptions$ExtSocketOption::ExtendedSocketOptions$ExtSocketOption() {
}

$Class* ExtendedSocketOptions$ExtSocketOption::load$($String* name, bool initialize) {
	$loadClass(ExtendedSocketOptions$ExtSocketOption, name, initialize, &_ExtendedSocketOptions$ExtSocketOption_ClassInfo_, allocate$ExtendedSocketOptions$ExtSocketOption);
	return class$;
}

$Class* ExtendedSocketOptions$ExtSocketOption::class$ = nullptr;

	} // net
} // jdk