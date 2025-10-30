#include <jdk/internal/net/http/hpack/SpecHelper.h>

#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $Byte = ::java::lang::Byte;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;
using $Collector = ::java::util::stream::Collector;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace hpack {

$MethodInfo _SpecHelper_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SpecHelper::*)()>(&SpecHelper::init$))},
	{"toBytes", "(Ljava/lang/String;)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ByteBuffer*(*)($String*)>(&SpecHelper::toBytes))},
	{"toHexdump", "(Ljava/nio/ByteBuffer;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($ByteBuffer*)>(&SpecHelper::toHexdump))},
	{}
};

$ClassInfo _SpecHelper_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.net.http.hpack.SpecHelper",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SpecHelper_MethodInfo_
};

$Object* allocate$SpecHelper($Class* clazz) {
	return $of($alloc(SpecHelper));
}

void SpecHelper::init$() {
	$throwNew($AssertionError);
}

$ByteBuffer* SpecHelper::toBytes($String* hexdump) {
	$useLocalCurrentObjectStackCache();
	$var($Pattern, hexByte, $Pattern::compile("[0-9a-fA-F]{2}"_s));
	$var($List, bytes, $new($ArrayList));
	$var($Matcher, matcher, $nc(hexByte)->matcher(hexdump));
	while ($nc(matcher)->find()) {
		bytes->add($(matcher->group(0)));
	}
	$var($ByteBuffer, result, $ByteBuffer::allocate(bytes->size()));
	{
		$var($Iterator, i$, bytes->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, f, $cast($String, i$->next()));
			{
				$nc(result)->put((int8_t)$Integer::parseInt(f, 16));
			}
		}
	}
	$nc(result)->flip();
	return result;
}

$String* SpecHelper::toHexdump($ByteBuffer* bb) {
	$useLocalCurrentObjectStackCache();
	$var($List, words, $new($ArrayList));
	int32_t i = 0;
	while ($nc(bb)->hasRemaining()) {
		if (i % 2 == 0) {
			words->add(""_s);
		}
		int8_t b = bb->get();
		$var($String, hex, $nc($($Integer::toHexString(256 + $Byte::toUnsignedInt(b))))->substring(1));
		words->set(i / 2, $$str({$cast($String, $(words->get(i / 2))), hex}));
		++i;
	}
	return $cast($String, $nc($(words->stream()))->collect($($Collectors::joining(" "_s))));
}

SpecHelper::SpecHelper() {
}

$Class* SpecHelper::load$($String* name, bool initialize) {
	$loadClass(SpecHelper, name, initialize, &_SpecHelper_ClassInfo_, allocate$SpecHelper);
	return class$;
}

$Class* SpecHelper::class$ = nullptr;

				} // hpack
			} // http
		} // net
	} // internal
} // jdk