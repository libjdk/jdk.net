#ifndef _ShortRequestBody$StringRequestBody_h_
#define _ShortRequestBody$StringRequestBody_h_
//$ class ShortRequestBody$StringRequestBody
//$ extends ShortRequestBody$AbstractDelegateRequestBody

#include <ShortRequestBody$AbstractDelegateRequestBody.h>

class $export ShortRequestBody$StringRequestBody : public ::ShortRequestBody$AbstractDelegateRequestBody {
	$class(ShortRequestBody$StringRequestBody, $NO_CLASS_INIT, ::ShortRequestBody$AbstractDelegateRequestBody)
public:
	ShortRequestBody$StringRequestBody();
	void init$($String* body, int32_t additionalLength);
};

#endif // _ShortRequestBody$StringRequestBody_h_