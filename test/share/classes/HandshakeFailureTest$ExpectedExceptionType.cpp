#include <HandshakeFailureTest$ExpectedExceptionType.h>

#include <HandshakeFailureTest.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef HANDSHAKE_FAILURE
#undef WSAECONNABORTED

using $HandshakeFailureTest = ::HandshakeFailureTest;
using $HandshakeFailureTest$ExpectedExceptionTypeArray = $Array<HandshakeFailureTest$ExpectedExceptionType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _HandshakeFailureTest$ExpectedExceptionType_FieldInfo_[] = {
	{"HANDSHAKE_FAILURE", "LHandshakeFailureTest$ExpectedExceptionType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(HandshakeFailureTest$ExpectedExceptionType, HANDSHAKE_FAILURE)},
	{"WSAECONNABORTED", "LHandshakeFailureTest$ExpectedExceptionType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(HandshakeFailureTest$ExpectedExceptionType, WSAECONNABORTED)},
	{"$VALUES", "[LHandshakeFailureTest$ExpectedExceptionType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(HandshakeFailureTest$ExpectedExceptionType, $VALUES)},
	{}
};

$MethodInfo _HandshakeFailureTest$ExpectedExceptionType_MethodInfo_[] = {
	{"$values", "()[LHandshakeFailureTest$ExpectedExceptionType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$HandshakeFailureTest$ExpectedExceptionTypeArray*(*)()>(&HandshakeFailureTest$ExpectedExceptionType::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(HandshakeFailureTest$ExpectedExceptionType::*)($String*,int32_t)>(&HandshakeFailureTest$ExpectedExceptionType::init$))},
	{"valueOf", "(Ljava/lang/String;)LHandshakeFailureTest$ExpectedExceptionType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<HandshakeFailureTest$ExpectedExceptionType*(*)($String*)>(&HandshakeFailureTest$ExpectedExceptionType::valueOf))},
	{"values", "()[LHandshakeFailureTest$ExpectedExceptionType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$HandshakeFailureTest$ExpectedExceptionTypeArray*(*)()>(&HandshakeFailureTest$ExpectedExceptionType::values))},
	{}
};

$InnerClassInfo _HandshakeFailureTest$ExpectedExceptionType_InnerClassesInfo_[] = {
	{"HandshakeFailureTest$ExpectedExceptionType", "HandshakeFailureTest", "ExpectedExceptionType", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _HandshakeFailureTest$ExpectedExceptionType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"HandshakeFailureTest$ExpectedExceptionType",
	"java.lang.Enum",
	nullptr,
	_HandshakeFailureTest$ExpectedExceptionType_FieldInfo_,
	_HandshakeFailureTest$ExpectedExceptionType_MethodInfo_,
	"Ljava/lang/Enum<LHandshakeFailureTest$ExpectedExceptionType;>;",
	nullptr,
	_HandshakeFailureTest$ExpectedExceptionType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HandshakeFailureTest"
};

$Object* allocate$HandshakeFailureTest$ExpectedExceptionType($Class* clazz) {
	return $of($alloc(HandshakeFailureTest$ExpectedExceptionType));
}

HandshakeFailureTest$ExpectedExceptionType* HandshakeFailureTest$ExpectedExceptionType::HANDSHAKE_FAILURE = nullptr;
HandshakeFailureTest$ExpectedExceptionType* HandshakeFailureTest$ExpectedExceptionType::WSAECONNABORTED = nullptr;
$HandshakeFailureTest$ExpectedExceptionTypeArray* HandshakeFailureTest$ExpectedExceptionType::$VALUES = nullptr;

$HandshakeFailureTest$ExpectedExceptionTypeArray* HandshakeFailureTest$ExpectedExceptionType::$values() {
	$init(HandshakeFailureTest$ExpectedExceptionType);
	return $new($HandshakeFailureTest$ExpectedExceptionTypeArray, {
		HandshakeFailureTest$ExpectedExceptionType::HANDSHAKE_FAILURE,
		HandshakeFailureTest$ExpectedExceptionType::WSAECONNABORTED
	});
}

$HandshakeFailureTest$ExpectedExceptionTypeArray* HandshakeFailureTest$ExpectedExceptionType::values() {
	$init(HandshakeFailureTest$ExpectedExceptionType);
	return $cast($HandshakeFailureTest$ExpectedExceptionTypeArray, HandshakeFailureTest$ExpectedExceptionType::$VALUES->clone());
}

HandshakeFailureTest$ExpectedExceptionType* HandshakeFailureTest$ExpectedExceptionType::valueOf($String* name) {
	$init(HandshakeFailureTest$ExpectedExceptionType);
	return $cast(HandshakeFailureTest$ExpectedExceptionType, $Enum::valueOf(HandshakeFailureTest$ExpectedExceptionType::class$, name));
}

void HandshakeFailureTest$ExpectedExceptionType::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$HandshakeFailureTest$ExpectedExceptionType($Class* class$) {
	$assignStatic(HandshakeFailureTest$ExpectedExceptionType::HANDSHAKE_FAILURE, $new(HandshakeFailureTest$ExpectedExceptionType, "HANDSHAKE_FAILURE"_s, 0));
	$assignStatic(HandshakeFailureTest$ExpectedExceptionType::WSAECONNABORTED, $new(HandshakeFailureTest$ExpectedExceptionType, "WSAECONNABORTED"_s, 1));
	$assignStatic(HandshakeFailureTest$ExpectedExceptionType::$VALUES, HandshakeFailureTest$ExpectedExceptionType::$values());
}

HandshakeFailureTest$ExpectedExceptionType::HandshakeFailureTest$ExpectedExceptionType() {
}

$Class* HandshakeFailureTest$ExpectedExceptionType::load$($String* name, bool initialize) {
	$loadClass(HandshakeFailureTest$ExpectedExceptionType, name, initialize, &_HandshakeFailureTest$ExpectedExceptionType_ClassInfo_, clinit$HandshakeFailureTest$ExpectedExceptionType, allocate$HandshakeFailureTest$ExpectedExceptionType);
	return class$;
}

$Class* HandshakeFailureTest$ExpectedExceptionType::class$ = nullptr;