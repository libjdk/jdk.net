#include <org/reactivestreams/tck/flow/support/Optional.h>

#include <org/reactivestreams/tck/flow/support/Optional$1.h>
#include <org/reactivestreams/tck/flow/support/Optional$Some.h>
#include <jcpp.h>

#undef NONE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Optional$1 = ::org::reactivestreams::tck::flow::support::Optional$1;
using $Optional$Some = ::org::reactivestreams::tck::flow::support::Optional$Some;

namespace org {
	namespace reactivestreams {
		namespace tck {
			namespace flow {
				namespace support {

$FieldInfo _Optional_FieldInfo_[] = {
	{"NONE", "Lorg/reactivestreams/tck/flow/support/Optional;", "Lorg/reactivestreams/tck/flow/support/Optional<Ljava/lang/Object;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Optional, NONE)},
	{}
};

$MethodInfo _Optional_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Optional::*)()>(&Optional::init$))},
	{"empty", "()Lorg/reactivestreams/tck/flow/support/Optional;", "<T:Ljava/lang/Object;>()Lorg/reactivestreams/tck/flow/support/Optional<TT;>;", $PUBLIC | $STATIC, $method(static_cast<Optional*(*)()>(&Optional::empty))},
	{"get", "()Ljava/lang/Object;", "()TT;", $PUBLIC | $ABSTRACT},
	{"isDefined", "()Z", nullptr, $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"of", "(Ljava/lang/Object;)Lorg/reactivestreams/tck/flow/support/Optional;", "<T:Ljava/lang/Object;>(TT;)Lorg/reactivestreams/tck/flow/support/Optional<TT;>;", $PUBLIC | $STATIC, $method(static_cast<Optional*(*)(Object$*)>(&Optional::of))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Optional_InnerClassesInfo_[] = {
	{"org.reactivestreams.tck.flow.support.Optional$Some", "org.reactivestreams.tck.flow.support.Optional", "Some", $PUBLIC | $STATIC},
	{"org.reactivestreams.tck.flow.support.Optional$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Optional_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"org.reactivestreams.tck.flow.support.Optional",
	"java.lang.Object",
	nullptr,
	_Optional_FieldInfo_,
	_Optional_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_Optional_InnerClassesInfo_,
	nullptr,
	nullptr,
	"org.reactivestreams.tck.flow.support.Optional$Some,org.reactivestreams.tck.flow.support.Optional$1"
};

$Object* allocate$Optional($Class* clazz) {
	return $of($alloc(Optional));
}

Optional* Optional::NONE = nullptr;

void Optional::init$() {
}

Optional* Optional::empty() {
	$init(Optional);
	return Optional::NONE;
}

Optional* Optional::of(Object$* it) {
	$init(Optional);
	if (it == nullptr) {
		return Optional::NONE;
	} else {
		return $new($Optional$Some, it);
	}
}

bool Optional::isDefined() {
	return !isEmpty();
}

$String* Optional::toString() {
	return "None"_s;
}

void clinit$Optional($Class* class$) {
	$assignStatic(Optional::NONE, $new($Optional$1));
}

Optional::Optional() {
}

$Class* Optional::load$($String* name, bool initialize) {
	$loadClass(Optional, name, initialize, &_Optional_ClassInfo_, clinit$Optional, allocate$Optional);
	return class$;
}

$Class* Optional::class$ = nullptr;

				} // support
			} // flow
		} // tck
	} // reactivestreams
} // org