#ifndef _ShortRequestBody$ByteArrayRequestBody_h_
#define _ShortRequestBody$ByteArrayRequestBody_h_
//$ class ShortRequestBody$ByteArrayRequestBody
//$ extends ShortRequestBody$AbstractDelegateRequestBody

#include <ShortRequestBody$AbstractDelegateRequestBody.h>
#include <java/lang/Array.h>

class $export ShortRequestBody$ByteArrayRequestBody : public ::ShortRequestBody$AbstractDelegateRequestBody {
	$class(ShortRequestBody$ByteArrayRequestBody, $NO_CLASS_INIT, ::ShortRequestBody$AbstractDelegateRequestBody)
public:
	ShortRequestBody$ByteArrayRequestBody();
	void init$($bytes* body, int32_t additionalLength);
};

#endif // _ShortRequestBody$ByteArrayRequestBody_h_