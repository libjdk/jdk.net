#ifndef _TestKit_h_
#define _TestKit_h_
//$ class TestKit
//$ extends java.lang.Object

#include <java/lang/Object.h>

class TestKit$ThrowingFunction;
class TestKit$ThrowingProcedure;
namespace java {
	namespace lang {
		class Throwable;
	}
}
namespace java {
	namespace util {
		class Collection;
		class Comparator;
		class List;
		class ListIterator;
		class Map;
		class Map$Entry;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Supplier;
		}
	}
}

class $export TestKit : public ::java::lang::Object {
	$class(TestKit, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestKit();
	void init$();
	static void assertNotThrows(::TestKit$ThrowingProcedure* code);
	static $Object* assertNotThrows(::TestKit$ThrowingFunction* code);
	static $Throwable* assertThrows($Class* clazz, ::TestKit$ThrowingProcedure* code);
	static $Throwable* assertThrows($Class* clazz, $String* messageRegex, ::TestKit$ThrowingProcedure* code);
	static void assertUOE(::TestKit$ThrowingProcedure* code);
	static void assertUnmodifiableCollection(::java::util::Collection* collection);
	static void assertUnmodifiableCollection(::java::util::Collection* collection, ::java::util::function::Supplier* elementsFactory);
	static void assertUnmodifiableList(::java::util::List* list);
	static void assertUnmodifiableList(::java::util::List* list, ::java::util::function::Supplier* elementsFactory);
	static void assertUnmodifiableList(::java::util::List* list, ::java::util::function::Supplier* elementsFactory, int32_t depth);
	static void assertUnmodifiableMap(::java::util::Map* map);
	static void assertUnmodifiableMap(::java::util::Map* map, ::java::util::function::Supplier* entriesFactory);
	static void assertUnmodifiableSet(::java::util::Set* set);
	static void assertUnmodifiableSet(::java::util::Set* set, ::java::util::function::Supplier* elementsFactory);
	static $Object* lambda$assertNotThrows$0(::TestKit$ThrowingProcedure* code);
	static $Object* lambda$assertUnmodifiableCollection$1();
	static void lambda$assertUnmodifiableCollection$2(::java::util::Collection* collection, Object$* e);
	static void lambda$assertUnmodifiableCollection$3(::java::util::Collection* collection, Object$* e);
	static void lambda$assertUnmodifiableCollection$4(::java::util::Collection* collection, Object$* e);
	static void lambda$assertUnmodifiableCollection$5(::java::util::Collection* collection, Object$* e);
	static bool lambda$assertUnmodifiableCollection$6(Object$* x);
	static void lambda$assertUnmodifiableCollection$7(::java::util::Collection* collection);
	static void lambda$assertUnmodifiableCollection$8(::java::util::Collection* collection);
	static void lambda$assertUnmodifiableList$11(::java::util::List* list, Object$* e);
	static void lambda$assertUnmodifiableList$12(::java::util::List* list, Object$* e);
	static void lambda$assertUnmodifiableList$13(::java::util::ListIterator* i, Object$* e);
	static void lambda$assertUnmodifiableList$14(::java::util::ListIterator* i, Object$* e);
	static void lambda$assertUnmodifiableList$15(::java::util::List* list);
	static $Object* lambda$assertUnmodifiableList$16(Object$* e, Object$* x);
	static void lambda$assertUnmodifiableList$17(::java::util::List* list, Object$* e);
	static void lambda$assertUnmodifiableList$18(::java::util::List* list, Object$* e);
	static int32_t lambda$assertUnmodifiableList$19(Object$* a, Object$* b);
	static void lambda$assertUnmodifiableList$20(::java::util::List* list, ::java::util::Comparator* comparator);
	static ::java::util::Map$Entry* lambda$assertUnmodifiableMap$21();
	static $Object* lambda$assertUnmodifiableMap$22(Object$* v, Object$* k1, Object$* v1);
	static void lambda$assertUnmodifiableMap$23(::java::util::Map* map, Object$* k, Object$* v);
	static void lambda$assertUnmodifiableMap$25(::java::util::Map* map, Object$* k, Object$* v);
	static void lambda$assertUnmodifiableMap$27(::java::util::Map* map, Object$* k, Object$* v);
	static void lambda$assertUnmodifiableMap$28(::java::util::Map$Entry* e);
	static void lambda$assertUnmodifiableMap$30(::java::util::Map* map, Object$* k, Object$* v);
	static void lambda$assertUnmodifiableMap$31(::java::util::Map* map, Object$* k, Object$* v);
	static void lambda$assertUnmodifiableMap$32(::java::util::Map* map, ::java::util::Map* m);
	static void lambda$assertUnmodifiableMap$33(::java::util::Map* map, Object$* k, Object$* v);
	static void lambda$assertUnmodifiableMap$34(::java::util::Map* map, Object$* k);
	static void lambda$assertUnmodifiableMap$35(::java::util::Map* map, Object$* k, Object$* v);
	static void lambda$assertUnmodifiableMap$36(::java::util::Map* map, Object$* k, Object$* v);
	static void lambda$assertUnmodifiableMap$37(::java::util::Map* map, Object$* k, Object$* v);
	static void lambda$assertUnmodifiableMap$39(::java::util::Map* map, Object$* v);
};

#endif // _TestKit_h_