#ifndef _LineAdaptersCompileOnly_h_
#define _LineAdaptersCompileOnly_h_
//$ class LineAdaptersCompileOnly
//$ extends java.lang.Object

#include <java/lang/Array.h>

class LineAdaptersCompileOnly$StringSubscriber;
class LineAdaptersCompileOnly$StringSubscriberX;
namespace java {
	namespace lang {
		class Integer;
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

class $export LineAdaptersCompileOnly : public ::java::lang::Object {
	$class(LineAdaptersCompileOnly, 0, ::java::lang::Object)
public:
	LineAdaptersCompileOnly();
	void init$();
	static ::java::lang::Integer* lambda$makesSureDifferentGenericFunctionSignaturesCompile$4(::LineAdaptersCompileOnly$StringSubscriber* s);
	static ::java::lang::Number* lambda$makesSureDifferentGenericFunctionSignaturesCompile$5(::LineAdaptersCompileOnly$StringSubscriber* s);
	static ::java::lang::Integer* lambda$static$0(::LineAdaptersCompileOnly$StringSubscriber* subscriber);
	static ::java::lang::Number* lambda$static$1(::LineAdaptersCompileOnly$StringSubscriber* subscriber);
	static ::java::lang::Integer* lambda$static$2(::LineAdaptersCompileOnly$StringSubscriberX* subscriber);
	static ::java::lang::Number* lambda$static$3(::LineAdaptersCompileOnly$StringSubscriberX* subscriber);
	static void main($StringArray* args);
	static void makesSureDifferentGenericFunctionSignaturesCompile();
	static void makesSureDifferentGenericSignaturesCompile();
	static ::java::util::function::Function* f1;
	static ::java::util::function::Function* f2;
	static ::java::util::function::Function* f3;
	static ::java::util::function::Function* f4;
};

#endif // _LineAdaptersCompileOnly_h_