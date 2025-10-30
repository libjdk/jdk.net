#include <SecureZipFSProvider$TestPath.h>

#include <SecureZipFSProvider$SecureZipFS.h>
#include <SecureZipFSProvider$TestPath$1.h>
#include <SecureZipFSProvider.h>
#include <java/net/URI.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/WatchEvent$Kind.h>
#include <java/nio/file/WatchEvent$Modifier.h>
#include <java/nio/file/WatchKey.h>
#include <java/nio/file/WatchService.h>
#include <java/nio/file/spi/FileSystemProvider.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $SecureZipFSProvider = ::SecureZipFSProvider;
using $SecureZipFSProvider$SecureZipFS = ::SecureZipFSProvider$SecureZipFS;
using $SecureZipFSProvider$TestPath$1 = ::SecureZipFSProvider$TestPath$1;
using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $WatchEvent$KindArray = $Array<::java::nio::file::WatchEvent$Kind>;
using $WatchEvent$ModifierArray = $Array<::java::nio::file::WatchEvent$Modifier>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $FileSystem = ::java::nio::file::FileSystem;
using $Path = ::java::nio::file::Path;
using $WatchKey = ::java::nio::file::WatchKey;
using $WatchService = ::java::nio::file::WatchService;
using $FileSystemProvider = ::java::nio::file::spi::FileSystemProvider;
using $Iterator = ::java::util::Iterator;

$FieldInfo _SecureZipFSProvider$TestPath_FieldInfo_[] = {
	{"fs", "LSecureZipFSProvider$SecureZipFS;", nullptr, $PRIVATE | $FINAL, $field(SecureZipFSProvider$TestPath, fs)},
	{"delegate", "Ljava/nio/file/Path;", nullptr, $PRIVATE | $FINAL, $field(SecureZipFSProvider$TestPath, delegate)},
	{}
};

$MethodInfo _SecureZipFSProvider$TestPath_MethodInfo_[] = {
	{"<init>", "(LSecureZipFSProvider$SecureZipFS;Ljava/nio/file/Path;)V", nullptr, 0, $method(static_cast<void(SecureZipFSProvider$TestPath::*)($SecureZipFSProvider$SecureZipFS*,$Path*)>(&SecureZipFSProvider$TestPath::init$))},
	{"compareTo", "(Ljava/nio/file/Path;)I", nullptr, $PUBLIC},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"endsWith", "(Ljava/nio/file/Path;)Z", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getFileName", "()Ljava/nio/file/Path;", nullptr, $PUBLIC},
	{"getFileSystem", "()LSecureZipFSProvider$SecureZipFS;", nullptr, $PUBLIC},
	{"getName", "(I)Ljava/nio/file/Path;", nullptr, $PUBLIC},
	{"getNameCount", "()I", nullptr, $PUBLIC},
	{"getParent", "()Ljava/nio/file/Path;", nullptr, $PUBLIC},
	{"getRoot", "()Ljava/nio/file/Path;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isAbsolute", "()Z", nullptr, $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/nio/file/Path;>;", $PUBLIC},
	{"normalize", "()Ljava/nio/file/Path;", nullptr, $PUBLIC},
	{"register", "(Ljava/nio/file/WatchService;[Ljava/nio/file/WatchEvent$Kind;[Ljava/nio/file/WatchEvent$Modifier;)Ljava/nio/file/WatchKey;", "(Ljava/nio/file/WatchService;[Ljava/nio/file/WatchEvent$Kind<*>;[Ljava/nio/file/WatchEvent$Modifier;)Ljava/nio/file/WatchKey;", $PUBLIC | $TRANSIENT, nullptr, "java.io.IOException"},
	{"relativize", "(Ljava/nio/file/Path;)Ljava/nio/file/Path;", nullptr, $PUBLIC},
	{"resolve", "(Ljava/nio/file/Path;)Ljava/nio/file/Path;", nullptr, $PUBLIC},
	{"startsWith", "(Ljava/nio/file/Path;)Z", nullptr, $PUBLIC},
	{"subpath", "(II)Ljava/nio/file/Path;", nullptr, $PUBLIC},
	{"toAbsolutePath", "()Ljava/nio/file/Path;", nullptr, $PUBLIC},
	{"toRealPath", "([Ljava/nio/file/LinkOption;)Ljava/nio/file/Path;", nullptr, $PUBLIC | $TRANSIENT, nullptr, "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toUri", "()Ljava/net/URI;", nullptr, $PUBLIC},
	{"unwrap", "()Ljava/nio/file/Path;", nullptr, 0},
	{}
};

$InnerClassInfo _SecureZipFSProvider$TestPath_InnerClassesInfo_[] = {
	{"SecureZipFSProvider$TestPath", "SecureZipFSProvider", "TestPath", $STATIC},
	{"SecureZipFSProvider$TestPath$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SecureZipFSProvider$TestPath_ClassInfo_ = {
	$ACC_SUPER,
	"SecureZipFSProvider$TestPath",
	"java.lang.Object",
	"java.nio.file.Path",
	_SecureZipFSProvider$TestPath_FieldInfo_,
	_SecureZipFSProvider$TestPath_MethodInfo_,
	nullptr,
	nullptr,
	_SecureZipFSProvider$TestPath_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SecureZipFSProvider"
};

$Object* allocate$SecureZipFSProvider$TestPath($Class* clazz) {
	return $of($alloc(SecureZipFSProvider$TestPath));
}

void SecureZipFSProvider$TestPath::init$($SecureZipFSProvider$SecureZipFS* fs, $Path* delegate) {
	$set(this, fs, fs);
	$set(this, delegate, delegate);
}

$Path* SecureZipFSProvider$TestPath::unwrap() {
	return this->delegate;
}

$FileSystem* SecureZipFSProvider$TestPath::getFileSystem() {
	return this->fs;
}

bool SecureZipFSProvider$TestPath::isAbsolute() {
	return $nc(this->delegate)->isAbsolute();
}

$Path* SecureZipFSProvider$TestPath::getRoot() {
	return $nc(this->fs)->wrap($($nc(this->delegate)->getRoot()));
}

$Path* SecureZipFSProvider$TestPath::getFileName() {
	return $nc(this->fs)->wrap($($nc(this->delegate)->getFileName()));
}

$Path* SecureZipFSProvider$TestPath::getParent() {
	return $nc(this->fs)->wrap($($nc(this->delegate)->getParent()));
}

int32_t SecureZipFSProvider$TestPath::getNameCount() {
	return $nc(this->delegate)->getNameCount();
}

$Path* SecureZipFSProvider$TestPath::getName(int32_t index) {
	return $nc(this->fs)->wrap($($nc(this->delegate)->getName(index)));
}

$Path* SecureZipFSProvider$TestPath::subpath(int32_t beginIndex, int32_t endIndex) {
	return $nc(this->fs)->wrap($($nc(this->delegate)->subpath(beginIndex, endIndex)));
}

bool SecureZipFSProvider$TestPath::startsWith($Path* other) {
	return $nc(this->delegate)->startsWith(other);
}

bool SecureZipFSProvider$TestPath::endsWith($Path* other) {
	return $nc(this->delegate)->endsWith(other);
}

$Path* SecureZipFSProvider$TestPath::normalize() {
	return $nc(this->fs)->wrap($($nc(this->delegate)->normalize()));
}

$Path* SecureZipFSProvider$TestPath::resolve($Path* other) {
	$useLocalCurrentObjectStackCache();
	return $nc(this->fs)->wrap($($nc(this->delegate)->resolve($($nc(this->fs)->wrap(other)))));
}

$Path* SecureZipFSProvider$TestPath::relativize($Path* other) {
	$useLocalCurrentObjectStackCache();
	return $nc(this->fs)->wrap($($nc(this->delegate)->relativize($($nc(this->fs)->wrap(other)))));
}

$URI* SecureZipFSProvider$TestPath::toUri() {
	$useLocalCurrentObjectStackCache();
	$var($String, ssp, $nc($($nc(this->delegate)->toUri()))->getSchemeSpecificPart());
	return $URI::create($$str({$($nc($($nc(this->fs)->provider()))->getScheme()), ":"_s, ssp}));
}

$Path* SecureZipFSProvider$TestPath::toAbsolutePath() {
	return $nc(this->fs)->wrap($($nc(this->delegate)->toAbsolutePath()));
}

$Path* SecureZipFSProvider$TestPath::toRealPath($LinkOptionArray* options) {
	return $nc(this->fs)->wrap($($nc(this->delegate)->toRealPath(options)));
}

$WatchKey* SecureZipFSProvider$TestPath::register$($WatchService* watcher, $WatchEvent$KindArray* events, $WatchEvent$ModifierArray* modifiers) {
	return $nc(this->delegate)->register$(watcher, events, modifiers);
}

$Iterator* SecureZipFSProvider$TestPath::iterator() {
	$var($Iterator, itr, $nc(this->delegate)->iterator());
	return $new($SecureZipFSProvider$TestPath$1, this, itr);
}

int32_t SecureZipFSProvider$TestPath::compareTo($Path* other) {
	return $nc(this->delegate)->compareTo($($nc(this->fs)->unwrap(other)));
}

int32_t SecureZipFSProvider$TestPath::hashCode() {
	return $nc(this->delegate)->hashCode();
}

bool SecureZipFSProvider$TestPath::equals(Object$* other) {
	return $instanceOf(SecureZipFSProvider$TestPath, other) && $nc(this->delegate)->equals($($nc(this->fs)->unwrap($cast(SecureZipFSProvider$TestPath, other))));
}

$String* SecureZipFSProvider$TestPath::toString() {
	return $nc(this->delegate)->toString();
}

int32_t SecureZipFSProvider$TestPath::compareTo(Object$* other) {
	return this->compareTo($cast($Path, other));
}

SecureZipFSProvider$TestPath::SecureZipFSProvider$TestPath() {
}

$Class* SecureZipFSProvider$TestPath::load$($String* name, bool initialize) {
	$loadClass(SecureZipFSProvider$TestPath, name, initialize, &_SecureZipFSProvider$TestPath_ClassInfo_, allocate$SecureZipFSProvider$TestPath);
	return class$;
}

$Class* SecureZipFSProvider$TestPath::class$ = nullptr;