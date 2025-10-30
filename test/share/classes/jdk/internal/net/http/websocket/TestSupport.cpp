#include <jdk/internal/net/http/websocket/TestSupport.h>

#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractSequentialList.h>
#include <java/util/Arrays.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <java/util/Stack.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Predicate.h>
#include <java/util/regex/Pattern.h>
#include <jdk/internal/net/http/websocket/TestSupport$1.h>
#include <jdk/internal/net/http/websocket/TestSupport$2.h>
#include <jdk/internal/net/http/websocket/TestSupport$AssertionFailedException.h>
#include <jdk/internal/net/http/websocket/TestSupport$F.h>
#include <jdk/internal/net/http/websocket/TestSupport$F2.h>
#include <jdk/internal/net/http/websocket/TestSupport$F3.h>
#include <jdk/internal/net/http/websocket/TestSupport$F4.h>
#include <jdk/internal/net/http/websocket/TestSupport$F5.h>
#include <jdk/internal/net/http/websocket/TestSupport$ThrowingProcedure.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $AbstractList = ::java::util::AbstractList;
using $AbstractSequentialList = ::java::util::AbstractSequentialList;
using $Arrays = ::java::util::Arrays;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $Stack = ::java::util::Stack;
using $Consumer = ::java::util::function::Consumer;
using $Predicate = ::java::util::function::Predicate;
using $Pattern = ::java::util::regex::Pattern;
using $TestSupport$1 = ::jdk::internal::net::http::websocket::TestSupport$1;
using $TestSupport$2 = ::jdk::internal::net::http::websocket::TestSupport$2;
using $TestSupport$AssertionFailedException = ::jdk::internal::net::http::websocket::TestSupport$AssertionFailedException;
using $TestSupport$F = ::jdk::internal::net::http::websocket::TestSupport$F;
using $TestSupport$F2 = ::jdk::internal::net::http::websocket::TestSupport$F2;
using $TestSupport$F3 = ::jdk::internal::net::http::websocket::TestSupport$F3;
using $TestSupport$F4 = ::jdk::internal::net::http::websocket::TestSupport$F4;
using $TestSupport$F5 = ::jdk::internal::net::http::websocket::TestSupport$F5;
using $TestSupport$ThrowingProcedure = ::jdk::internal::net::http::websocket::TestSupport$ThrowingProcedure;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace websocket {

class TestSupport$$Lambda$lambda$cartesianIterator$0 : public $TestSupport$F {
	$class(TestSupport$$Lambda$lambda$cartesianIterator$0, $NO_CLASS_INIT, $TestSupport$F)
public:
	void init$($TestSupport$F2* f2) {
		$set(this, f2, f2);
	}
	virtual $Object* apply($ObjectArray* p) override {
		 return TestSupport::lambda$cartesianIterator$0(f2, p);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestSupport$$Lambda$lambda$cartesianIterator$0>());
	}
	$TestSupport$F2* f2 = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestSupport$$Lambda$lambda$cartesianIterator$0::fieldInfos[2] = {
	{"f2", "Ljdk/internal/net/http/websocket/TestSupport$F2;", nullptr, $PUBLIC, $field(TestSupport$$Lambda$lambda$cartesianIterator$0, f2)},
	{}
};
$MethodInfo TestSupport$$Lambda$lambda$cartesianIterator$0::methodInfos[3] = {
	{"<init>", "(Ljdk/internal/net/http/websocket/TestSupport$F2;)V", nullptr, $PUBLIC, $method(static_cast<void(TestSupport$$Lambda$lambda$cartesianIterator$0::*)($TestSupport$F2*)>(&TestSupport$$Lambda$lambda$cartesianIterator$0::init$))},
	{"apply", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestSupport$$Lambda$lambda$cartesianIterator$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.net.http.websocket.TestSupport$$Lambda$lambda$cartesianIterator$0",
	"java.lang.Object",
	"jdk.internal.net.http.websocket.TestSupport$F",
	fieldInfos,
	methodInfos
};
$Class* TestSupport$$Lambda$lambda$cartesianIterator$0::load$($String* name, bool initialize) {
	$loadClass(TestSupport$$Lambda$lambda$cartesianIterator$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestSupport$$Lambda$lambda$cartesianIterator$0::class$ = nullptr;

class TestSupport$$Lambda$lambda$cartesianIterator$1$1 : public $TestSupport$F {
	$class(TestSupport$$Lambda$lambda$cartesianIterator$1$1, $NO_CLASS_INIT, $TestSupport$F)
public:
	void init$($TestSupport$F3* f3) {
		$set(this, f3, f3);
	}
	virtual $Object* apply($ObjectArray* p) override {
		 return TestSupport::lambda$cartesianIterator$1(f3, p);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestSupport$$Lambda$lambda$cartesianIterator$1$1>());
	}
	$TestSupport$F3* f3 = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestSupport$$Lambda$lambda$cartesianIterator$1$1::fieldInfos[2] = {
	{"f3", "Ljdk/internal/net/http/websocket/TestSupport$F3;", nullptr, $PUBLIC, $field(TestSupport$$Lambda$lambda$cartesianIterator$1$1, f3)},
	{}
};
$MethodInfo TestSupport$$Lambda$lambda$cartesianIterator$1$1::methodInfos[3] = {
	{"<init>", "(Ljdk/internal/net/http/websocket/TestSupport$F3;)V", nullptr, $PUBLIC, $method(static_cast<void(TestSupport$$Lambda$lambda$cartesianIterator$1$1::*)($TestSupport$F3*)>(&TestSupport$$Lambda$lambda$cartesianIterator$1$1::init$))},
	{"apply", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestSupport$$Lambda$lambda$cartesianIterator$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.net.http.websocket.TestSupport$$Lambda$lambda$cartesianIterator$1$1",
	"java.lang.Object",
	"jdk.internal.net.http.websocket.TestSupport$F",
	fieldInfos,
	methodInfos
};
$Class* TestSupport$$Lambda$lambda$cartesianIterator$1$1::load$($String* name, bool initialize) {
	$loadClass(TestSupport$$Lambda$lambda$cartesianIterator$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestSupport$$Lambda$lambda$cartesianIterator$1$1::class$ = nullptr;

class TestSupport$$Lambda$lambda$cartesianIterator$2$2 : public $TestSupport$F {
	$class(TestSupport$$Lambda$lambda$cartesianIterator$2$2, $NO_CLASS_INIT, $TestSupport$F)
public:
	void init$($TestSupport$F4* f4) {
		$set(this, f4, f4);
	}
	virtual $Object* apply($ObjectArray* p) override {
		 return TestSupport::lambda$cartesianIterator$2(f4, p);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestSupport$$Lambda$lambda$cartesianIterator$2$2>());
	}
	$TestSupport$F4* f4 = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestSupport$$Lambda$lambda$cartesianIterator$2$2::fieldInfos[2] = {
	{"f4", "Ljdk/internal/net/http/websocket/TestSupport$F4;", nullptr, $PUBLIC, $field(TestSupport$$Lambda$lambda$cartesianIterator$2$2, f4)},
	{}
};
$MethodInfo TestSupport$$Lambda$lambda$cartesianIterator$2$2::methodInfos[3] = {
	{"<init>", "(Ljdk/internal/net/http/websocket/TestSupport$F4;)V", nullptr, $PUBLIC, $method(static_cast<void(TestSupport$$Lambda$lambda$cartesianIterator$2$2::*)($TestSupport$F4*)>(&TestSupport$$Lambda$lambda$cartesianIterator$2$2::init$))},
	{"apply", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestSupport$$Lambda$lambda$cartesianIterator$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.net.http.websocket.TestSupport$$Lambda$lambda$cartesianIterator$2$2",
	"java.lang.Object",
	"jdk.internal.net.http.websocket.TestSupport$F",
	fieldInfos,
	methodInfos
};
$Class* TestSupport$$Lambda$lambda$cartesianIterator$2$2::load$($String* name, bool initialize) {
	$loadClass(TestSupport$$Lambda$lambda$cartesianIterator$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestSupport$$Lambda$lambda$cartesianIterator$2$2::class$ = nullptr;

class TestSupport$$Lambda$lambda$cartesianIterator$3$3 : public $TestSupport$F {
	$class(TestSupport$$Lambda$lambda$cartesianIterator$3$3, $NO_CLASS_INIT, $TestSupport$F)
public:
	void init$($TestSupport$F5* f5) {
		$set(this, f5, f5);
	}
	virtual $Object* apply($ObjectArray* p) override {
		 return TestSupport::lambda$cartesianIterator$3(f5, p);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestSupport$$Lambda$lambda$cartesianIterator$3$3>());
	}
	$TestSupport$F5* f5 = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestSupport$$Lambda$lambda$cartesianIterator$3$3::fieldInfos[2] = {
	{"f5", "Ljdk/internal/net/http/websocket/TestSupport$F5;", nullptr, $PUBLIC, $field(TestSupport$$Lambda$lambda$cartesianIterator$3$3, f5)},
	{}
};
$MethodInfo TestSupport$$Lambda$lambda$cartesianIterator$3$3::methodInfos[3] = {
	{"<init>", "(Ljdk/internal/net/http/websocket/TestSupport$F5;)V", nullptr, $PUBLIC, $method(static_cast<void(TestSupport$$Lambda$lambda$cartesianIterator$3$3::*)($TestSupport$F5*)>(&TestSupport$$Lambda$lambda$cartesianIterator$3$3::init$))},
	{"apply", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestSupport$$Lambda$lambda$cartesianIterator$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.net.http.websocket.TestSupport$$Lambda$lambda$cartesianIterator$3$3",
	"java.lang.Object",
	"jdk.internal.net.http.websocket.TestSupport$F",
	fieldInfos,
	methodInfos
};
$Class* TestSupport$$Lambda$lambda$cartesianIterator$3$3::load$($String* name, bool initialize) {
	$loadClass(TestSupport$$Lambda$lambda$cartesianIterator$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestSupport$$Lambda$lambda$cartesianIterator$3$3::class$ = nullptr;

class TestSupport$$Lambda$lambda$forEachBufferPartition$4$4 : public $Consumer {
	$class(TestSupport$$Lambda$lambda$forEachBufferPartition$4$4, $NO_CLASS_INIT, $Consumer)
public:
	void init$($ByteBuffer* src, $Consumer* action) {
		$set(this, src, src);
		$set(this, action, action);
	}
	virtual void accept(Object$* lengths) override {
		TestSupport::lambda$forEachBufferPartition$4(src, action, $cast($Iterable, lengths));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestSupport$$Lambda$lambda$forEachBufferPartition$4$4>());
	}
	$ByteBuffer* src = nullptr;
	$Consumer* action = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestSupport$$Lambda$lambda$forEachBufferPartition$4$4::fieldInfos[3] = {
	{"src", "Ljava/nio/ByteBuffer;", nullptr, $PUBLIC, $field(TestSupport$$Lambda$lambda$forEachBufferPartition$4$4, src)},
	{"action", "Ljava/util/function/Consumer;", nullptr, $PUBLIC, $field(TestSupport$$Lambda$lambda$forEachBufferPartition$4$4, action)},
	{}
};
$MethodInfo TestSupport$$Lambda$lambda$forEachBufferPartition$4$4::methodInfos[3] = {
	{"<init>", "(Ljava/nio/ByteBuffer;Ljava/util/function/Consumer;)V", nullptr, $PUBLIC, $method(static_cast<void(TestSupport$$Lambda$lambda$forEachBufferPartition$4$4::*)($ByteBuffer*,$Consumer*)>(&TestSupport$$Lambda$lambda$forEachBufferPartition$4$4::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestSupport$$Lambda$lambda$forEachBufferPartition$4$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.net.http.websocket.TestSupport$$Lambda$lambda$forEachBufferPartition$4$4",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* TestSupport$$Lambda$lambda$forEachBufferPartition$4$4::load$($String* name, bool initialize) {
	$loadClass(TestSupport$$Lambda$lambda$forEachBufferPartition$4$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestSupport$$Lambda$lambda$forEachBufferPartition$4$4::class$ = nullptr;

class TestSupport$$Lambda$isInstance$5 : public $Predicate {
	$class(TestSupport$$Lambda$isInstance$5, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Class* inst) {
		$set(this, inst$, inst);
	}
	virtual bool test(Object$* arg0) override {
		 return $nc(inst$)->isInstance(arg0);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestSupport$$Lambda$isInstance$5>());
	}
	$Class* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestSupport$$Lambda$isInstance$5::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestSupport$$Lambda$isInstance$5, inst$)},
	{}
};
$MethodInfo TestSupport$$Lambda$isInstance$5::methodInfos[3] = {
	{"<init>", "(Ljava/lang/Class;)V", nullptr, $PUBLIC, $method(static_cast<void(TestSupport$$Lambda$isInstance$5::*)($Class*)>(&TestSupport$$Lambda$isInstance$5::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestSupport$$Lambda$isInstance$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.net.http.websocket.TestSupport$$Lambda$isInstance$5",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* TestSupport$$Lambda$isInstance$5::load$($String* name, bool initialize) {
	$loadClass(TestSupport$$Lambda$isInstance$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestSupport$$Lambda$isInstance$5::class$ = nullptr;

class TestSupport$$Lambda$lambda$assertThrows$5$6 : public $Predicate {
	$class(TestSupport$$Lambda$lambda$assertThrows$5$6, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Class* clazz, $String* messageRegex) {
		this->clazz = clazz;
		$set(this, messageRegex, messageRegex);
	}
	virtual bool test(Object$* e) override {
		 return TestSupport::lambda$assertThrows$5(clazz, messageRegex, $cast($Throwable, e));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestSupport$$Lambda$lambda$assertThrows$5$6>());
	}
	$Class* clazz = nullptr;
	$String* messageRegex = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestSupport$$Lambda$lambda$assertThrows$5$6::fieldInfos[3] = {
	{"clazz", "Ljava/lang/Class;", nullptr, $PUBLIC, $field(TestSupport$$Lambda$lambda$assertThrows$5$6, clazz)},
	{"messageRegex", "Ljava/lang/String;", nullptr, $PUBLIC, $field(TestSupport$$Lambda$lambda$assertThrows$5$6, messageRegex)},
	{}
};
$MethodInfo TestSupport$$Lambda$lambda$assertThrows$5$6::methodInfos[3] = {
	{"<init>", "(Ljava/lang/Class;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(TestSupport$$Lambda$lambda$assertThrows$5$6::*)($Class*,$String*)>(&TestSupport$$Lambda$lambda$assertThrows$5$6::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestSupport$$Lambda$lambda$assertThrows$5$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.net.http.websocket.TestSupport$$Lambda$lambda$assertThrows$5$6",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* TestSupport$$Lambda$lambda$assertThrows$5$6::load$($String* name, bool initialize) {
	$loadClass(TestSupport$$Lambda$lambda$assertThrows$5$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestSupport$$Lambda$lambda$assertThrows$5$6::class$ = nullptr;

$CompoundAttribute _TestSupport_MethodAnnotations_iteratorOf14[] = {
	{"Ljava/lang/SafeVarargs;", nullptr},
	{}
};

$MethodInfo _TestSupport_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(TestSupport::*)()>(&TestSupport::init$))},
	{"assertThrows", "(Ljava/lang/Class;Ljdk/internal/net/http/websocket/TestSupport$ThrowingProcedure;)Ljava/lang/Throwable;", "<T:Ljava/lang/Throwable;>(Ljava/lang/Class<+TT;>;Ljdk/internal/net/http/websocket/TestSupport$ThrowingProcedure;)TT;", $PUBLIC | $STATIC, $method(static_cast<$Throwable*(*)($Class*,$TestSupport$ThrowingProcedure*)>(&TestSupport::assertThrows))},
	{"assertThrows", "(Ljava/lang/Class;Ljava/lang/String;Ljdk/internal/net/http/websocket/TestSupport$ThrowingProcedure;)Ljava/lang/Throwable;", "<T:Ljava/lang/Throwable;>(Ljava/lang/Class<+TT;>;Ljava/lang/String;Ljdk/internal/net/http/websocket/TestSupport$ThrowingProcedure;)TT;", $STATIC, $method(static_cast<$Throwable*(*)($Class*,$String*,$TestSupport$ThrowingProcedure*)>(&TestSupport::assertThrows))},
	{"assertThrows", "(Ljava/util/function/Predicate;Ljdk/internal/net/http/websocket/TestSupport$ThrowingProcedure;)Ljava/lang/Throwable;", "(Ljava/util/function/Predicate<-Ljava/lang/Throwable;>;Ljdk/internal/net/http/websocket/TestSupport$ThrowingProcedure;)Ljava/lang/Throwable;", $STATIC, $method(static_cast<$Throwable*(*)($Predicate*,$TestSupport$ThrowingProcedure*)>(&TestSupport::assertThrows))},
	{"cartesianIterator", "(Ljava/util/List;Ljava/util/List;Ljdk/internal/net/http/websocket/TestSupport$F2;)Ljava/util/Iterator;", "<A:Ljava/lang/Object;B:Ljava/lang/Object;R:Ljava/lang/Object;>(Ljava/util/List<TA;>;Ljava/util/List<TB;>;Ljdk/internal/net/http/websocket/TestSupport$F2<TA;TB;TR;>;)Ljava/util/Iterator<TR;>;", $STATIC, $method(static_cast<$Iterator*(*)($List*,$List*,$TestSupport$F2*)>(&TestSupport::cartesianIterator))},
	{"cartesianIterator", "(Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljdk/internal/net/http/websocket/TestSupport$F3;)Ljava/util/Iterator;", "<A:Ljava/lang/Object;B:Ljava/lang/Object;C:Ljava/lang/Object;R:Ljava/lang/Object;>(Ljava/util/List<TA;>;Ljava/util/List<TB;>;Ljava/util/List<TC;>;Ljdk/internal/net/http/websocket/TestSupport$F3<TA;TB;TC;TR;>;)Ljava/util/Iterator<TR;>;", $STATIC, $method(static_cast<$Iterator*(*)($List*,$List*,$List*,$TestSupport$F3*)>(&TestSupport::cartesianIterator))},
	{"cartesianIterator", "(Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljdk/internal/net/http/websocket/TestSupport$F4;)Ljava/util/Iterator;", "<A:Ljava/lang/Object;B:Ljava/lang/Object;C:Ljava/lang/Object;D:Ljava/lang/Object;R:Ljava/lang/Object;>(Ljava/util/List<TA;>;Ljava/util/List<TB;>;Ljava/util/List<TC;>;Ljava/util/List<TD;>;Ljdk/internal/net/http/websocket/TestSupport$F4<TA;TB;TC;TD;TR;>;)Ljava/util/Iterator<TR;>;", $STATIC, $method(static_cast<$Iterator*(*)($List*,$List*,$List*,$List*,$TestSupport$F4*)>(&TestSupport::cartesianIterator))},
	{"cartesianIterator", "(Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljdk/internal/net/http/websocket/TestSupport$F5;)Ljava/util/Iterator;", "<A:Ljava/lang/Object;B:Ljava/lang/Object;C:Ljava/lang/Object;D:Ljava/lang/Object;E:Ljava/lang/Object;R:Ljava/lang/Object;>(Ljava/util/List<TA;>;Ljava/util/List<TB;>;Ljava/util/List<TC;>;Ljava/util/List<TD;>;Ljava/util/List<TE;>;Ljdk/internal/net/http/websocket/TestSupport$F5<TA;TB;TC;TD;TE;TR;>;)Ljava/util/Iterator<TR;>;", $STATIC, $method(static_cast<$Iterator*(*)($List*,$List*,$List*,$List*,$List*,$TestSupport$F5*)>(&TestSupport::cartesianIterator))},
	{"cartesianIterator", "(Ljava/util/List;Ljdk/internal/net/http/websocket/TestSupport$F;)Ljava/util/Iterator;", "<R:Ljava/lang/Object;>(Ljava/util/List<+Ljava/util/List<*>;>;Ljdk/internal/net/http/websocket/TestSupport$F<TR;>;)Ljava/util/Iterator<TR;>;", $STATIC, $method(static_cast<$Iterator*(*)($List*,$TestSupport$F*)>(&TestSupport::cartesianIterator))},
	{"forEachBufferPartition", "(Ljava/nio/ByteBuffer;Ljava/util/function/Consumer;)V", "(Ljava/nio/ByteBuffer;Ljava/util/function/Consumer<-Ljava/lang/Iterable<+Ljava/nio/ByteBuffer;>;>;)V", $STATIC, $method(static_cast<void(*)($ByteBuffer*,$Consumer*)>(&TestSupport::forEachBufferPartition))},
	{"forEachPartition", "(ILjava/util/function/Consumer;)V", "(ILjava/util/function/Consumer<-Ljava/lang/Iterable<Ljava/lang/Integer;>;>;)V", $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t,$Consumer*)>(&TestSupport::forEachPartition))},
	{"forEachPartition", "(ILjava/util/Stack;Ljava/util/function/Consumer;)V", "(ILjava/util/Stack<Ljava/lang/Integer;>;Ljava/util/function/Consumer<-Ljava/lang/Iterable<Ljava/lang/Integer;>;>;)V", $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t,$Stack*,$Consumer*)>(&TestSupport::forEachPartition))},
	{"forEachPermutation", "(ILjava/util/function/Consumer;)V", "(ILjava/util/function/Consumer<-[I>;)V", $STATIC, $method(static_cast<void(*)(int32_t,$Consumer*)>(&TestSupport::forEachPermutation))},
	{"fullCopy", "(Ljava/nio/ByteBuffer;)Ljava/nio/ByteBuffer;", nullptr, $STATIC, $method(static_cast<$ByteBuffer*(*)($ByteBuffer*)>(&TestSupport::fullCopy))},
	{"iteratorOf", "([Ljava/lang/Object;)Ljava/util/Iterator;", "<T:Ljava/lang/Object;>([TT;)Ljava/util/Iterator<TT;>;", $STATIC | $TRANSIENT, $method(static_cast<$Iterator*(*)($ObjectArray*)>(&TestSupport::iteratorOf)), nullptr, nullptr, _TestSupport_MethodAnnotations_iteratorOf14},
	{"iteratorOf1", "(Ljava/lang/Object;)Ljava/util/Iterator;", "<T:Ljava/lang/Object;>(TT;)Ljava/util/Iterator<TT;>;", $STATIC, $method(static_cast<$Iterator*(*)(Object$*)>(&TestSupport::iteratorOf1))},
	{"lambda$assertThrows$5", "(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Throwable;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Class*,$String*,$Throwable*)>(&TestSupport::lambda$assertThrows$5))},
	{"lambda$cartesianIterator$0", "(Ljdk/internal/net/http/websocket/TestSupport$F2;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($TestSupport$F2*,$ObjectArray*)>(&TestSupport::lambda$cartesianIterator$0))},
	{"lambda$cartesianIterator$1", "(Ljdk/internal/net/http/websocket/TestSupport$F3;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($TestSupport$F3*,$ObjectArray*)>(&TestSupport::lambda$cartesianIterator$1))},
	{"lambda$cartesianIterator$2", "(Ljdk/internal/net/http/websocket/TestSupport$F4;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($TestSupport$F4*,$ObjectArray*)>(&TestSupport::lambda$cartesianIterator$2))},
	{"lambda$cartesianIterator$3", "(Ljdk/internal/net/http/websocket/TestSupport$F5;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($TestSupport$F5*,$ObjectArray*)>(&TestSupport::lambda$cartesianIterator$3))},
	{"lambda$forEachBufferPartition$4", "(Ljava/nio/ByteBuffer;Ljava/util/function/Consumer;Ljava/lang/Iterable;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($ByteBuffer*,$Consumer*,$Iterable*)>(&TestSupport::lambda$forEachBufferPartition$4))},
	{"limit", "(ILjava/util/Iterator;)Ljava/util/Iterator;", "<T:Ljava/lang/Object;>(ILjava/util/Iterator<+TT;>;)Ljava/util/Iterator<TT;>;", $STATIC, $method(static_cast<$Iterator*(*)(int32_t,$Iterator*)>(&TestSupport::limit))},
	{"permutations", "(I[ILjava/util/function/Consumer;)V", "(I[ILjava/util/function/Consumer<-[I>;)V", $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t,$ints*,$Consumer*)>(&TestSupport::permutations))},
	{"swap", "([III)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ints*,int32_t,int32_t)>(&TestSupport::swap))},
	{}
};

$InnerClassInfo _TestSupport_InnerClassesInfo_[] = {
	{"jdk.internal.net.http.websocket.TestSupport$AssertionFailedException", "jdk.internal.net.http.websocket.TestSupport", "AssertionFailedException", $STATIC | $FINAL},
	{"jdk.internal.net.http.websocket.TestSupport$ThrowingProcedure", "jdk.internal.net.http.websocket.TestSupport", "ThrowingProcedure", $STATIC | $INTERFACE | $ABSTRACT},
	{"jdk.internal.net.http.websocket.TestSupport$F", "jdk.internal.net.http.websocket.TestSupport", "F", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"jdk.internal.net.http.websocket.TestSupport$F5", "jdk.internal.net.http.websocket.TestSupport", "F5", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"jdk.internal.net.http.websocket.TestSupport$F4", "jdk.internal.net.http.websocket.TestSupport", "F4", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"jdk.internal.net.http.websocket.TestSupport$F3", "jdk.internal.net.http.websocket.TestSupport", "F3", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"jdk.internal.net.http.websocket.TestSupport$F2", "jdk.internal.net.http.websocket.TestSupport", "F2", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"jdk.internal.net.http.websocket.TestSupport$F1", "jdk.internal.net.http.websocket.TestSupport", "F1", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"jdk.internal.net.http.websocket.TestSupport$2", nullptr, nullptr, 0},
	{"jdk.internal.net.http.websocket.TestSupport$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestSupport_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.net.http.websocket.TestSupport",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestSupport_MethodInfo_,
	nullptr,
	nullptr,
	_TestSupport_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.internal.net.http.websocket.TestSupport$AssertionFailedException,jdk.internal.net.http.websocket.TestSupport$ThrowingProcedure,jdk.internal.net.http.websocket.TestSupport$F,jdk.internal.net.http.websocket.TestSupport$F5,jdk.internal.net.http.websocket.TestSupport$F4,jdk.internal.net.http.websocket.TestSupport$F3,jdk.internal.net.http.websocket.TestSupport$F2,jdk.internal.net.http.websocket.TestSupport$F1,jdk.internal.net.http.websocket.TestSupport$2,jdk.internal.net.http.websocket.TestSupport$1"
};

$Object* allocate$TestSupport($Class* clazz) {
	return $of($alloc(TestSupport));
}

void TestSupport::init$() {
}

$Iterator* TestSupport::cartesianIterator($List* a, $List* b, $TestSupport$F2* f2) {
	$useLocalCurrentObjectStackCache();
	$var($TestSupport$F, t, static_cast<$TestSupport$F*>($new(TestSupport$$Lambda$lambda$cartesianIterator$0, f2)));
	return cartesianIterator($($List::of(a, b)), t);
}

$Iterator* TestSupport::cartesianIterator($List* a, $List* b, $List* c, $TestSupport$F3* f3) {
	$useLocalCurrentObjectStackCache();
	$var($TestSupport$F, t, static_cast<$TestSupport$F*>($new(TestSupport$$Lambda$lambda$cartesianIterator$1$1, f3)));
	return cartesianIterator($($List::of(a, b, c)), t);
}

$Iterator* TestSupport::cartesianIterator($List* a, $List* b, $List* c, $List* d, $TestSupport$F4* f4) {
	$useLocalCurrentObjectStackCache();
	$var($TestSupport$F, t, static_cast<$TestSupport$F*>($new(TestSupport$$Lambda$lambda$cartesianIterator$2$2, f4)));
	return cartesianIterator($($List::of(a, b, c, d)), t);
}

$Iterator* TestSupport::cartesianIterator($List* a, $List* b, $List* c, $List* d, $List* e, $TestSupport$F5* f5) {
	$useLocalCurrentObjectStackCache();
	$var($TestSupport$F, t, static_cast<$TestSupport$F*>($new(TestSupport$$Lambda$lambda$cartesianIterator$3$3, f5)));
	return cartesianIterator($($List::of(a, b, c, d, e)), t);
}

$Iterator* TestSupport::cartesianIterator($List* params, $TestSupport$F* function) {
	$useLocalCurrentObjectStackCache();
	if ($nc(params)->isEmpty()) {
		return $Collections::emptyIterator();
	}
	{
		$var($Iterator, i$, $nc(params)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($List, l, $cast($List, i$->next()));
			{
				if ($nc(l)->isEmpty()) {
					return $Collections::emptyIterator();
				}
			}
		}
	}
	return $new($TestSupport$1, params, function);
}

$Iterator* TestSupport::iteratorOf1(Object$* element) {
	return $nc($($List::of(element)))->iterator();
}

$Iterator* TestSupport::iteratorOf($ObjectArray* elements) {
	return $nc($($List::of(elements)))->iterator();
}

$Iterator* TestSupport::limit(int32_t maxElements, $Iterator* elements) {
	return $new($TestSupport$2, maxElements, elements);
}

$ByteBuffer* TestSupport::fullCopy($ByteBuffer* src) {
	$useLocalCurrentObjectStackCache();
	$var($ByteBuffer, copy, $ByteBuffer::allocate($nc(src)->capacity()));
	int32_t p = $nc(src)->position();
	int32_t l = src->limit();
	src->clear();
	$nc($($nc($($nc(copy)->put(src)))->position(p)))->limit(l);
	$nc($(src->position(p)))->limit(l);
	return copy;
}

void TestSupport::forEachBufferPartition($ByteBuffer* src, $Consumer* action) {
	int32_t var$0 = $nc(src)->remaining();
	forEachPartition(var$0, static_cast<$Consumer*>($$new(TestSupport$$Lambda$lambda$forEachBufferPartition$4$4, src, action)));
}

void TestSupport::forEachPartition(int32_t n, $Consumer* action) {
	forEachPartition(n, $$new($Stack), action);
}

void TestSupport::forEachPartition(int32_t n, $Stack* path, $Consumer* action) {
	$useLocalCurrentObjectStackCache();
	if (n == 0) {
		$nc(action)->accept(path);
	} else {
		for (int32_t i = 1; i <= n; ++i) {
			$nc(path)->push($($Integer::valueOf(i)));
			forEachPartition(n - i, path, action);
			path->pop();
		}
	}
}

void TestSupport::forEachPermutation(int32_t n, $Consumer* c) {
	$var($ints, a, $new($ints, n));
	for (int32_t i = 0; i < n; ++i) {
		a->set(i, i);
	}
	permutations(0, a, c);
}

void TestSupport::permutations(int32_t i, $ints* a, $Consumer* c) {
	if (i == $nc(a)->length) {
		$nc(c)->accept($($Arrays::copyOf(a, a->length)));
		return;
	}
	for (int32_t j = i; j < $nc(a)->length; ++j) {
		swap(a, i, j);
		permutations(i + 1, a, c);
		swap(a, i, j);
	}
}

void TestSupport::swap($ints* a, int32_t i, int32_t j) {
	int32_t x = $nc(a)->get(i);
	a->set(i, a->get(j));
	a->set(j, x);
}

$Throwable* TestSupport::assertThrows($Class* clazz, $TestSupport$ThrowingProcedure* code) {
	$useLocalCurrentObjectStackCache();
	$var($Throwable, t, assertThrows(static_cast<$Predicate*>($$new(TestSupport$$Lambda$isInstance$5, static_cast<$Class*>($nc(clazz)))), code));
	return t;
}

$Throwable* TestSupport::assertThrows($Class* clazz, $String* messageRegex, $TestSupport$ThrowingProcedure* code) {
	$Objects::requireNonNull($of(messageRegex), "messagePattern"_s);
	$var($Predicate, p, static_cast<$Predicate*>($new(TestSupport$$Lambda$lambda$assertThrows$5$6, clazz, messageRegex)));
	return assertThrows(p, code);
}

$Throwable* TestSupport::assertThrows($Predicate* predicate, $TestSupport$ThrowingProcedure* code) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull($of(predicate), "predicate"_s);
	$Objects::requireNonNull($of(code), "code"_s);
	$var($Throwable, caught, nullptr);
	try {
		$nc(code)->run();
	} catch ($Throwable& t) {
		$assign(caught, t);
	}
	if (caught == nullptr) {
		$throwNew($TestSupport$AssertionFailedException, "No exception was thrown"_s);
	}
	if ($nc(predicate)->test(caught)) {
		$nc($System::out)->println($$str({"Got expected exception: "_s, caught}));
		return caught;
	}
	$throwNew($TestSupport$AssertionFailedException, "Caught exception didn\'t match the predicate"_s, caught);
}

bool TestSupport::lambda$assertThrows$5($Class* clazz, $String* messageRegex, $Throwable* e) {
	bool var$0 = $nc(clazz)->isInstance(e);
	return var$0 && $Pattern::matches(messageRegex, $($nc(e)->getMessage()));
}

void TestSupport::lambda$forEachBufferPartition$4($ByteBuffer* src, $Consumer* action, $Iterable* lengths) {
	$useLocalCurrentObjectStackCache();
	int32_t end = $nc(src)->position();
	$var($List, buffers, $new($LinkedList));
	{
		$var($Iterator, i$, $nc(lengths)->iterator());
		for (; $nc(i$)->hasNext();) {
			int32_t len = $nc(($cast($Integer, $(i$->next()))))->intValue();
			{
				$var($ByteBuffer, d, src->duplicate());
				$nc(d)->position(end);
				d->limit(end + len);
				end += len;
				buffers->add(d);
			}
		}
	}
	$nc(action)->accept(buffers);
}

$Object* TestSupport::lambda$cartesianIterator$3($TestSupport$F5* f5, $ObjectArray* p) {
	return $of($nc(f5)->apply($nc(p)->get(0), p->get(1), p->get(2), p->get(3), p->get(4)));
}

$Object* TestSupport::lambda$cartesianIterator$2($TestSupport$F4* f4, $ObjectArray* p) {
	return $of($nc(f4)->apply($nc(p)->get(0), p->get(1), p->get(2), p->get(3)));
}

$Object* TestSupport::lambda$cartesianIterator$1($TestSupport$F3* f3, $ObjectArray* p) {
	return $of($nc(f3)->apply($nc(p)->get(0), p->get(1), p->get(2)));
}

$Object* TestSupport::lambda$cartesianIterator$0($TestSupport$F2* f2, $ObjectArray* p) {
	return $of($nc(f2)->apply($nc(p)->get(0), p->get(1)));
}

TestSupport::TestSupport() {
}

$Class* TestSupport::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TestSupport$$Lambda$lambda$cartesianIterator$0::classInfo$.name)) {
			return TestSupport$$Lambda$lambda$cartesianIterator$0::load$(name, initialize);
		}
		if (name->equals(TestSupport$$Lambda$lambda$cartesianIterator$1$1::classInfo$.name)) {
			return TestSupport$$Lambda$lambda$cartesianIterator$1$1::load$(name, initialize);
		}
		if (name->equals(TestSupport$$Lambda$lambda$cartesianIterator$2$2::classInfo$.name)) {
			return TestSupport$$Lambda$lambda$cartesianIterator$2$2::load$(name, initialize);
		}
		if (name->equals(TestSupport$$Lambda$lambda$cartesianIterator$3$3::classInfo$.name)) {
			return TestSupport$$Lambda$lambda$cartesianIterator$3$3::load$(name, initialize);
		}
		if (name->equals(TestSupport$$Lambda$lambda$forEachBufferPartition$4$4::classInfo$.name)) {
			return TestSupport$$Lambda$lambda$forEachBufferPartition$4$4::load$(name, initialize);
		}
		if (name->equals(TestSupport$$Lambda$isInstance$5::classInfo$.name)) {
			return TestSupport$$Lambda$isInstance$5::load$(name, initialize);
		}
		if (name->equals(TestSupport$$Lambda$lambda$assertThrows$5$6::classInfo$.name)) {
			return TestSupport$$Lambda$lambda$assertThrows$5$6::load$(name, initialize);
		}
	}
	$loadClass(TestSupport, name, initialize, &_TestSupport_ClassInfo_, allocate$TestSupport);
	return class$;
}

$Class* TestSupport::class$ = nullptr;

				} // websocket
			} // http
		} // net
	} // internal
} // jdk