#include <org/reactivestreams/tck/flow/support/Optional$Some.h>

#include <org/reactivestreams/tck/flow/support/Optional.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Optional = ::org::reactivestreams::tck::flow::support::Optional;

namespace org {
	namespace reactivestreams {
		namespace tck {
			namespace flow {
				namespace support {

$FieldInfo _Optional$Some_FieldInfo_[] = {
	{"value", "Ljava/lang/Object;", "TT;", $PRIVATE | $FINAL, $field(Optional$Some, value)},
	{}
};

$MethodInfo _Optional$Some_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;)V", "(TT;)V", 0, $method(static_cast<void(Optional$Some::*)(Object$*)>(&Optional$Some::init$))},
	{"get", "()Ljava/lang/Object;", "()TT;", $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Optional$Some_InnerClassesInfo_[] = {
	{"org.reactivestreams.tck.flow.support.Optional$Some", "org.reactivestreams.tck.flow.support.Optional", "Some", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Optional$Some_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"org.reactivestreams.tck.flow.support.Optional$Some",
	"org.reactivestreams.tck.flow.support.Optional",
	nullptr,
	_Optional$Some_FieldInfo_,
	_Optional$Some_MethodInfo_,
	"<T:Ljava/lang/Object;>Lorg/reactivestreams/tck/flow/support/Optional<TT;>;",
	nullptr,
	_Optional$Some_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"org.reactivestreams.tck.flow.support.Optional"
};

$Object* allocate$Optional$Some($Class* clazz) {
	return $of($alloc(Optional$Some));
}

void Optional$Some::init$(Object$* value) {
	$Optional::init$();
	$set(this, value, value);
}

$Object* Optional$Some::get() {
	return $of(this->value);
}

bool Optional$Some::isEmpty() {
	return false;
}

$String* Optional$Some::toString() {
	return $String::format("Some(%s)"_s, $$new($ObjectArray, {this->value}));
}

Optional$Some::Optional$Some() {
}

$Class* Optional$Some::load$($String* name, bool initialize) {
	$loadClass(Optional$Some, name, initialize, &_Optional$Some_ClassInfo_, allocate$Optional$Some);
	return class$;
}

$Class* Optional$Some::class$ = nullptr;

				} // support
			} // flow
		} // tck
	} // reactivestreams
} // org