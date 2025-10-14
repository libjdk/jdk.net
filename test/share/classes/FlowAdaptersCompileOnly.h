#ifndef _FlowAdaptersCompileOnly_h_
#define _FlowAdaptersCompileOnly_h_
//$ class FlowAdaptersCompileOnly
//$ extends java.lang.Object

#include <java/lang/Object.h>

class FlowAdaptersCompileOnly$IntegerSubscriber;
class FlowAdaptersCompileOnly$ListSubscriber;
class FlowAdaptersCompileOnly$ListSubscriberX;
class FlowAdaptersCompileOnly$LongSubscriber;
class FlowAdaptersCompileOnly$NumberSubscriber;
namespace java {
	namespace lang {
		class Integer;
		class Long;
		class Number;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Function;
		}
	}
}

class $export FlowAdaptersCompileOnly : public ::java::lang::Object {
	$class(FlowAdaptersCompileOnly, 0, ::java::lang::Object)
public:
	FlowAdaptersCompileOnly();
	void init$();
	static ::java::lang::Integer* lambda$makesSureDifferentGenericFunctionSignaturesCompile$4(::FlowAdaptersCompileOnly$ListSubscriber* s);
	static ::java::lang::Number* lambda$makesSureDifferentGenericFunctionSignaturesCompile$5(::FlowAdaptersCompileOnly$ListSubscriber* s);
	static ::java::lang::Number* lambda$makesSureDifferentGenericSubscriberSignaturesCompile$11(Object$* sub);
	static ::java::lang::Integer* lambda$static$0(::FlowAdaptersCompileOnly$ListSubscriber* subscriber);
	static ::java::lang::Number* lambda$static$1(::FlowAdaptersCompileOnly$ListSubscriber* subscriber);
	static ::java::lang::Long* lambda$static$10(::FlowAdaptersCompileOnly$LongSubscriber* sub);
	static ::java::lang::Integer* lambda$static$2(::FlowAdaptersCompileOnly$ListSubscriberX* subscriber);
	static ::java::lang::Number* lambda$static$3(::FlowAdaptersCompileOnly$ListSubscriberX* subscriber);
	static ::java::lang::Number* lambda$static$8(::FlowAdaptersCompileOnly$NumberSubscriber* sub);
	static ::java::lang::Integer* lambda$static$9(::FlowAdaptersCompileOnly$IntegerSubscriber* sub);
	static void makesSureDifferentGenericFunctionSignaturesCompile();
	static void makesSureDifferentGenericSignaturesCompile();
	virtual void makesSureDifferentGenericSubscriberSignaturesCompile();
	static ::java::util::function::Function* f1;
	static ::java::util::function::Function* f2;
	static ::java::util::function::Function* f3;
	static ::java::util::function::Function* f4;
	static ::java::util::function::Function* numMapper;
	static ::java::util::function::Function* intMapper;
	static ::java::util::function::Function* longMapper;
};

#endif // _FlowAdaptersCompileOnly_h_