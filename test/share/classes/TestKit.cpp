#include <TestKit.h>

#include <TestKit$ThrowingFunction.h>
#include <TestKit$ThrowingProcedure.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractMap$SimpleImmutableEntry.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Comparator.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/ListIterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <java/util/function/BiFunction.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/function/Supplier.h>
#include <java/util/function/UnaryOperator.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

using $TestKit$ThrowingFunction = ::TestKit$ThrowingFunction;
using $TestKit$ThrowingProcedure = ::TestKit$ThrowingProcedure;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractMap$SimpleImmutableEntry = ::java::util::AbstractMap$SimpleImmutableEntry;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Comparator = ::java::util::Comparator;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $ListIterator = ::java::util::ListIterator;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;
using $BiFunction = ::java::util::function::BiFunction;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Supplier = ::java::util::function::Supplier;
using $UnaryOperator = ::java::util::function::UnaryOperator;
using $Pattern = ::java::util::regex::Pattern;

class TestKit$$Lambda$lambda$assertNotThrows$0 : public $TestKit$ThrowingFunction {
	$class(TestKit$$Lambda$lambda$assertNotThrows$0, $NO_CLASS_INIT, $TestKit$ThrowingFunction)
public:
	void init$($TestKit$ThrowingProcedure* code) {
		$set(this, code, code);
	}
	virtual $Object* run() override {
		 return TestKit::lambda$assertNotThrows$0(code);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestKit$$Lambda$lambda$assertNotThrows$0>());
	}
	$TestKit$ThrowingProcedure* code = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestKit$$Lambda$lambda$assertNotThrows$0::fieldInfos[2] = {
	{"code", "LTestKit$ThrowingProcedure;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertNotThrows$0, code)},
	{}
};
$MethodInfo TestKit$$Lambda$lambda$assertNotThrows$0::methodInfos[3] = {
	{"<init>", "(LTestKit$ThrowingProcedure;)V", nullptr, $PUBLIC, $method(static_cast<void(TestKit$$Lambda$lambda$assertNotThrows$0::*)($TestKit$ThrowingProcedure*)>(&TestKit$$Lambda$lambda$assertNotThrows$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestKit$$Lambda$lambda$assertNotThrows$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestKit$$Lambda$lambda$assertNotThrows$0",
	"java.lang.Object",
	"TestKit$ThrowingFunction",
	fieldInfos,
	methodInfos
};
$Class* TestKit$$Lambda$lambda$assertNotThrows$0::load$($String* name, bool initialize) {
	$loadClass(TestKit$$Lambda$lambda$assertNotThrows$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertNotThrows$0::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableCollection$1$1 : public $Supplier {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableCollection$1$1, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return TestKit::lambda$assertUnmodifiableCollection$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestKit$$Lambda$lambda$assertUnmodifiableCollection$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestKit$$Lambda$lambda$assertUnmodifiableCollection$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestKit$$Lambda$lambda$assertUnmodifiableCollection$1$1::*)()>(&TestKit$$Lambda$lambda$assertUnmodifiableCollection$1$1::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestKit$$Lambda$lambda$assertUnmodifiableCollection$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestKit$$Lambda$lambda$assertUnmodifiableCollection$1$1",
	"java.lang.Object",
	"java.util.function.Supplier",
	nullptr,
	methodInfos
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableCollection$1$1::load$($String* name, bool initialize) {
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableCollection$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableCollection$1$1::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableCollection$2$2 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableCollection$2$2, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($Collection* collection, Object$* e) {
		$set(this, collection, collection);
		$set(this, e, e);
	}
	virtual void run() override {
		TestKit::lambda$assertUnmodifiableCollection$2(collection, e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestKit$$Lambda$lambda$assertUnmodifiableCollection$2$2>());
	}
	$Collection* collection = nullptr;
	$Object* e = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestKit$$Lambda$lambda$assertUnmodifiableCollection$2$2::fieldInfos[3] = {
	{"collection", "Ljava/util/Collection;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableCollection$2$2, collection)},
	{"e", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableCollection$2$2, e)},
	{}
};
$MethodInfo TestKit$$Lambda$lambda$assertUnmodifiableCollection$2$2::methodInfos[3] = {
	{"<init>", "(Ljava/util/Collection;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(TestKit$$Lambda$lambda$assertUnmodifiableCollection$2$2::*)($Collection*,Object$*)>(&TestKit$$Lambda$lambda$assertUnmodifiableCollection$2$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestKit$$Lambda$lambda$assertUnmodifiableCollection$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestKit$$Lambda$lambda$assertUnmodifiableCollection$2$2",
	"java.lang.Object",
	"TestKit$ThrowingProcedure",
	fieldInfos,
	methodInfos
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableCollection$2$2::load$($String* name, bool initialize) {
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableCollection$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableCollection$2$2::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableCollection$3$3 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableCollection$3$3, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($Collection* collection, Object$* e) {
		$set(this, collection, collection);
		$set(this, e, e);
	}
	virtual void run() override {
		TestKit::lambda$assertUnmodifiableCollection$3(collection, e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestKit$$Lambda$lambda$assertUnmodifiableCollection$3$3>());
	}
	$Collection* collection = nullptr;
	$Object* e = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestKit$$Lambda$lambda$assertUnmodifiableCollection$3$3::fieldInfos[3] = {
	{"collection", "Ljava/util/Collection;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableCollection$3$3, collection)},
	{"e", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableCollection$3$3, e)},
	{}
};
$MethodInfo TestKit$$Lambda$lambda$assertUnmodifiableCollection$3$3::methodInfos[3] = {
	{"<init>", "(Ljava/util/Collection;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(TestKit$$Lambda$lambda$assertUnmodifiableCollection$3$3::*)($Collection*,Object$*)>(&TestKit$$Lambda$lambda$assertUnmodifiableCollection$3$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestKit$$Lambda$lambda$assertUnmodifiableCollection$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestKit$$Lambda$lambda$assertUnmodifiableCollection$3$3",
	"java.lang.Object",
	"TestKit$ThrowingProcedure",
	fieldInfos,
	methodInfos
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableCollection$3$3::load$($String* name, bool initialize) {
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableCollection$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableCollection$3$3::class$ = nullptr;

class TestKit$$Lambda$remove$4 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$remove$4, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($Iterator* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->remove();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestKit$$Lambda$remove$4>());
	}
	$Iterator* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestKit$$Lambda$remove$4::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$remove$4, inst$)},
	{}
};
$MethodInfo TestKit$$Lambda$remove$4::methodInfos[3] = {
	{"<init>", "(Ljava/util/Iterator;)V", nullptr, $PUBLIC, $method(static_cast<void(TestKit$$Lambda$remove$4::*)($Iterator*)>(&TestKit$$Lambda$remove$4::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestKit$$Lambda$remove$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestKit$$Lambda$remove$4",
	"java.lang.Object",
	"TestKit$ThrowingProcedure",
	fieldInfos,
	methodInfos
};
$Class* TestKit$$Lambda$remove$4::load$($String* name, bool initialize) {
	$loadClass(TestKit$$Lambda$remove$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestKit$$Lambda$remove$4::class$ = nullptr;

class TestKit$$Lambda$clear$5 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$clear$5, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($Collection* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->clear();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestKit$$Lambda$clear$5>());
	}
	$Collection* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestKit$$Lambda$clear$5::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$clear$5, inst$)},
	{}
};
$MethodInfo TestKit$$Lambda$clear$5::methodInfos[3] = {
	{"<init>", "(Ljava/util/Collection;)V", nullptr, $PUBLIC, $method(static_cast<void(TestKit$$Lambda$clear$5::*)($Collection*)>(&TestKit$$Lambda$clear$5::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestKit$$Lambda$clear$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestKit$$Lambda$clear$5",
	"java.lang.Object",
	"TestKit$ThrowingProcedure",
	fieldInfos,
	methodInfos
};
$Class* TestKit$$Lambda$clear$5::load$($String* name, bool initialize) {
	$loadClass(TestKit$$Lambda$clear$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestKit$$Lambda$clear$5::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableCollection$4$6 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableCollection$4$6, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($Collection* collection, Object$* e) {
		$set(this, collection, collection);
		$set(this, e, e);
	}
	virtual void run() override {
		TestKit::lambda$assertUnmodifiableCollection$4(collection, e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestKit$$Lambda$lambda$assertUnmodifiableCollection$4$6>());
	}
	$Collection* collection = nullptr;
	$Object* e = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestKit$$Lambda$lambda$assertUnmodifiableCollection$4$6::fieldInfos[3] = {
	{"collection", "Ljava/util/Collection;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableCollection$4$6, collection)},
	{"e", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableCollection$4$6, e)},
	{}
};
$MethodInfo TestKit$$Lambda$lambda$assertUnmodifiableCollection$4$6::methodInfos[3] = {
	{"<init>", "(Ljava/util/Collection;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(TestKit$$Lambda$lambda$assertUnmodifiableCollection$4$6::*)($Collection*,Object$*)>(&TestKit$$Lambda$lambda$assertUnmodifiableCollection$4$6::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestKit$$Lambda$lambda$assertUnmodifiableCollection$4$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestKit$$Lambda$lambda$assertUnmodifiableCollection$4$6",
	"java.lang.Object",
	"TestKit$ThrowingProcedure",
	fieldInfos,
	methodInfos
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableCollection$4$6::load$($String* name, bool initialize) {
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableCollection$4$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableCollection$4$6::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableCollection$5$7 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableCollection$5$7, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($Collection* collection, Object$* e) {
		$set(this, collection, collection);
		$set(this, e, e);
	}
	virtual void run() override {
		TestKit::lambda$assertUnmodifiableCollection$5(collection, e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestKit$$Lambda$lambda$assertUnmodifiableCollection$5$7>());
	}
	$Collection* collection = nullptr;
	$Object* e = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestKit$$Lambda$lambda$assertUnmodifiableCollection$5$7::fieldInfos[3] = {
	{"collection", "Ljava/util/Collection;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableCollection$5$7, collection)},
	{"e", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableCollection$5$7, e)},
	{}
};
$MethodInfo TestKit$$Lambda$lambda$assertUnmodifiableCollection$5$7::methodInfos[3] = {
	{"<init>", "(Ljava/util/Collection;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(TestKit$$Lambda$lambda$assertUnmodifiableCollection$5$7::*)($Collection*,Object$*)>(&TestKit$$Lambda$lambda$assertUnmodifiableCollection$5$7::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestKit$$Lambda$lambda$assertUnmodifiableCollection$5$7::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestKit$$Lambda$lambda$assertUnmodifiableCollection$5$7",
	"java.lang.Object",
	"TestKit$ThrowingProcedure",
	fieldInfos,
	methodInfos
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableCollection$5$7::load$($String* name, bool initialize) {
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableCollection$5$7, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableCollection$5$7::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableCollection$7$8 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableCollection$7$8, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($Collection* collection) {
		$set(this, collection, collection);
	}
	virtual void run() override {
		TestKit::lambda$assertUnmodifiableCollection$7(collection);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestKit$$Lambda$lambda$assertUnmodifiableCollection$7$8>());
	}
	$Collection* collection = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestKit$$Lambda$lambda$assertUnmodifiableCollection$7$8::fieldInfos[2] = {
	{"collection", "Ljava/util/Collection;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableCollection$7$8, collection)},
	{}
};
$MethodInfo TestKit$$Lambda$lambda$assertUnmodifiableCollection$7$8::methodInfos[3] = {
	{"<init>", "(Ljava/util/Collection;)V", nullptr, $PUBLIC, $method(static_cast<void(TestKit$$Lambda$lambda$assertUnmodifiableCollection$7$8::*)($Collection*)>(&TestKit$$Lambda$lambda$assertUnmodifiableCollection$7$8::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestKit$$Lambda$lambda$assertUnmodifiableCollection$7$8::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestKit$$Lambda$lambda$assertUnmodifiableCollection$7$8",
	"java.lang.Object",
	"TestKit$ThrowingProcedure",
	fieldInfos,
	methodInfos
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableCollection$7$8::load$($String* name, bool initialize) {
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableCollection$7$8, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableCollection$7$8::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableCollection$8$9 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableCollection$8$9, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($Collection* collection) {
		$set(this, collection, collection);
	}
	virtual void run() override {
		TestKit::lambda$assertUnmodifiableCollection$8(collection);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestKit$$Lambda$lambda$assertUnmodifiableCollection$8$9>());
	}
	$Collection* collection = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestKit$$Lambda$lambda$assertUnmodifiableCollection$8$9::fieldInfos[2] = {
	{"collection", "Ljava/util/Collection;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableCollection$8$9, collection)},
	{}
};
$MethodInfo TestKit$$Lambda$lambda$assertUnmodifiableCollection$8$9::methodInfos[3] = {
	{"<init>", "(Ljava/util/Collection;)V", nullptr, $PUBLIC, $method(static_cast<void(TestKit$$Lambda$lambda$assertUnmodifiableCollection$8$9::*)($Collection*)>(&TestKit$$Lambda$lambda$assertUnmodifiableCollection$8$9::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestKit$$Lambda$lambda$assertUnmodifiableCollection$8$9::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestKit$$Lambda$lambda$assertUnmodifiableCollection$8$9",
	"java.lang.Object",
	"TestKit$ThrowingProcedure",
	fieldInfos,
	methodInfos
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableCollection$8$9::load$($String* name, bool initialize) {
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableCollection$8$9, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableCollection$8$9::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableList$11$10 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableList$11$10, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($List* list, Object$* e) {
		$set(this, list, list);
		$set(this, e, e);
	}
	virtual void run() override {
		TestKit::lambda$assertUnmodifiableList$11(list, e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestKit$$Lambda$lambda$assertUnmodifiableList$11$10>());
	}
	$List* list = nullptr;
	$Object* e = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestKit$$Lambda$lambda$assertUnmodifiableList$11$10::fieldInfos[3] = {
	{"list", "Ljava/util/List;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableList$11$10, list)},
	{"e", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableList$11$10, e)},
	{}
};
$MethodInfo TestKit$$Lambda$lambda$assertUnmodifiableList$11$10::methodInfos[3] = {
	{"<init>", "(Ljava/util/List;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(TestKit$$Lambda$lambda$assertUnmodifiableList$11$10::*)($List*,Object$*)>(&TestKit$$Lambda$lambda$assertUnmodifiableList$11$10::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestKit$$Lambda$lambda$assertUnmodifiableList$11$10::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestKit$$Lambda$lambda$assertUnmodifiableList$11$10",
	"java.lang.Object",
	"TestKit$ThrowingProcedure",
	fieldInfos,
	methodInfos
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableList$11$10::load$($String* name, bool initialize) {
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableList$11$10, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableList$11$10::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableList$12$11 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableList$12$11, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($List* list, Object$* e) {
		$set(this, list, list);
		$set(this, e, e);
	}
	virtual void run() override {
		TestKit::lambda$assertUnmodifiableList$12(list, e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestKit$$Lambda$lambda$assertUnmodifiableList$12$11>());
	}
	$List* list = nullptr;
	$Object* e = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestKit$$Lambda$lambda$assertUnmodifiableList$12$11::fieldInfos[3] = {
	{"list", "Ljava/util/List;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableList$12$11, list)},
	{"e", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableList$12$11, e)},
	{}
};
$MethodInfo TestKit$$Lambda$lambda$assertUnmodifiableList$12$11::methodInfos[3] = {
	{"<init>", "(Ljava/util/List;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(TestKit$$Lambda$lambda$assertUnmodifiableList$12$11::*)($List*,Object$*)>(&TestKit$$Lambda$lambda$assertUnmodifiableList$12$11::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestKit$$Lambda$lambda$assertUnmodifiableList$12$11::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestKit$$Lambda$lambda$assertUnmodifiableList$12$11",
	"java.lang.Object",
	"TestKit$ThrowingProcedure",
	fieldInfos,
	methodInfos
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableList$12$11::load$($String* name, bool initialize) {
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableList$12$11, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableList$12$11::class$ = nullptr;

class TestKit$$Lambda$remove$12 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$remove$12, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($ListIterator* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->remove();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestKit$$Lambda$remove$12>());
	}
	$ListIterator* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestKit$$Lambda$remove$12::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$remove$12, inst$)},
	{}
};
$MethodInfo TestKit$$Lambda$remove$12::methodInfos[3] = {
	{"<init>", "(Ljava/util/ListIterator;)V", nullptr, $PUBLIC, $method(static_cast<void(TestKit$$Lambda$remove$12::*)($ListIterator*)>(&TestKit$$Lambda$remove$12::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestKit$$Lambda$remove$12::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestKit$$Lambda$remove$12",
	"java.lang.Object",
	"TestKit$ThrowingProcedure",
	fieldInfos,
	methodInfos
};
$Class* TestKit$$Lambda$remove$12::load$($String* name, bool initialize) {
	$loadClass(TestKit$$Lambda$remove$12, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestKit$$Lambda$remove$12::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableList$13$13 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableList$13$13, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($ListIterator* i, Object$* e) {
		$set(this, i, i);
		$set(this, e, e);
	}
	virtual void run() override {
		TestKit::lambda$assertUnmodifiableList$13(i, e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestKit$$Lambda$lambda$assertUnmodifiableList$13$13>());
	}
	$ListIterator* i = nullptr;
	$Object* e = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestKit$$Lambda$lambda$assertUnmodifiableList$13$13::fieldInfos[3] = {
	{"i", "Ljava/util/ListIterator;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableList$13$13, i)},
	{"e", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableList$13$13, e)},
	{}
};
$MethodInfo TestKit$$Lambda$lambda$assertUnmodifiableList$13$13::methodInfos[3] = {
	{"<init>", "(Ljava/util/ListIterator;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(TestKit$$Lambda$lambda$assertUnmodifiableList$13$13::*)($ListIterator*,Object$*)>(&TestKit$$Lambda$lambda$assertUnmodifiableList$13$13::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestKit$$Lambda$lambda$assertUnmodifiableList$13$13::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestKit$$Lambda$lambda$assertUnmodifiableList$13$13",
	"java.lang.Object",
	"TestKit$ThrowingProcedure",
	fieldInfos,
	methodInfos
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableList$13$13::load$($String* name, bool initialize) {
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableList$13$13, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableList$13$13::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableList$14$14 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableList$14$14, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($ListIterator* i, Object$* e) {
		$set(this, i, i);
		$set(this, e, e);
	}
	virtual void run() override {
		TestKit::lambda$assertUnmodifiableList$14(i, e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestKit$$Lambda$lambda$assertUnmodifiableList$14$14>());
	}
	$ListIterator* i = nullptr;
	$Object* e = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestKit$$Lambda$lambda$assertUnmodifiableList$14$14::fieldInfos[3] = {
	{"i", "Ljava/util/ListIterator;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableList$14$14, i)},
	{"e", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableList$14$14, e)},
	{}
};
$MethodInfo TestKit$$Lambda$lambda$assertUnmodifiableList$14$14::methodInfos[3] = {
	{"<init>", "(Ljava/util/ListIterator;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(TestKit$$Lambda$lambda$assertUnmodifiableList$14$14::*)($ListIterator*,Object$*)>(&TestKit$$Lambda$lambda$assertUnmodifiableList$14$14::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestKit$$Lambda$lambda$assertUnmodifiableList$14$14::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestKit$$Lambda$lambda$assertUnmodifiableList$14$14",
	"java.lang.Object",
	"TestKit$ThrowingProcedure",
	fieldInfos,
	methodInfos
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableList$14$14::load$($String* name, bool initialize) {
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableList$14$14, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableList$14$14::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableList$15$15 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableList$15$15, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($List* list) {
		$set(this, list, list);
	}
	virtual void run() override {
		TestKit::lambda$assertUnmodifiableList$15(list);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestKit$$Lambda$lambda$assertUnmodifiableList$15$15>());
	}
	$List* list = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestKit$$Lambda$lambda$assertUnmodifiableList$15$15::fieldInfos[2] = {
	{"list", "Ljava/util/List;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableList$15$15, list)},
	{}
};
$MethodInfo TestKit$$Lambda$lambda$assertUnmodifiableList$15$15::methodInfos[3] = {
	{"<init>", "(Ljava/util/List;)V", nullptr, $PUBLIC, $method(static_cast<void(TestKit$$Lambda$lambda$assertUnmodifiableList$15$15::*)($List*)>(&TestKit$$Lambda$lambda$assertUnmodifiableList$15$15::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestKit$$Lambda$lambda$assertUnmodifiableList$15$15::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestKit$$Lambda$lambda$assertUnmodifiableList$15$15",
	"java.lang.Object",
	"TestKit$ThrowingProcedure",
	fieldInfos,
	methodInfos
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableList$15$15::load$($String* name, bool initialize) {
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableList$15$15, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableList$15$15::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableList$17$16 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableList$17$16, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($List* list, Object$* e) {
		$set(this, list, list);
		$set(this, e, e);
	}
	virtual void run() override {
		TestKit::lambda$assertUnmodifiableList$17(list, e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestKit$$Lambda$lambda$assertUnmodifiableList$17$16>());
	}
	$List* list = nullptr;
	$Object* e = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestKit$$Lambda$lambda$assertUnmodifiableList$17$16::fieldInfos[3] = {
	{"list", "Ljava/util/List;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableList$17$16, list)},
	{"e", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableList$17$16, e)},
	{}
};
$MethodInfo TestKit$$Lambda$lambda$assertUnmodifiableList$17$16::methodInfos[3] = {
	{"<init>", "(Ljava/util/List;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(TestKit$$Lambda$lambda$assertUnmodifiableList$17$16::*)($List*,Object$*)>(&TestKit$$Lambda$lambda$assertUnmodifiableList$17$16::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestKit$$Lambda$lambda$assertUnmodifiableList$17$16::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestKit$$Lambda$lambda$assertUnmodifiableList$17$16",
	"java.lang.Object",
	"TestKit$ThrowingProcedure",
	fieldInfos,
	methodInfos
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableList$17$16::load$($String* name, bool initialize) {
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableList$17$16, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableList$17$16::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableList$18$17 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableList$18$17, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($List* list, Object$* e) {
		$set(this, list, list);
		$set(this, e, e);
	}
	virtual void run() override {
		TestKit::lambda$assertUnmodifiableList$18(list, e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestKit$$Lambda$lambda$assertUnmodifiableList$18$17>());
	}
	$List* list = nullptr;
	$Object* e = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestKit$$Lambda$lambda$assertUnmodifiableList$18$17::fieldInfos[3] = {
	{"list", "Ljava/util/List;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableList$18$17, list)},
	{"e", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableList$18$17, e)},
	{}
};
$MethodInfo TestKit$$Lambda$lambda$assertUnmodifiableList$18$17::methodInfos[3] = {
	{"<init>", "(Ljava/util/List;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(TestKit$$Lambda$lambda$assertUnmodifiableList$18$17::*)($List*,Object$*)>(&TestKit$$Lambda$lambda$assertUnmodifiableList$18$17::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestKit$$Lambda$lambda$assertUnmodifiableList$18$17::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestKit$$Lambda$lambda$assertUnmodifiableList$18$17",
	"java.lang.Object",
	"TestKit$ThrowingProcedure",
	fieldInfos,
	methodInfos
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableList$18$17::load$($String* name, bool initialize) {
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableList$18$17, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableList$18$17::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableList$19$18 : public $Comparator {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableList$19$18, $NO_CLASS_INIT, $Comparator)
public:
	void init$() {
	}
	virtual int32_t compare(Object$* a, Object$* b) override {
		 return TestKit::lambda$assertUnmodifiableList$19(a, b);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestKit$$Lambda$lambda$assertUnmodifiableList$19$18>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestKit$$Lambda$lambda$assertUnmodifiableList$19$18::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestKit$$Lambda$lambda$assertUnmodifiableList$19$18::*)()>(&TestKit$$Lambda$lambda$assertUnmodifiableList$19$18::init$))},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestKit$$Lambda$lambda$assertUnmodifiableList$19$18::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestKit$$Lambda$lambda$assertUnmodifiableList$19$18",
	"java.lang.Object",
	"java.util.Comparator",
	nullptr,
	methodInfos
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableList$19$18::load$($String* name, bool initialize) {
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableList$19$18, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableList$19$18::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableList$20$19 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableList$20$19, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($List* list, $Comparator* comparator) {
		$set(this, list, list);
		$set(this, comparator, comparator);
	}
	virtual void run() override {
		TestKit::lambda$assertUnmodifiableList$20(list, comparator);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestKit$$Lambda$lambda$assertUnmodifiableList$20$19>());
	}
	$List* list = nullptr;
	$Comparator* comparator = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestKit$$Lambda$lambda$assertUnmodifiableList$20$19::fieldInfos[3] = {
	{"list", "Ljava/util/List;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableList$20$19, list)},
	{"comparator", "Ljava/util/Comparator;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableList$20$19, comparator)},
	{}
};
$MethodInfo TestKit$$Lambda$lambda$assertUnmodifiableList$20$19::methodInfos[3] = {
	{"<init>", "(Ljava/util/List;Ljava/util/Comparator;)V", nullptr, $PUBLIC, $method(static_cast<void(TestKit$$Lambda$lambda$assertUnmodifiableList$20$19::*)($List*,$Comparator*)>(&TestKit$$Lambda$lambda$assertUnmodifiableList$20$19::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestKit$$Lambda$lambda$assertUnmodifiableList$20$19::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestKit$$Lambda$lambda$assertUnmodifiableList$20$19",
	"java.lang.Object",
	"TestKit$ThrowingProcedure",
	fieldInfos,
	methodInfos
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableList$20$19::load$($String* name, bool initialize) {
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableList$20$19, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableList$20$19::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableMap$21$20 : public $Supplier {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableMap$21$20, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $of(TestKit::lambda$assertUnmodifiableMap$21());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestKit$$Lambda$lambda$assertUnmodifiableMap$21$20>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestKit$$Lambda$lambda$assertUnmodifiableMap$21$20::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestKit$$Lambda$lambda$assertUnmodifiableMap$21$20::*)()>(&TestKit$$Lambda$lambda$assertUnmodifiableMap$21$20::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestKit$$Lambda$lambda$assertUnmodifiableMap$21$20::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestKit$$Lambda$lambda$assertUnmodifiableMap$21$20",
	"java.lang.Object",
	"java.util.function.Supplier",
	nullptr,
	methodInfos
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$21$20::load$($String* name, bool initialize) {
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableMap$21$20, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$21$20::class$ = nullptr;

class TestKit$$Lambda$clear$21 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$clear$21, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($Map* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->clear();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestKit$$Lambda$clear$21>());
	}
	$Map* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestKit$$Lambda$clear$21::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$clear$21, inst$)},
	{}
};
$MethodInfo TestKit$$Lambda$clear$21::methodInfos[3] = {
	{"<init>", "(Ljava/util/Map;)V", nullptr, $PUBLIC, $method(static_cast<void(TestKit$$Lambda$clear$21::*)($Map*)>(&TestKit$$Lambda$clear$21::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestKit$$Lambda$clear$21::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestKit$$Lambda$clear$21",
	"java.lang.Object",
	"TestKit$ThrowingProcedure",
	fieldInfos,
	methodInfos
};
$Class* TestKit$$Lambda$clear$21::load$($String* name, bool initialize) {
	$loadClass(TestKit$$Lambda$clear$21, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestKit$$Lambda$clear$21::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableMap$23$22 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableMap$23$22, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($Map* map, Object$* k, Object$* v) {
		$set(this, map, map);
		$set(this, k, k);
		$set(this, v, v);
	}
	virtual void run() override {
		TestKit::lambda$assertUnmodifiableMap$23(map, k, v);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestKit$$Lambda$lambda$assertUnmodifiableMap$23$22>());
	}
	$Map* map = nullptr;
	$Object* k = nullptr;
	$Object* v = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestKit$$Lambda$lambda$assertUnmodifiableMap$23$22::fieldInfos[4] = {
	{"map", "Ljava/util/Map;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$23$22, map)},
	{"k", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$23$22, k)},
	{"v", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$23$22, v)},
	{}
};
$MethodInfo TestKit$$Lambda$lambda$assertUnmodifiableMap$23$22::methodInfos[3] = {
	{"<init>", "(Ljava/util/Map;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(TestKit$$Lambda$lambda$assertUnmodifiableMap$23$22::*)($Map*,Object$*,Object$*)>(&TestKit$$Lambda$lambda$assertUnmodifiableMap$23$22::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestKit$$Lambda$lambda$assertUnmodifiableMap$23$22::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestKit$$Lambda$lambda$assertUnmodifiableMap$23$22",
	"java.lang.Object",
	"TestKit$ThrowingProcedure",
	fieldInfos,
	methodInfos
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$23$22::load$($String* name, bool initialize) {
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableMap$23$22, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$23$22::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableMap$25$23 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableMap$25$23, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($Map* map, Object$* k, Object$* v) {
		$set(this, map, map);
		$set(this, k, k);
		$set(this, v, v);
	}
	virtual void run() override {
		TestKit::lambda$assertUnmodifiableMap$25(map, k, v);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestKit$$Lambda$lambda$assertUnmodifiableMap$25$23>());
	}
	$Map* map = nullptr;
	$Object* k = nullptr;
	$Object* v = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestKit$$Lambda$lambda$assertUnmodifiableMap$25$23::fieldInfos[4] = {
	{"map", "Ljava/util/Map;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$25$23, map)},
	{"k", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$25$23, k)},
	{"v", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$25$23, v)},
	{}
};
$MethodInfo TestKit$$Lambda$lambda$assertUnmodifiableMap$25$23::methodInfos[3] = {
	{"<init>", "(Ljava/util/Map;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(TestKit$$Lambda$lambda$assertUnmodifiableMap$25$23::*)($Map*,Object$*,Object$*)>(&TestKit$$Lambda$lambda$assertUnmodifiableMap$25$23::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestKit$$Lambda$lambda$assertUnmodifiableMap$25$23::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestKit$$Lambda$lambda$assertUnmodifiableMap$25$23",
	"java.lang.Object",
	"TestKit$ThrowingProcedure",
	fieldInfos,
	methodInfos
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$25$23::load$($String* name, bool initialize) {
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableMap$25$23, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$25$23::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableMap$27$24 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableMap$27$24, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($Map* map, Object$* k, Object$* v) {
		$set(this, map, map);
		$set(this, k, k);
		$set(this, v, v);
	}
	virtual void run() override {
		TestKit::lambda$assertUnmodifiableMap$27(map, k, v);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestKit$$Lambda$lambda$assertUnmodifiableMap$27$24>());
	}
	$Map* map = nullptr;
	$Object* k = nullptr;
	$Object* v = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestKit$$Lambda$lambda$assertUnmodifiableMap$27$24::fieldInfos[4] = {
	{"map", "Ljava/util/Map;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$27$24, map)},
	{"k", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$27$24, k)},
	{"v", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$27$24, v)},
	{}
};
$MethodInfo TestKit$$Lambda$lambda$assertUnmodifiableMap$27$24::methodInfos[3] = {
	{"<init>", "(Ljava/util/Map;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(TestKit$$Lambda$lambda$assertUnmodifiableMap$27$24::*)($Map*,Object$*,Object$*)>(&TestKit$$Lambda$lambda$assertUnmodifiableMap$27$24::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestKit$$Lambda$lambda$assertUnmodifiableMap$27$24::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestKit$$Lambda$lambda$assertUnmodifiableMap$27$24",
	"java.lang.Object",
	"TestKit$ThrowingProcedure",
	fieldInfos,
	methodInfos
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$27$24::load$($String* name, bool initialize) {
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableMap$27$24, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$27$24::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableMap$28$25 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableMap$28$25, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($Map$Entry* e) {
		$set(this, e, e);
	}
	virtual void run() override {
		TestKit::lambda$assertUnmodifiableMap$28(e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestKit$$Lambda$lambda$assertUnmodifiableMap$28$25>());
	}
	$Map$Entry* e = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestKit$$Lambda$lambda$assertUnmodifiableMap$28$25::fieldInfos[2] = {
	{"e", "Ljava/util/Map$Entry;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$28$25, e)},
	{}
};
$MethodInfo TestKit$$Lambda$lambda$assertUnmodifiableMap$28$25::methodInfos[3] = {
	{"<init>", "(Ljava/util/Map$Entry;)V", nullptr, $PUBLIC, $method(static_cast<void(TestKit$$Lambda$lambda$assertUnmodifiableMap$28$25::*)($Map$Entry*)>(&TestKit$$Lambda$lambda$assertUnmodifiableMap$28$25::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestKit$$Lambda$lambda$assertUnmodifiableMap$28$25::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestKit$$Lambda$lambda$assertUnmodifiableMap$28$25",
	"java.lang.Object",
	"TestKit$ThrowingProcedure",
	fieldInfos,
	methodInfos
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$28$25::load$($String* name, bool initialize) {
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableMap$28$25, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$28$25::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableMap$30$26 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableMap$30$26, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($Map* map, Object$* k, Object$* v) {
		$set(this, map, map);
		$set(this, k, k);
		$set(this, v, v);
	}
	virtual void run() override {
		TestKit::lambda$assertUnmodifiableMap$30(map, k, v);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestKit$$Lambda$lambda$assertUnmodifiableMap$30$26>());
	}
	$Map* map = nullptr;
	$Object* k = nullptr;
	$Object* v = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestKit$$Lambda$lambda$assertUnmodifiableMap$30$26::fieldInfos[4] = {
	{"map", "Ljava/util/Map;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$30$26, map)},
	{"k", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$30$26, k)},
	{"v", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$30$26, v)},
	{}
};
$MethodInfo TestKit$$Lambda$lambda$assertUnmodifiableMap$30$26::methodInfos[3] = {
	{"<init>", "(Ljava/util/Map;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(TestKit$$Lambda$lambda$assertUnmodifiableMap$30$26::*)($Map*,Object$*,Object$*)>(&TestKit$$Lambda$lambda$assertUnmodifiableMap$30$26::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestKit$$Lambda$lambda$assertUnmodifiableMap$30$26::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestKit$$Lambda$lambda$assertUnmodifiableMap$30$26",
	"java.lang.Object",
	"TestKit$ThrowingProcedure",
	fieldInfos,
	methodInfos
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$30$26::load$($String* name, bool initialize) {
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableMap$30$26, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$30$26::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableMap$31$27 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableMap$31$27, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($Map* map, Object$* k, Object$* v) {
		$set(this, map, map);
		$set(this, k, k);
		$set(this, v, v);
	}
	virtual void run() override {
		TestKit::lambda$assertUnmodifiableMap$31(map, k, v);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestKit$$Lambda$lambda$assertUnmodifiableMap$31$27>());
	}
	$Map* map = nullptr;
	$Object* k = nullptr;
	$Object* v = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestKit$$Lambda$lambda$assertUnmodifiableMap$31$27::fieldInfos[4] = {
	{"map", "Ljava/util/Map;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$31$27, map)},
	{"k", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$31$27, k)},
	{"v", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$31$27, v)},
	{}
};
$MethodInfo TestKit$$Lambda$lambda$assertUnmodifiableMap$31$27::methodInfos[3] = {
	{"<init>", "(Ljava/util/Map;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(TestKit$$Lambda$lambda$assertUnmodifiableMap$31$27::*)($Map*,Object$*,Object$*)>(&TestKit$$Lambda$lambda$assertUnmodifiableMap$31$27::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestKit$$Lambda$lambda$assertUnmodifiableMap$31$27::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestKit$$Lambda$lambda$assertUnmodifiableMap$31$27",
	"java.lang.Object",
	"TestKit$ThrowingProcedure",
	fieldInfos,
	methodInfos
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$31$27::load$($String* name, bool initialize) {
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableMap$31$27, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$31$27::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableMap$32$28 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableMap$32$28, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($Map* map, $Map* m) {
		$set(this, map, map);
		$set(this, m, m);
	}
	virtual void run() override {
		TestKit::lambda$assertUnmodifiableMap$32(map, m);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestKit$$Lambda$lambda$assertUnmodifiableMap$32$28>());
	}
	$Map* map = nullptr;
	$Map* m = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestKit$$Lambda$lambda$assertUnmodifiableMap$32$28::fieldInfos[3] = {
	{"map", "Ljava/util/Map;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$32$28, map)},
	{"m", "Ljava/util/Map;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$32$28, m)},
	{}
};
$MethodInfo TestKit$$Lambda$lambda$assertUnmodifiableMap$32$28::methodInfos[3] = {
	{"<init>", "(Ljava/util/Map;Ljava/util/Map;)V", nullptr, $PUBLIC, $method(static_cast<void(TestKit$$Lambda$lambda$assertUnmodifiableMap$32$28::*)($Map*,$Map*)>(&TestKit$$Lambda$lambda$assertUnmodifiableMap$32$28::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestKit$$Lambda$lambda$assertUnmodifiableMap$32$28::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestKit$$Lambda$lambda$assertUnmodifiableMap$32$28",
	"java.lang.Object",
	"TestKit$ThrowingProcedure",
	fieldInfos,
	methodInfos
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$32$28::load$($String* name, bool initialize) {
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableMap$32$28, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$32$28::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableMap$33$29 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableMap$33$29, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($Map* map, Object$* k, Object$* v) {
		$set(this, map, map);
		$set(this, k, k);
		$set(this, v, v);
	}
	virtual void run() override {
		TestKit::lambda$assertUnmodifiableMap$33(map, k, v);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestKit$$Lambda$lambda$assertUnmodifiableMap$33$29>());
	}
	$Map* map = nullptr;
	$Object* k = nullptr;
	$Object* v = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestKit$$Lambda$lambda$assertUnmodifiableMap$33$29::fieldInfos[4] = {
	{"map", "Ljava/util/Map;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$33$29, map)},
	{"k", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$33$29, k)},
	{"v", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$33$29, v)},
	{}
};
$MethodInfo TestKit$$Lambda$lambda$assertUnmodifiableMap$33$29::methodInfos[3] = {
	{"<init>", "(Ljava/util/Map;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(TestKit$$Lambda$lambda$assertUnmodifiableMap$33$29::*)($Map*,Object$*,Object$*)>(&TestKit$$Lambda$lambda$assertUnmodifiableMap$33$29::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestKit$$Lambda$lambda$assertUnmodifiableMap$33$29::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestKit$$Lambda$lambda$assertUnmodifiableMap$33$29",
	"java.lang.Object",
	"TestKit$ThrowingProcedure",
	fieldInfos,
	methodInfos
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$33$29::load$($String* name, bool initialize) {
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableMap$33$29, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$33$29::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableMap$34$30 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableMap$34$30, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($Map* map, Object$* k) {
		$set(this, map, map);
		$set(this, k, k);
	}
	virtual void run() override {
		TestKit::lambda$assertUnmodifiableMap$34(map, k);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestKit$$Lambda$lambda$assertUnmodifiableMap$34$30>());
	}
	$Map* map = nullptr;
	$Object* k = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestKit$$Lambda$lambda$assertUnmodifiableMap$34$30::fieldInfos[3] = {
	{"map", "Ljava/util/Map;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$34$30, map)},
	{"k", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$34$30, k)},
	{}
};
$MethodInfo TestKit$$Lambda$lambda$assertUnmodifiableMap$34$30::methodInfos[3] = {
	{"<init>", "(Ljava/util/Map;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(TestKit$$Lambda$lambda$assertUnmodifiableMap$34$30::*)($Map*,Object$*)>(&TestKit$$Lambda$lambda$assertUnmodifiableMap$34$30::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestKit$$Lambda$lambda$assertUnmodifiableMap$34$30::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestKit$$Lambda$lambda$assertUnmodifiableMap$34$30",
	"java.lang.Object",
	"TestKit$ThrowingProcedure",
	fieldInfos,
	methodInfos
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$34$30::load$($String* name, bool initialize) {
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableMap$34$30, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$34$30::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableMap$35$31 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableMap$35$31, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($Map* map, Object$* k, Object$* v) {
		$set(this, map, map);
		$set(this, k, k);
		$set(this, v, v);
	}
	virtual void run() override {
		TestKit::lambda$assertUnmodifiableMap$35(map, k, v);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestKit$$Lambda$lambda$assertUnmodifiableMap$35$31>());
	}
	$Map* map = nullptr;
	$Object* k = nullptr;
	$Object* v = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestKit$$Lambda$lambda$assertUnmodifiableMap$35$31::fieldInfos[4] = {
	{"map", "Ljava/util/Map;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$35$31, map)},
	{"k", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$35$31, k)},
	{"v", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$35$31, v)},
	{}
};
$MethodInfo TestKit$$Lambda$lambda$assertUnmodifiableMap$35$31::methodInfos[3] = {
	{"<init>", "(Ljava/util/Map;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(TestKit$$Lambda$lambda$assertUnmodifiableMap$35$31::*)($Map*,Object$*,Object$*)>(&TestKit$$Lambda$lambda$assertUnmodifiableMap$35$31::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestKit$$Lambda$lambda$assertUnmodifiableMap$35$31::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestKit$$Lambda$lambda$assertUnmodifiableMap$35$31",
	"java.lang.Object",
	"TestKit$ThrowingProcedure",
	fieldInfos,
	methodInfos
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$35$31::load$($String* name, bool initialize) {
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableMap$35$31, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$35$31::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableMap$36$32 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableMap$36$32, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($Map* map, Object$* k, Object$* v) {
		$set(this, map, map);
		$set(this, k, k);
		$set(this, v, v);
	}
	virtual void run() override {
		TestKit::lambda$assertUnmodifiableMap$36(map, k, v);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestKit$$Lambda$lambda$assertUnmodifiableMap$36$32>());
	}
	$Map* map = nullptr;
	$Object* k = nullptr;
	$Object* v = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestKit$$Lambda$lambda$assertUnmodifiableMap$36$32::fieldInfos[4] = {
	{"map", "Ljava/util/Map;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$36$32, map)},
	{"k", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$36$32, k)},
	{"v", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$36$32, v)},
	{}
};
$MethodInfo TestKit$$Lambda$lambda$assertUnmodifiableMap$36$32::methodInfos[3] = {
	{"<init>", "(Ljava/util/Map;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(TestKit$$Lambda$lambda$assertUnmodifiableMap$36$32::*)($Map*,Object$*,Object$*)>(&TestKit$$Lambda$lambda$assertUnmodifiableMap$36$32::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestKit$$Lambda$lambda$assertUnmodifiableMap$36$32::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestKit$$Lambda$lambda$assertUnmodifiableMap$36$32",
	"java.lang.Object",
	"TestKit$ThrowingProcedure",
	fieldInfos,
	methodInfos
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$36$32::load$($String* name, bool initialize) {
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableMap$36$32, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$36$32::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableMap$37$33 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableMap$37$33, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($Map* map, Object$* k, Object$* v) {
		$set(this, map, map);
		$set(this, k, k);
		$set(this, v, v);
	}
	virtual void run() override {
		TestKit::lambda$assertUnmodifiableMap$37(map, k, v);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestKit$$Lambda$lambda$assertUnmodifiableMap$37$33>());
	}
	$Map* map = nullptr;
	$Object* k = nullptr;
	$Object* v = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestKit$$Lambda$lambda$assertUnmodifiableMap$37$33::fieldInfos[4] = {
	{"map", "Ljava/util/Map;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$37$33, map)},
	{"k", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$37$33, k)},
	{"v", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$37$33, v)},
	{}
};
$MethodInfo TestKit$$Lambda$lambda$assertUnmodifiableMap$37$33::methodInfos[3] = {
	{"<init>", "(Ljava/util/Map;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(TestKit$$Lambda$lambda$assertUnmodifiableMap$37$33::*)($Map*,Object$*,Object$*)>(&TestKit$$Lambda$lambda$assertUnmodifiableMap$37$33::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestKit$$Lambda$lambda$assertUnmodifiableMap$37$33::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestKit$$Lambda$lambda$assertUnmodifiableMap$37$33",
	"java.lang.Object",
	"TestKit$ThrowingProcedure",
	fieldInfos,
	methodInfos
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$37$33::load$($String* name, bool initialize) {
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableMap$37$33, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$37$33::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableMap$39$34 : public $TestKit$ThrowingProcedure {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableMap$39$34, $NO_CLASS_INIT, $TestKit$ThrowingProcedure)
public:
	void init$($Map* map, Object$* v) {
		$set(this, map, map);
		$set(this, v, v);
	}
	virtual void run() override {
		TestKit::lambda$assertUnmodifiableMap$39(map, v);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestKit$$Lambda$lambda$assertUnmodifiableMap$39$34>());
	}
	$Map* map = nullptr;
	$Object* v = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestKit$$Lambda$lambda$assertUnmodifiableMap$39$34::fieldInfos[3] = {
	{"map", "Ljava/util/Map;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$39$34, map)},
	{"v", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$39$34, v)},
	{}
};
$MethodInfo TestKit$$Lambda$lambda$assertUnmodifiableMap$39$34::methodInfos[3] = {
	{"<init>", "(Ljava/util/Map;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(TestKit$$Lambda$lambda$assertUnmodifiableMap$39$34::*)($Map*,Object$*)>(&TestKit$$Lambda$lambda$assertUnmodifiableMap$39$34::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestKit$$Lambda$lambda$assertUnmodifiableMap$39$34::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestKit$$Lambda$lambda$assertUnmodifiableMap$39$34",
	"java.lang.Object",
	"TestKit$ThrowingProcedure",
	fieldInfos,
	methodInfos
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$39$34::load$($String* name, bool initialize) {
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableMap$39$34, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$39$34::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableMap$22$35 : public $BiFunction {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableMap$22$35, $NO_CLASS_INIT, $BiFunction)
public:
	void init$(Object$* v) {
		$set(this, v, v);
	}
	virtual $Object* apply(Object$* k1, Object$* v1) override {
		 return TestKit::lambda$assertUnmodifiableMap$22(v, k1, v1);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestKit$$Lambda$lambda$assertUnmodifiableMap$22$35>());
	}
	$Object* v = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestKit$$Lambda$lambda$assertUnmodifiableMap$22$35::fieldInfos[2] = {
	{"v", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableMap$22$35, v)},
	{}
};
$MethodInfo TestKit$$Lambda$lambda$assertUnmodifiableMap$22$35::methodInfos[3] = {
	{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(TestKit$$Lambda$lambda$assertUnmodifiableMap$22$35::*)(Object$*)>(&TestKit$$Lambda$lambda$assertUnmodifiableMap$22$35::init$))},
	{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestKit$$Lambda$lambda$assertUnmodifiableMap$22$35::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestKit$$Lambda$lambda$assertUnmodifiableMap$22$35",
	"java.lang.Object",
	"java.util.function.BiFunction",
	fieldInfos,
	methodInfos
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$22$35::load$($String* name, bool initialize) {
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableMap$22$35, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableMap$22$35::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableList$16$36 : public $UnaryOperator {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableList$16$36, $NO_CLASS_INIT, $UnaryOperator)
public:
	void init$(Object$* e) {
		$set(this, e, e);
	}
	virtual $Object* apply(Object$* x) override {
		 return TestKit::lambda$assertUnmodifiableList$16(e, x);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestKit$$Lambda$lambda$assertUnmodifiableList$16$36>());
	}
	$Object* e = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestKit$$Lambda$lambda$assertUnmodifiableList$16$36::fieldInfos[2] = {
	{"e", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestKit$$Lambda$lambda$assertUnmodifiableList$16$36, e)},
	{}
};
$MethodInfo TestKit$$Lambda$lambda$assertUnmodifiableList$16$36::methodInfos[3] = {
	{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(TestKit$$Lambda$lambda$assertUnmodifiableList$16$36::*)(Object$*)>(&TestKit$$Lambda$lambda$assertUnmodifiableList$16$36::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestKit$$Lambda$lambda$assertUnmodifiableList$16$36::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestKit$$Lambda$lambda$assertUnmodifiableList$16$36",
	"java.lang.Object",
	"java.util.function.UnaryOperator",
	fieldInfos,
	methodInfos
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableList$16$36::load$($String* name, bool initialize) {
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableList$16$36, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableList$16$36::class$ = nullptr;

class TestKit$$Lambda$lambda$assertUnmodifiableCollection$6$37 : public $Predicate {
	$class(TestKit$$Lambda$lambda$assertUnmodifiableCollection$6$37, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* x) override {
		 return TestKit::lambda$assertUnmodifiableCollection$6(x);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestKit$$Lambda$lambda$assertUnmodifiableCollection$6$37>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestKit$$Lambda$lambda$assertUnmodifiableCollection$6$37::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestKit$$Lambda$lambda$assertUnmodifiableCollection$6$37::*)()>(&TestKit$$Lambda$lambda$assertUnmodifiableCollection$6$37::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestKit$$Lambda$lambda$assertUnmodifiableCollection$6$37::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestKit$$Lambda$lambda$assertUnmodifiableCollection$6$37",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* TestKit$$Lambda$lambda$assertUnmodifiableCollection$6$37::load$($String* name, bool initialize) {
	$loadClass(TestKit$$Lambda$lambda$assertUnmodifiableCollection$6$37, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestKit$$Lambda$lambda$assertUnmodifiableCollection$6$37::class$ = nullptr;

$MethodInfo _TestKit_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(TestKit::*)()>(&TestKit::init$))},
	{"assertNotThrows", "(LTestKit$ThrowingProcedure;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($TestKit$ThrowingProcedure*)>(&TestKit::assertNotThrows))},
	{"assertNotThrows", "(LTestKit$ThrowingFunction;)Ljava/lang/Object;", "<V:Ljava/lang/Object;>(LTestKit$ThrowingFunction<TV;>;)TV;", $PUBLIC | $STATIC, $method(static_cast<$Object*(*)($TestKit$ThrowingFunction*)>(&TestKit::assertNotThrows))},
	{"assertThrows", "(Ljava/lang/Class;LTestKit$ThrowingProcedure;)Ljava/lang/Throwable;", "<T:Ljava/lang/Throwable;>(Ljava/lang/Class<TT;>;LTestKit$ThrowingProcedure;)TT;", $PUBLIC | $STATIC, $method(static_cast<$Throwable*(*)($Class*,$TestKit$ThrowingProcedure*)>(&TestKit::assertThrows))},
	{"assertThrows", "(Ljava/lang/Class;Ljava/lang/String;LTestKit$ThrowingProcedure;)Ljava/lang/Throwable;", "<T:Ljava/lang/Throwable;>(Ljava/lang/Class<TT;>;Ljava/lang/String;LTestKit$ThrowingProcedure;)TT;", $PUBLIC | $STATIC, $method(static_cast<$Throwable*(*)($Class*,$String*,$TestKit$ThrowingProcedure*)>(&TestKit::assertThrows))},
	{"assertUOE", "(LTestKit$ThrowingProcedure;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($TestKit$ThrowingProcedure*)>(&TestKit::assertUOE))},
	{"assertUnmodifiableCollection", "(Ljava/util/Collection;)V", "(Ljava/util/Collection<*>;)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($Collection*)>(&TestKit::assertUnmodifiableCollection))},
	{"assertUnmodifiableCollection", "(Ljava/util/Collection;Ljava/util/function/Supplier;)V", "<E:Ljava/lang/Object;>(Ljava/util/Collection<TE;>;Ljava/util/function/Supplier<+TE;>;)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($Collection*,$Supplier*)>(&TestKit::assertUnmodifiableCollection))},
	{"assertUnmodifiableList", "(Ljava/util/List;)V", "(Ljava/util/List<*>;)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($List*)>(&TestKit::assertUnmodifiableList))},
	{"assertUnmodifiableList", "(Ljava/util/List;Ljava/util/function/Supplier;)V", "<E:Ljava/lang/Object;>(Ljava/util/List<TE;>;Ljava/util/function/Supplier<+TE;>;)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($List*,$Supplier*)>(&TestKit::assertUnmodifiableList))},
	{"assertUnmodifiableList", "(Ljava/util/List;Ljava/util/function/Supplier;I)V", "<E:Ljava/lang/Object;>(Ljava/util/List<TE;>;Ljava/util/function/Supplier<+TE;>;I)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($List*,$Supplier*,int32_t)>(&TestKit::assertUnmodifiableList))},
	{"assertUnmodifiableMap", "(Ljava/util/Map;)V", "(Ljava/util/Map<**>;)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($Map*)>(&TestKit::assertUnmodifiableMap))},
	{"assertUnmodifiableMap", "(Ljava/util/Map;Ljava/util/function/Supplier;)V", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>(Ljava/util/Map<TK;TV;>;Ljava/util/function/Supplier<+Ljava/util/Map$Entry<+TK;+TV;>;>;)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($Map*,$Supplier*)>(&TestKit::assertUnmodifiableMap))},
	{"assertUnmodifiableSet", "(Ljava/util/Set;)V", "(Ljava/util/Set<*>;)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($Set*)>(&TestKit::assertUnmodifiableSet))},
	{"assertUnmodifiableSet", "(Ljava/util/Set;Ljava/util/function/Supplier;)V", "<E:Ljava/lang/Object;>(Ljava/util/Set<TE;>;Ljava/util/function/Supplier<+TE;>;)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($Set*,$Supplier*)>(&TestKit::assertUnmodifiableSet))},
	{"lambda$assertNotThrows$0", "(LTestKit$ThrowingProcedure;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($TestKit$ThrowingProcedure*)>(&TestKit::lambda$assertNotThrows$0)), "java.lang.Throwable"},
	{"lambda$assertUnmodifiableCollection$1", "()Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)()>(&TestKit::lambda$assertUnmodifiableCollection$1))},
	{"lambda$assertUnmodifiableCollection$2", "(Ljava/util/Collection;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($Collection*,Object$*)>(&TestKit::lambda$assertUnmodifiableCollection$2)), "java.lang.Throwable"},
	{"lambda$assertUnmodifiableCollection$3", "(Ljava/util/Collection;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($Collection*,Object$*)>(&TestKit::lambda$assertUnmodifiableCollection$3)), "java.lang.Throwable"},
	{"lambda$assertUnmodifiableCollection$4", "(Ljava/util/Collection;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($Collection*,Object$*)>(&TestKit::lambda$assertUnmodifiableCollection$4)), "java.lang.Throwable"},
	{"lambda$assertUnmodifiableCollection$5", "(Ljava/util/Collection;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($Collection*,Object$*)>(&TestKit::lambda$assertUnmodifiableCollection$5)), "java.lang.Throwable"},
	{"lambda$assertUnmodifiableCollection$6", "(Ljava/lang/Object;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)(Object$*)>(&TestKit::lambda$assertUnmodifiableCollection$6))},
	{"lambda$assertUnmodifiableCollection$7", "(Ljava/util/Collection;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($Collection*)>(&TestKit::lambda$assertUnmodifiableCollection$7)), "java.lang.Throwable"},
	{"lambda$assertUnmodifiableCollection$8", "(Ljava/util/Collection;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($Collection*)>(&TestKit::lambda$assertUnmodifiableCollection$8)), "java.lang.Throwable"},
	{"lambda$assertUnmodifiableList$11", "(Ljava/util/List;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($List*,Object$*)>(&TestKit::lambda$assertUnmodifiableList$11)), "java.lang.Throwable"},
	{"lambda$assertUnmodifiableList$12", "(Ljava/util/List;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($List*,Object$*)>(&TestKit::lambda$assertUnmodifiableList$12)), "java.lang.Throwable"},
	{"lambda$assertUnmodifiableList$13", "(Ljava/util/ListIterator;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($ListIterator*,Object$*)>(&TestKit::lambda$assertUnmodifiableList$13)), "java.lang.Throwable"},
	{"lambda$assertUnmodifiableList$14", "(Ljava/util/ListIterator;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($ListIterator*,Object$*)>(&TestKit::lambda$assertUnmodifiableList$14)), "java.lang.Throwable"},
	{"lambda$assertUnmodifiableList$15", "(Ljava/util/List;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($List*)>(&TestKit::lambda$assertUnmodifiableList$15)), "java.lang.Throwable"},
	{"lambda$assertUnmodifiableList$16", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)(Object$*,Object$*)>(&TestKit::lambda$assertUnmodifiableList$16))},
	{"lambda$assertUnmodifiableList$17", "(Ljava/util/List;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($List*,Object$*)>(&TestKit::lambda$assertUnmodifiableList$17)), "java.lang.Throwable"},
	{"lambda$assertUnmodifiableList$18", "(Ljava/util/List;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($List*,Object$*)>(&TestKit::lambda$assertUnmodifiableList$18)), "java.lang.Throwable"},
	{"lambda$assertUnmodifiableList$19", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<int32_t(*)(Object$*,Object$*)>(&TestKit::lambda$assertUnmodifiableList$19))},
	{"lambda$assertUnmodifiableList$20", "(Ljava/util/List;Ljava/util/Comparator;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($List*,$Comparator*)>(&TestKit::lambda$assertUnmodifiableList$20)), "java.lang.Throwable"},
	{"lambda$assertUnmodifiableMap$21", "()Ljava/util/Map$Entry;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Map$Entry*(*)()>(&TestKit::lambda$assertUnmodifiableMap$21))},
	{"lambda$assertUnmodifiableMap$22", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)(Object$*,Object$*,Object$*)>(&TestKit::lambda$assertUnmodifiableMap$22))},
	{"lambda$assertUnmodifiableMap$23", "(Ljava/util/Map;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($Map*,Object$*,Object$*)>(&TestKit::lambda$assertUnmodifiableMap$23)), "java.lang.Throwable"},
	{"lambda$assertUnmodifiableMap$25", "(Ljava/util/Map;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($Map*,Object$*,Object$*)>(&TestKit::lambda$assertUnmodifiableMap$25)), "java.lang.Throwable"},
	{"lambda$assertUnmodifiableMap$27", "(Ljava/util/Map;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($Map*,Object$*,Object$*)>(&TestKit::lambda$assertUnmodifiableMap$27)), "java.lang.Throwable"},
	{"lambda$assertUnmodifiableMap$28", "(Ljava/util/Map$Entry;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($Map$Entry*)>(&TestKit::lambda$assertUnmodifiableMap$28)), "java.lang.Throwable"},
	{"lambda$assertUnmodifiableMap$30", "(Ljava/util/Map;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($Map*,Object$*,Object$*)>(&TestKit::lambda$assertUnmodifiableMap$30)), "java.lang.Throwable"},
	{"lambda$assertUnmodifiableMap$31", "(Ljava/util/Map;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($Map*,Object$*,Object$*)>(&TestKit::lambda$assertUnmodifiableMap$31)), "java.lang.Throwable"},
	{"lambda$assertUnmodifiableMap$32", "(Ljava/util/Map;Ljava/util/Map;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($Map*,$Map*)>(&TestKit::lambda$assertUnmodifiableMap$32)), "java.lang.Throwable"},
	{"lambda$assertUnmodifiableMap$33", "(Ljava/util/Map;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($Map*,Object$*,Object$*)>(&TestKit::lambda$assertUnmodifiableMap$33)), "java.lang.Throwable"},
	{"lambda$assertUnmodifiableMap$34", "(Ljava/util/Map;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($Map*,Object$*)>(&TestKit::lambda$assertUnmodifiableMap$34)), "java.lang.Throwable"},
	{"lambda$assertUnmodifiableMap$35", "(Ljava/util/Map;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($Map*,Object$*,Object$*)>(&TestKit::lambda$assertUnmodifiableMap$35)), "java.lang.Throwable"},
	{"lambda$assertUnmodifiableMap$36", "(Ljava/util/Map;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($Map*,Object$*,Object$*)>(&TestKit::lambda$assertUnmodifiableMap$36)), "java.lang.Throwable"},
	{"lambda$assertUnmodifiableMap$37", "(Ljava/util/Map;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($Map*,Object$*,Object$*)>(&TestKit::lambda$assertUnmodifiableMap$37)), "java.lang.Throwable"},
	{"lambda$assertUnmodifiableMap$39", "(Ljava/util/Map;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($Map*,Object$*)>(&TestKit::lambda$assertUnmodifiableMap$39)), "java.lang.Throwable"},
	{}
};

$InnerClassInfo _TestKit_InnerClassesInfo_[] = {
	{"TestKit$ThrowingFunction", "TestKit", "ThrowingFunction", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"TestKit$ThrowingProcedure", "TestKit", "ThrowingProcedure", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _TestKit_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"TestKit",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestKit_MethodInfo_,
	nullptr,
	nullptr,
	_TestKit_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TestKit$ThrowingFunction,TestKit$ThrowingProcedure"
};

$Object* allocate$TestKit($Class* clazz) {
	return $of($alloc(TestKit));
}

void TestKit::init$() {
}

void TestKit::assertNotThrows($TestKit$ThrowingProcedure* code) {
	$Objects::requireNonNull($of(code), "code"_s);
	assertNotThrows(static_cast<$TestKit$ThrowingFunction*>($$new(TestKit$$Lambda$lambda$assertNotThrows$0, code)));
}

$Object* TestKit::assertNotThrows($TestKit$ThrowingFunction* code) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull($of(code), "code"_s);
	try {
		return $of($nc(code)->run());
	} catch ($Throwable& t) {
		$throwNew($RuntimeException, $$str({"Expected to run normally, but threw "_s, $($of(t)->getClass()->getCanonicalName())}), t);
	}
	$shouldNotReachHere();
}

$Throwable* TestKit::assertThrows($Class* clazz, $TestKit$ThrowingProcedure* code) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull($of(clazz), "clazz"_s);
	$Objects::requireNonNull($of(code), "code"_s);
	try {
		$nc(code)->run();
	} catch ($Throwable& t) {
		if ($nc(clazz)->isInstance(t)) {
			return $cast($Throwable, clazz->cast(t));
		}
		$var($String, var$0, $$str({"Expected to catch an exception of type "_s, $($nc(clazz)->getCanonicalName()), ", but caught "_s}));
		$throwNew($RuntimeException, $$concat(var$0, $($of(t)->getClass()->getCanonicalName())), t);
	}
	$throwNew($RuntimeException, $$str({"Expected to catch an exception of type "_s, $($nc(clazz)->getCanonicalName()), ", but caught nothing"_s}));
	$shouldNotReachHere();
}

$Throwable* TestKit::assertThrows($Class* clazz, $String* messageRegex, $TestKit$ThrowingProcedure* code) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull($of(messageRegex), "messagePattern"_s);
	$var($Throwable, t, assertThrows(clazz, code));
	$var($String, m, $nc(t)->getMessage());
	if (m == nullptr) {
		$throwNew($RuntimeException, $($String::format("Expected exception message to match the regex \'%s\', but the message was null"_s, $$new($ObjectArray, {$of(messageRegex)}))), t);
	}
	if (!$Pattern::matches(messageRegex, m)) {
		$throwNew($RuntimeException, $($String::format("Expected exception message to match the regex \'%s\', actual message: %s"_s, $$new($ObjectArray, {
			$of(messageRegex),
			$of(m)
		}))), t);
	}
	return t;
}

void TestKit::assertUnmodifiableCollection($Collection* collection) {
	assertUnmodifiableCollection(collection, static_cast<$Supplier*>($$new(TestKit$$Lambda$lambda$assertUnmodifiableCollection$1$1)));
}

void TestKit::assertUnmodifiableCollection($Collection* collection, $Supplier* elementsFactory) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull($of(collection), "collection"_s);
	$Objects::requireNonNull($of(elementsFactory), "elementsFactory"_s);
	$var($Object, e, $nc(elementsFactory)->get());
	assertUOE(static_cast<$TestKit$ThrowingProcedure*>($$new(TestKit$$Lambda$lambda$assertUnmodifiableCollection$2$2, collection, e)));
	assertUOE(static_cast<$TestKit$ThrowingProcedure*>($$new(TestKit$$Lambda$lambda$assertUnmodifiableCollection$3$3, collection, e)));
	$var($Iterator, i, $nc(collection)->iterator());
	if ($nc(i)->hasNext()) {
		i->next();
		assertUOE(static_cast<$TestKit$ThrowingProcedure*>($$new(TestKit$$Lambda$remove$4, static_cast<$Iterator*>(i))));
	}
	assertUOE(static_cast<$TestKit$ThrowingProcedure*>($$new(TestKit$$Lambda$clear$5, static_cast<$Collection*>(collection))));
	assertUOE(static_cast<$TestKit$ThrowingProcedure*>($$new(TestKit$$Lambda$lambda$assertUnmodifiableCollection$4$6, collection, e)));
	assertUOE(static_cast<$TestKit$ThrowingProcedure*>($$new(TestKit$$Lambda$lambda$assertUnmodifiableCollection$5$7, collection, e)));
	assertUOE(static_cast<$TestKit$ThrowingProcedure*>($$new(TestKit$$Lambda$lambda$assertUnmodifiableCollection$7$8, collection)));
	assertUOE(static_cast<$TestKit$ThrowingProcedure*>($$new(TestKit$$Lambda$lambda$assertUnmodifiableCollection$8$9, collection)));
}

void TestKit::assertUnmodifiableSet($Set* set) {
	assertUnmodifiableCollection(set, static_cast<$Supplier*>($$new(TestKit$$Lambda$lambda$assertUnmodifiableCollection$1$1)));
}

void TestKit::assertUnmodifiableSet($Set* set, $Supplier* elementsFactory) {
	assertUnmodifiableCollection(set, elementsFactory);
}

void TestKit::assertUnmodifiableList($List* list) {
	assertUnmodifiableList(list, static_cast<$Supplier*>($$new(TestKit$$Lambda$lambda$assertUnmodifiableCollection$1$1)));
}

void TestKit::assertUnmodifiableList($List* list, $Supplier* elementsFactory) {
	assertUnmodifiableList(list, elementsFactory, 3);
}

void TestKit::assertUnmodifiableList($List* list, $Supplier* elementsFactory, int32_t depth) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull($of(list), "list"_s);
	$Objects::requireNonNull($of(elementsFactory), "elementsFactory"_s);
	if (depth < 0) {
		$throwNew($IllegalArgumentException, $$str({"depth: "_s, $$str(depth)}));
	}
	if (depth == 0) {
		return;
	}
	$var($Object, e, $nc(elementsFactory)->get());
	assertUnmodifiableCollection(list, elementsFactory);
	assertUOE(static_cast<$TestKit$ThrowingProcedure*>($$new(TestKit$$Lambda$lambda$assertUnmodifiableList$11$10, list, e)));
	assertUOE(static_cast<$TestKit$ThrowingProcedure*>($$new(TestKit$$Lambda$lambda$assertUnmodifiableList$12$11, list, e)));
	$var($ListIterator, i, $nc(list)->listIterator());
	if ($nc(i)->hasNext()) {
		i->next();
		assertUOE(static_cast<$TestKit$ThrowingProcedure*>($$new(TestKit$$Lambda$remove$12, static_cast<$ListIterator*>(i))));
		assertUOE(static_cast<$TestKit$ThrowingProcedure*>($$new(TestKit$$Lambda$lambda$assertUnmodifiableList$13$13, i, e)));
		assertUOE(static_cast<$TestKit$ThrowingProcedure*>($$new(TestKit$$Lambda$lambda$assertUnmodifiableList$14$14, i, e)));
	}
	assertUOE(static_cast<$TestKit$ThrowingProcedure*>($$new(TestKit$$Lambda$lambda$assertUnmodifiableList$15$15, list)));
	assertUOE(static_cast<$TestKit$ThrowingProcedure*>($$new(TestKit$$Lambda$lambda$assertUnmodifiableList$17$16, list, e)));
	assertUOE(static_cast<$TestKit$ThrowingProcedure*>($$new(TestKit$$Lambda$lambda$assertUnmodifiableList$18$17, list, e)));
	$var($Comparator, comparator, static_cast<$Comparator*>($new(TestKit$$Lambda$lambda$assertUnmodifiableList$19$18)));
	assertUOE(static_cast<$TestKit$ThrowingProcedure*>($$new(TestKit$$Lambda$lambda$assertUnmodifiableList$20$19, list, comparator)));
	assertUnmodifiableList($(list->subList(0, list->size())), elementsFactory, depth - 1);
}

void TestKit::assertUnmodifiableMap($Map* map) {
	assertUnmodifiableMap(map, static_cast<$Supplier*>($$new(TestKit$$Lambda$lambda$assertUnmodifiableMap$21$20)));
}

void TestKit::assertUnmodifiableMap($Map* map, $Supplier* entriesFactory) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull($of(map), "map"_s);
	$Objects::requireNonNull($of(entriesFactory), "entriesFactory"_s);
	assertUOE(static_cast<$TestKit$ThrowingProcedure*>($$new(TestKit$$Lambda$clear$21, static_cast<$Map*>($nc(map)))));
	$var($Map$Entry, e1, $cast($Map$Entry, $nc(entriesFactory)->get()));
	$var($Object, k, $nc(e1)->getKey());
	$var($Object, v, e1->getValue());
	assertUOE(static_cast<$TestKit$ThrowingProcedure*>($$new(TestKit$$Lambda$lambda$assertUnmodifiableMap$23$22, map, k, v)));
	assertUOE(static_cast<$TestKit$ThrowingProcedure*>($$new(TestKit$$Lambda$lambda$assertUnmodifiableMap$25$23, map, k, v)));
	assertUOE(static_cast<$TestKit$ThrowingProcedure*>($$new(TestKit$$Lambda$lambda$assertUnmodifiableMap$27$24, map, k, v)));
	$var($Set, entrySet, $nc(map)->entrySet());
	assertUnmodifiableSet(entrySet);
	{
		$var($Iterator, i$, $nc(entrySet)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, e, $cast($Map$Entry, i$->next()));
			{
				assertUOE(static_cast<$TestKit$ThrowingProcedure*>($$new(TestKit$$Lambda$lambda$assertUnmodifiableMap$28$25, e)));
			}
		}
	}
	assertUnmodifiableSet($(map->keySet()));
	assertUOE(static_cast<$TestKit$ThrowingProcedure*>($$new(TestKit$$Lambda$lambda$assertUnmodifiableMap$30$26, map, k, v)));
	assertUOE(static_cast<$TestKit$ThrowingProcedure*>($$new(TestKit$$Lambda$lambda$assertUnmodifiableMap$31$27, map, k, v)));
	$var($Map, m, $new($HashMap));
	m->put(k, v);
	assertUOE(static_cast<$TestKit$ThrowingProcedure*>($$new(TestKit$$Lambda$lambda$assertUnmodifiableMap$32$28, map, m)));
	assertUOE(static_cast<$TestKit$ThrowingProcedure*>($$new(TestKit$$Lambda$lambda$assertUnmodifiableMap$33$29, map, k, v)));
	assertUOE(static_cast<$TestKit$ThrowingProcedure*>($$new(TestKit$$Lambda$lambda$assertUnmodifiableMap$34$30, map, k)));
	assertUOE(static_cast<$TestKit$ThrowingProcedure*>($$new(TestKit$$Lambda$lambda$assertUnmodifiableMap$35$31, map, k, v)));
	assertUOE(static_cast<$TestKit$ThrowingProcedure*>($$new(TestKit$$Lambda$lambda$assertUnmodifiableMap$36$32, map, k, v)));
	assertUOE(static_cast<$TestKit$ThrowingProcedure*>($$new(TestKit$$Lambda$lambda$assertUnmodifiableMap$37$33, map, k, v)));
	assertUOE(static_cast<$TestKit$ThrowingProcedure*>($$new(TestKit$$Lambda$lambda$assertUnmodifiableMap$39$34, map, v)));
	assertUnmodifiableCollection($(map->values()));
}

void TestKit::assertUOE($TestKit$ThrowingProcedure* code) {
	$load($UnsupportedOperationException);
	assertThrows($UnsupportedOperationException::class$, code);
}

void TestKit::lambda$assertUnmodifiableMap$39($Map* map, Object$* v) {
	$nc(map)->replaceAll(static_cast<$BiFunction*>($$new(TestKit$$Lambda$lambda$assertUnmodifiableMap$22$35, v)));
}

void TestKit::lambda$assertUnmodifiableMap$37($Map* map, Object$* k, Object$* v) {
	$nc(map)->replace(k, v, v);
}

void TestKit::lambda$assertUnmodifiableMap$36($Map* map, Object$* k, Object$* v) {
	$nc(map)->replace(k, v);
}

void TestKit::lambda$assertUnmodifiableMap$35($Map* map, Object$* k, Object$* v) {
	$nc(map)->remove(k, v);
}

void TestKit::lambda$assertUnmodifiableMap$34($Map* map, Object$* k) {
	$nc(map)->remove(k);
}

void TestKit::lambda$assertUnmodifiableMap$33($Map* map, Object$* k, Object$* v) {
	$nc(map)->putIfAbsent(k, v);
}

void TestKit::lambda$assertUnmodifiableMap$32($Map* map, $Map* m) {
	$nc(map)->putAll(m);
}

void TestKit::lambda$assertUnmodifiableMap$31($Map* map, Object$* k, Object$* v) {
	$nc(map)->put(k, v);
}

void TestKit::lambda$assertUnmodifiableMap$30($Map* map, Object$* k, Object$* v) {
	$nc(map)->merge(k, v, static_cast<$BiFunction*>($$new(TestKit$$Lambda$lambda$assertUnmodifiableMap$22$35, v)));
}

void TestKit::lambda$assertUnmodifiableMap$28($Map$Entry* e) {
	$nc(e)->setValue(nullptr);
}

void TestKit::lambda$assertUnmodifiableMap$27($Map* map, Object$* k, Object$* v) {
	$nc(map)->computeIfPresent(k, static_cast<$BiFunction*>($$new(TestKit$$Lambda$lambda$assertUnmodifiableMap$22$35, v)));
}

void TestKit::lambda$assertUnmodifiableMap$25($Map* map, Object$* k, Object$* v) {
	$nc(map)->computeIfAbsent(k, static_cast<$Function*>($$new(TestKit$$Lambda$lambda$assertUnmodifiableList$16$36, v)));
}

void TestKit::lambda$assertUnmodifiableMap$23($Map* map, Object$* k, Object$* v) {
	$nc(map)->compute(k, static_cast<$BiFunction*>($$new(TestKit$$Lambda$lambda$assertUnmodifiableMap$22$35, v)));
}

$Object* TestKit::lambda$assertUnmodifiableMap$22(Object$* v, Object$* k1, Object$* v1) {
	return $of(v);
}

$Map$Entry* TestKit::lambda$assertUnmodifiableMap$21() {
	return $new($AbstractMap$SimpleImmutableEntry, nullptr, nullptr);
}

void TestKit::lambda$assertUnmodifiableList$20($List* list, $Comparator* comparator) {
	$nc(list)->sort(comparator);
}

int32_t TestKit::lambda$assertUnmodifiableList$19(Object$* a, Object$* b) {
	return $Objects::hash($$new($ObjectArray, {
		a,
		b
	}));
}

void TestKit::lambda$assertUnmodifiableList$18($List* list, Object$* e) {
	$nc(list)->set(0, e);
}

void TestKit::lambda$assertUnmodifiableList$17($List* list, Object$* e) {
	$nc(list)->replaceAll(static_cast<$UnaryOperator*>($$new(TestKit$$Lambda$lambda$assertUnmodifiableList$16$36, e)));
}

$Object* TestKit::lambda$assertUnmodifiableList$16(Object$* e, Object$* x) {
	return $of(e);
}

void TestKit::lambda$assertUnmodifiableList$15($List* list) {
	$nc(list)->remove(0);
}

void TestKit::lambda$assertUnmodifiableList$14($ListIterator* i, Object$* e) {
	$nc(i)->add(e);
}

void TestKit::lambda$assertUnmodifiableList$13($ListIterator* i, Object$* e) {
	$nc(i)->set(e);
}

void TestKit::lambda$assertUnmodifiableList$12($List* list, Object$* e) {
	$nc(list)->addAll(0, $($Collections::singleton(e)));
}

void TestKit::lambda$assertUnmodifiableList$11($List* list, Object$* e) {
	$nc(list)->add(0, e);
}

void TestKit::lambda$assertUnmodifiableCollection$8($Collection* collection) {
	$nc(collection)->retainAll($($Collections::emptyList()));
}

void TestKit::lambda$assertUnmodifiableCollection$7($Collection* collection) {
	$nc(collection)->removeIf(static_cast<$Predicate*>($$new(TestKit$$Lambda$lambda$assertUnmodifiableCollection$6$37)));
}

bool TestKit::lambda$assertUnmodifiableCollection$6(Object$* x) {
	return true;
}

void TestKit::lambda$assertUnmodifiableCollection$5($Collection* collection, Object$* e) {
	$nc(collection)->removeAll($($Collections::singleton(e)));
}

void TestKit::lambda$assertUnmodifiableCollection$4($Collection* collection, Object$* e) {
	$nc(collection)->remove(e);
}

void TestKit::lambda$assertUnmodifiableCollection$3($Collection* collection, Object$* e) {
	$nc(collection)->addAll($($Collections::singleton(e)));
}

void TestKit::lambda$assertUnmodifiableCollection$2($Collection* collection, Object$* e) {
	$nc(collection)->add(e);
}

$Object* TestKit::lambda$assertUnmodifiableCollection$1() {
	return $of(nullptr);
}

$Object* TestKit::lambda$assertNotThrows$0($TestKit$ThrowingProcedure* code) {
	$nc(code)->run();
	return $of(nullptr);
}

TestKit::TestKit() {
}

$Class* TestKit::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TestKit$$Lambda$lambda$assertNotThrows$0::classInfo$.name)) {
			return TestKit$$Lambda$lambda$assertNotThrows$0::load$(name, initialize);
		}
		if (name->equals(TestKit$$Lambda$lambda$assertUnmodifiableCollection$1$1::classInfo$.name)) {
			return TestKit$$Lambda$lambda$assertUnmodifiableCollection$1$1::load$(name, initialize);
		}
		if (name->equals(TestKit$$Lambda$lambda$assertUnmodifiableCollection$2$2::classInfo$.name)) {
			return TestKit$$Lambda$lambda$assertUnmodifiableCollection$2$2::load$(name, initialize);
		}
		if (name->equals(TestKit$$Lambda$lambda$assertUnmodifiableCollection$3$3::classInfo$.name)) {
			return TestKit$$Lambda$lambda$assertUnmodifiableCollection$3$3::load$(name, initialize);
		}
		if (name->equals(TestKit$$Lambda$remove$4::classInfo$.name)) {
			return TestKit$$Lambda$remove$4::load$(name, initialize);
		}
		if (name->equals(TestKit$$Lambda$clear$5::classInfo$.name)) {
			return TestKit$$Lambda$clear$5::load$(name, initialize);
		}
		if (name->equals(TestKit$$Lambda$lambda$assertUnmodifiableCollection$4$6::classInfo$.name)) {
			return TestKit$$Lambda$lambda$assertUnmodifiableCollection$4$6::load$(name, initialize);
		}
		if (name->equals(TestKit$$Lambda$lambda$assertUnmodifiableCollection$5$7::classInfo$.name)) {
			return TestKit$$Lambda$lambda$assertUnmodifiableCollection$5$7::load$(name, initialize);
		}
		if (name->equals(TestKit$$Lambda$lambda$assertUnmodifiableCollection$7$8::classInfo$.name)) {
			return TestKit$$Lambda$lambda$assertUnmodifiableCollection$7$8::load$(name, initialize);
		}
		if (name->equals(TestKit$$Lambda$lambda$assertUnmodifiableCollection$8$9::classInfo$.name)) {
			return TestKit$$Lambda$lambda$assertUnmodifiableCollection$8$9::load$(name, initialize);
		}
		if (name->equals(TestKit$$Lambda$lambda$assertUnmodifiableList$11$10::classInfo$.name)) {
			return TestKit$$Lambda$lambda$assertUnmodifiableList$11$10::load$(name, initialize);
		}
		if (name->equals(TestKit$$Lambda$lambda$assertUnmodifiableList$12$11::classInfo$.name)) {
			return TestKit$$Lambda$lambda$assertUnmodifiableList$12$11::load$(name, initialize);
		}
		if (name->equals(TestKit$$Lambda$remove$12::classInfo$.name)) {
			return TestKit$$Lambda$remove$12::load$(name, initialize);
		}
		if (name->equals(TestKit$$Lambda$lambda$assertUnmodifiableList$13$13::classInfo$.name)) {
			return TestKit$$Lambda$lambda$assertUnmodifiableList$13$13::load$(name, initialize);
		}
		if (name->equals(TestKit$$Lambda$lambda$assertUnmodifiableList$14$14::classInfo$.name)) {
			return TestKit$$Lambda$lambda$assertUnmodifiableList$14$14::load$(name, initialize);
		}
		if (name->equals(TestKit$$Lambda$lambda$assertUnmodifiableList$15$15::classInfo$.name)) {
			return TestKit$$Lambda$lambda$assertUnmodifiableList$15$15::load$(name, initialize);
		}
		if (name->equals(TestKit$$Lambda$lambda$assertUnmodifiableList$17$16::classInfo$.name)) {
			return TestKit$$Lambda$lambda$assertUnmodifiableList$17$16::load$(name, initialize);
		}
		if (name->equals(TestKit$$Lambda$lambda$assertUnmodifiableList$18$17::classInfo$.name)) {
			return TestKit$$Lambda$lambda$assertUnmodifiableList$18$17::load$(name, initialize);
		}
		if (name->equals(TestKit$$Lambda$lambda$assertUnmodifiableList$19$18::classInfo$.name)) {
			return TestKit$$Lambda$lambda$assertUnmodifiableList$19$18::load$(name, initialize);
		}
		if (name->equals(TestKit$$Lambda$lambda$assertUnmodifiableList$20$19::classInfo$.name)) {
			return TestKit$$Lambda$lambda$assertUnmodifiableList$20$19::load$(name, initialize);
		}
		if (name->equals(TestKit$$Lambda$lambda$assertUnmodifiableMap$21$20::classInfo$.name)) {
			return TestKit$$Lambda$lambda$assertUnmodifiableMap$21$20::load$(name, initialize);
		}
		if (name->equals(TestKit$$Lambda$clear$21::classInfo$.name)) {
			return TestKit$$Lambda$clear$21::load$(name, initialize);
		}
		if (name->equals(TestKit$$Lambda$lambda$assertUnmodifiableMap$23$22::classInfo$.name)) {
			return TestKit$$Lambda$lambda$assertUnmodifiableMap$23$22::load$(name, initialize);
		}
		if (name->equals(TestKit$$Lambda$lambda$assertUnmodifiableMap$25$23::classInfo$.name)) {
			return TestKit$$Lambda$lambda$assertUnmodifiableMap$25$23::load$(name, initialize);
		}
		if (name->equals(TestKit$$Lambda$lambda$assertUnmodifiableMap$27$24::classInfo$.name)) {
			return TestKit$$Lambda$lambda$assertUnmodifiableMap$27$24::load$(name, initialize);
		}
		if (name->equals(TestKit$$Lambda$lambda$assertUnmodifiableMap$28$25::classInfo$.name)) {
			return TestKit$$Lambda$lambda$assertUnmodifiableMap$28$25::load$(name, initialize);
		}
		if (name->equals(TestKit$$Lambda$lambda$assertUnmodifiableMap$30$26::classInfo$.name)) {
			return TestKit$$Lambda$lambda$assertUnmodifiableMap$30$26::load$(name, initialize);
		}
		if (name->equals(TestKit$$Lambda$lambda$assertUnmodifiableMap$31$27::classInfo$.name)) {
			return TestKit$$Lambda$lambda$assertUnmodifiableMap$31$27::load$(name, initialize);
		}
		if (name->equals(TestKit$$Lambda$lambda$assertUnmodifiableMap$32$28::classInfo$.name)) {
			return TestKit$$Lambda$lambda$assertUnmodifiableMap$32$28::load$(name, initialize);
		}
		if (name->equals(TestKit$$Lambda$lambda$assertUnmodifiableMap$33$29::classInfo$.name)) {
			return TestKit$$Lambda$lambda$assertUnmodifiableMap$33$29::load$(name, initialize);
		}
		if (name->equals(TestKit$$Lambda$lambda$assertUnmodifiableMap$34$30::classInfo$.name)) {
			return TestKit$$Lambda$lambda$assertUnmodifiableMap$34$30::load$(name, initialize);
		}
		if (name->equals(TestKit$$Lambda$lambda$assertUnmodifiableMap$35$31::classInfo$.name)) {
			return TestKit$$Lambda$lambda$assertUnmodifiableMap$35$31::load$(name, initialize);
		}
		if (name->equals(TestKit$$Lambda$lambda$assertUnmodifiableMap$36$32::classInfo$.name)) {
			return TestKit$$Lambda$lambda$assertUnmodifiableMap$36$32::load$(name, initialize);
		}
		if (name->equals(TestKit$$Lambda$lambda$assertUnmodifiableMap$37$33::classInfo$.name)) {
			return TestKit$$Lambda$lambda$assertUnmodifiableMap$37$33::load$(name, initialize);
		}
		if (name->equals(TestKit$$Lambda$lambda$assertUnmodifiableMap$39$34::classInfo$.name)) {
			return TestKit$$Lambda$lambda$assertUnmodifiableMap$39$34::load$(name, initialize);
		}
		if (name->equals(TestKit$$Lambda$lambda$assertUnmodifiableMap$22$35::classInfo$.name)) {
			return TestKit$$Lambda$lambda$assertUnmodifiableMap$22$35::load$(name, initialize);
		}
		if (name->equals(TestKit$$Lambda$lambda$assertUnmodifiableList$16$36::classInfo$.name)) {
			return TestKit$$Lambda$lambda$assertUnmodifiableList$16$36::load$(name, initialize);
		}
		if (name->equals(TestKit$$Lambda$lambda$assertUnmodifiableCollection$6$37::classInfo$.name)) {
			return TestKit$$Lambda$lambda$assertUnmodifiableCollection$6$37::load$(name, initialize);
		}
	}
	$loadClass(TestKit, name, initialize, &_TestKit_ClassInfo_, allocate$TestKit);
	return class$;
}

$Class* TestKit::class$ = nullptr;