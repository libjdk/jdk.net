#include <Http1ChunkedTest$Responses.h>

#include <Http1ChunkedTest$Data.h>
#include <Http1ChunkedTest.h>
#include <java/lang/Enum.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef REQ0
#undef REQ0_RESPONSE_BODY
#undef REQ1
#undef REQ1_RESPONSE_BODY
#undef REQ2
#undef REQ2_RESPONSE_BODY
#undef REQ3
#undef REQ3_RESPONSE_BODY
#undef REQ4
#undef REQ4_RESPONSE_BODY
#undef REQ5
#undef REQ5_RESPONSE_BODY
#undef RESPONSE_HEADERS

using $Http1ChunkedTest = ::Http1ChunkedTest;
using $Http1ChunkedTest$Data = ::Http1ChunkedTest$Data;
using $Http1ChunkedTest$ResponsesArray = $Array<Http1ChunkedTest$Responses>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

$FieldInfo _Http1ChunkedTest$Responses_FieldInfo_[] = {
	{"REQ0", "LHttp1ChunkedTest$Responses;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Http1ChunkedTest$Responses, REQ0)},
	{"REQ1", "LHttp1ChunkedTest$Responses;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Http1ChunkedTest$Responses, REQ1)},
	{"REQ2", "LHttp1ChunkedTest$Responses;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Http1ChunkedTest$Responses, REQ2)},
	{"REQ3", "LHttp1ChunkedTest$Responses;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Http1ChunkedTest$Responses, REQ3)},
	{"REQ4", "LHttp1ChunkedTest$Responses;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Http1ChunkedTest$Responses, REQ4)},
	{"REQ5", "LHttp1ChunkedTest$Responses;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Http1ChunkedTest$Responses, REQ5)},
	{"$VALUES", "[LHttp1ChunkedTest$Responses;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Http1ChunkedTest$Responses, $VALUES)},
	{"headers", "Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(Http1ChunkedTest$Responses, headers)},
	{"body", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PUBLIC | $FINAL, $field(Http1ChunkedTest$Responses, body)},
	{"delay", "J", nullptr, $PUBLIC | $FINAL, $field(Http1ChunkedTest$Responses, delay)},
	{}
};

$MethodInfo _Http1ChunkedTest$Responses_MethodInfo_[] = {
	{"$values", "()[LHttp1ChunkedTest$Responses;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Http1ChunkedTest$ResponsesArray*(*)()>(&Http1ChunkedTest$Responses::$values))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/util/List;)V", "(Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;)V", $PRIVATE, $method(static_cast<void(Http1ChunkedTest$Responses::*)($String*,int32_t,$String*,$List*)>(&Http1ChunkedTest$Responses::init$))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/util/List;J)V", "(Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;J)V", $PRIVATE, $method(static_cast<void(Http1ChunkedTest$Responses::*)($String*,int32_t,$String*,$List*,int64_t)>(&Http1ChunkedTest$Responses::init$))},
	{"valueOf", "(Ljava/lang/String;)LHttp1ChunkedTest$Responses;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Http1ChunkedTest$Responses*(*)($String*)>(&Http1ChunkedTest$Responses::valueOf))},
	{"values", "()[LHttp1ChunkedTest$Responses;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Http1ChunkedTest$ResponsesArray*(*)()>(&Http1ChunkedTest$Responses::values))},
	{}
};

$InnerClassInfo _Http1ChunkedTest$Responses_InnerClassesInfo_[] = {
	{"Http1ChunkedTest$Responses", "Http1ChunkedTest", "Responses", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Http1ChunkedTest$Responses_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"Http1ChunkedTest$Responses",
	"java.lang.Enum",
	nullptr,
	_Http1ChunkedTest$Responses_FieldInfo_,
	_Http1ChunkedTest$Responses_MethodInfo_,
	"Ljava/lang/Enum<LHttp1ChunkedTest$Responses;>;",
	nullptr,
	_Http1ChunkedTest$Responses_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Http1ChunkedTest"
};

$Object* allocate$Http1ChunkedTest$Responses($Class* clazz) {
	return $of($alloc(Http1ChunkedTest$Responses));
}

Http1ChunkedTest$Responses* Http1ChunkedTest$Responses::REQ0 = nullptr;
Http1ChunkedTest$Responses* Http1ChunkedTest$Responses::REQ1 = nullptr;
Http1ChunkedTest$Responses* Http1ChunkedTest$Responses::REQ2 = nullptr;
Http1ChunkedTest$Responses* Http1ChunkedTest$Responses::REQ3 = nullptr;
Http1ChunkedTest$Responses* Http1ChunkedTest$Responses::REQ4 = nullptr;
Http1ChunkedTest$Responses* Http1ChunkedTest$Responses::REQ5 = nullptr;
$Http1ChunkedTest$ResponsesArray* Http1ChunkedTest$Responses::$VALUES = nullptr;

$Http1ChunkedTest$ResponsesArray* Http1ChunkedTest$Responses::$values() {
	$init(Http1ChunkedTest$Responses);
	return $new($Http1ChunkedTest$ResponsesArray, {
		Http1ChunkedTest$Responses::REQ0,
		Http1ChunkedTest$Responses::REQ1,
		Http1ChunkedTest$Responses::REQ2,
		Http1ChunkedTest$Responses::REQ3,
		Http1ChunkedTest$Responses::REQ4,
		Http1ChunkedTest$Responses::REQ5
	});
}

$Http1ChunkedTest$ResponsesArray* Http1ChunkedTest$Responses::values() {
	$init(Http1ChunkedTest$Responses);
	return $cast($Http1ChunkedTest$ResponsesArray, Http1ChunkedTest$Responses::$VALUES->clone());
}

Http1ChunkedTest$Responses* Http1ChunkedTest$Responses::valueOf($String* name) {
	$init(Http1ChunkedTest$Responses);
	return $cast(Http1ChunkedTest$Responses, $Enum::valueOf(Http1ChunkedTest$Responses::class$, name));
}

void Http1ChunkedTest$Responses::init$($String* $enum$name, int32_t $enum$ordinal, $String* headers, $List* body) {
	Http1ChunkedTest$Responses::init$($enum$name, $enum$ordinal, headers, body, 0);
}

void Http1ChunkedTest$Responses::init$($String* $enum$name, int32_t $enum$ordinal, $String* headers, $List* body, int64_t delay) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, headers, headers);
	$set(this, body, body);
	this->delay = delay;
}

void clinit$Http1ChunkedTest$Responses($Class* class$) {
	$init($Http1ChunkedTest$Data);
	$assignStatic(Http1ChunkedTest$Responses::REQ0, $new(Http1ChunkedTest$Responses, "REQ0"_s, 0, $Http1ChunkedTest$Data::RESPONSE_HEADERS, $Http1ChunkedTest$Data::REQ0_RESPONSE_BODY));
	$assignStatic(Http1ChunkedTest$Responses::REQ1, $new(Http1ChunkedTest$Responses, "REQ1"_s, 1, $Http1ChunkedTest$Data::RESPONSE_HEADERS, $Http1ChunkedTest$Data::REQ1_RESPONSE_BODY));
	$assignStatic(Http1ChunkedTest$Responses::REQ2, $new(Http1ChunkedTest$Responses, "REQ2"_s, 2, $Http1ChunkedTest$Data::RESPONSE_HEADERS, $Http1ChunkedTest$Data::REQ2_RESPONSE_BODY));
	$assignStatic(Http1ChunkedTest$Responses::REQ3, $new(Http1ChunkedTest$Responses, "REQ3"_s, 3, $Http1ChunkedTest$Data::RESPONSE_HEADERS, $Http1ChunkedTest$Data::REQ3_RESPONSE_BODY));
	$assignStatic(Http1ChunkedTest$Responses::REQ4, $new(Http1ChunkedTest$Responses, "REQ4"_s, 4, $Http1ChunkedTest$Data::RESPONSE_HEADERS, $Http1ChunkedTest$Data::REQ4_RESPONSE_BODY));
	$assignStatic(Http1ChunkedTest$Responses::REQ5, $new(Http1ChunkedTest$Responses, "REQ5"_s, 5, $Http1ChunkedTest$Data::RESPONSE_HEADERS, $Http1ChunkedTest$Data::REQ5_RESPONSE_BODY, 200));
	$assignStatic(Http1ChunkedTest$Responses::$VALUES, Http1ChunkedTest$Responses::$values());
}

Http1ChunkedTest$Responses::Http1ChunkedTest$Responses() {
}

$Class* Http1ChunkedTest$Responses::load$($String* name, bool initialize) {
	$loadClass(Http1ChunkedTest$Responses, name, initialize, &_Http1ChunkedTest$Responses_ClassInfo_, clinit$Http1ChunkedTest$Responses, allocate$Http1ChunkedTest$Responses);
	return class$;
}

$Class* Http1ChunkedTest$Responses::class$ = nullptr;