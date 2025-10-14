#ifndef _ShortRequestBody$FileRequestBody_h_
#define _ShortRequestBody$FileRequestBody_h_
//$ class ShortRequestBody$FileRequestBody
//$ extends ShortRequestBody$AbstractDelegateRequestBody

#include <ShortRequestBody$AbstractDelegateRequestBody.h>

namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}

class $export ShortRequestBody$FileRequestBody : public ::ShortRequestBody$AbstractDelegateRequestBody {
	$class(ShortRequestBody$FileRequestBody, $NO_CLASS_INIT, ::ShortRequestBody$AbstractDelegateRequestBody)
public:
	ShortRequestBody$FileRequestBody();
	void init$(::java::nio::file::Path* path, int32_t additionalLength);
};

#endif // _ShortRequestBody$FileRequestBody_h_