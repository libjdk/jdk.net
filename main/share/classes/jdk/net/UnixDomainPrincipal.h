#ifndef _jdk_net_UnixDomainPrincipal_h_
#define _jdk_net_UnixDomainPrincipal_h_
//$ class jdk.net.UnixDomainPrincipal
//$ extends java.lang.Record

#include <java/lang/Record.h>

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class GroupPrincipal;
				class UserPrincipal;
			}
		}
	}
}

namespace jdk {
	namespace net {

class $export UnixDomainPrincipal : public ::java::lang::Record {
	$class(UnixDomainPrincipal, $NO_CLASS_INIT, ::java::lang::Record)
public:
	UnixDomainPrincipal();
	void init$(::java::nio::file::attribute::UserPrincipal* user, ::java::nio::file::attribute::GroupPrincipal* group);
	virtual bool equals(Object$* o) override;
	virtual ::java::nio::file::attribute::GroupPrincipal* group();
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	virtual ::java::nio::file::attribute::UserPrincipal* user();
	::java::nio::file::attribute::UserPrincipal* user$ = nullptr;
	::java::nio::file::attribute::GroupPrincipal* group$ = nullptr;
};

	} // net
} // jdk

#endif // _jdk_net_UnixDomainPrincipal_h_