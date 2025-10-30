#include <SecureZipFSProvider$SecureZipFS.h>

#include <SecureZipFSProvider$TestPath.h>
#include <SecureZipFSProvider.h>
#include <java/lang/Iterable.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/PathMatcher.h>
#include <java/nio/file/ProviderMismatchException.h>
#include <java/nio/file/WatchService.h>
#include <java/nio/file/attribute/UserPrincipalLookupService.h>
#include <java/nio/file/spi/FileSystemProvider.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $SecureZipFSProvider = ::SecureZipFSProvider;
using $SecureZipFSProvider$TestPath = ::SecureZipFSProvider$TestPath;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $FileSystem = ::java::nio::file::FileSystem;
using $Path = ::java::nio::file::Path;
using $PathMatcher = ::java::nio::file::PathMatcher;
using $ProviderMismatchException = ::java::nio::file::ProviderMismatchException;
using $WatchService = ::java::nio::file::WatchService;
using $UserPrincipalLookupService = ::java::nio::file::attribute::UserPrincipalLookupService;
using $FileSystemProvider = ::java::nio::file::spi::FileSystemProvider;
using $Set = ::java::util::Set;

$FieldInfo _SecureZipFSProvider$SecureZipFS_FieldInfo_[] = {
	{"provider", "LSecureZipFSProvider;", nullptr, $PRIVATE | $FINAL, $field(SecureZipFSProvider$SecureZipFS, provider$)},
	{"delegate", "Ljava/nio/file/FileSystem;", nullptr, $PRIVATE | $FINAL, $field(SecureZipFSProvider$SecureZipFS, delegate)},
	{}
};

$MethodInfo _SecureZipFSProvider$SecureZipFS_MethodInfo_[] = {
	{"<init>", "(LSecureZipFSProvider;Ljava/nio/file/FileSystem;)V", nullptr, $PUBLIC, $method(static_cast<void(SecureZipFSProvider$SecureZipFS::*)($SecureZipFSProvider*,$FileSystem*)>(&SecureZipFSProvider$SecureZipFS::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getFileStores", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<Ljava/nio/file/FileStore;>;", $PUBLIC},
	{"getPath", "(Ljava/lang/String;[Ljava/lang/String;)Ljava/nio/file/Path;", nullptr, $PUBLIC | $TRANSIENT},
	{"getPathMatcher", "(Ljava/lang/String;)Ljava/nio/file/PathMatcher;", nullptr, $PUBLIC},
	{"getRootDirectories", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<Ljava/nio/file/Path;>;", $PUBLIC},
	{"getSeparator", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getUserPrincipalLookupService", "()Ljava/nio/file/attribute/UserPrincipalLookupService;", nullptr, $PUBLIC},
	{"isOpen", "()Z", nullptr, $PUBLIC},
	{"isReadOnly", "()Z", nullptr, $PUBLIC},
	{"newWatchService", "()Ljava/nio/file/WatchService;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"provider", "()Ljava/nio/file/spi/FileSystemProvider;", nullptr, $PUBLIC},
	{"supportedFileAttributeViews", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC},
	{"unwrap", "(Ljava/nio/file/Path;)Ljava/nio/file/Path;", nullptr, 0},
	{"wrap", "(Ljava/nio/file/Path;)Ljava/nio/file/Path;", nullptr, 0},
	{}
};

$InnerClassInfo _SecureZipFSProvider$SecureZipFS_InnerClassesInfo_[] = {
	{"SecureZipFSProvider$SecureZipFS", "SecureZipFSProvider", "SecureZipFS", $STATIC},
	{}
};

$ClassInfo _SecureZipFSProvider$SecureZipFS_ClassInfo_ = {
	$ACC_SUPER,
	"SecureZipFSProvider$SecureZipFS",
	"java.nio.file.FileSystem",
	nullptr,
	_SecureZipFSProvider$SecureZipFS_FieldInfo_,
	_SecureZipFSProvider$SecureZipFS_MethodInfo_,
	nullptr,
	nullptr,
	_SecureZipFSProvider$SecureZipFS_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SecureZipFSProvider"
};

$Object* allocate$SecureZipFSProvider$SecureZipFS($Class* clazz) {
	return $of($alloc(SecureZipFSProvider$SecureZipFS));
}

void SecureZipFSProvider$SecureZipFS::init$($SecureZipFSProvider* provider, $FileSystem* delegate) {
	$FileSystem::init$();
	$set(this, provider$, provider);
	$set(this, delegate, delegate);
}

$Path* SecureZipFSProvider$SecureZipFS::wrap($Path* path) {
	return (path != nullptr) ? static_cast<$Path*>($new($SecureZipFSProvider$TestPath, this, path)) : ($Path*)nullptr;
}

$Path* SecureZipFSProvider$SecureZipFS::unwrap($Path* wrapper) {
	if (wrapper == nullptr) {
		$throwNew($NullPointerException);
	}
	if (!($instanceOf($SecureZipFSProvider$TestPath, wrapper))) {
		$throwNew($ProviderMismatchException);
	}
	return $nc(($cast($SecureZipFSProvider$TestPath, wrapper)))->unwrap();
}

$FileSystemProvider* SecureZipFSProvider$SecureZipFS::provider() {
	return this->provider$;
}

void SecureZipFSProvider$SecureZipFS::close() {
	$nc(this->delegate)->close();
}

bool SecureZipFSProvider$SecureZipFS::isOpen() {
	return $nc(this->delegate)->isOpen();
}

bool SecureZipFSProvider$SecureZipFS::isReadOnly() {
	return $nc(this->delegate)->isReadOnly();
}

$String* SecureZipFSProvider$SecureZipFS::getSeparator() {
	return $nc(this->delegate)->getSeparator();
}

$Iterable* SecureZipFSProvider$SecureZipFS::getRootDirectories() {
	return $nc(this->delegate)->getRootDirectories();
}

$Iterable* SecureZipFSProvider$SecureZipFS::getFileStores() {
	return $nc(this->delegate)->getFileStores();
}

$Set* SecureZipFSProvider$SecureZipFS::supportedFileAttributeViews() {
	return $nc(this->delegate)->supportedFileAttributeViews();
}

$Path* SecureZipFSProvider$SecureZipFS::getPath($String* first, $StringArray* more) {
	return wrap($($nc(this->delegate)->getPath(first, more)));
}

$PathMatcher* SecureZipFSProvider$SecureZipFS::getPathMatcher($String* syntaxAndPattern) {
	return $nc(this->delegate)->getPathMatcher(syntaxAndPattern);
}

$UserPrincipalLookupService* SecureZipFSProvider$SecureZipFS::getUserPrincipalLookupService() {
	return $nc(this->delegate)->getUserPrincipalLookupService();
}

$WatchService* SecureZipFSProvider$SecureZipFS::newWatchService() {
	return $nc(this->delegate)->newWatchService();
}

SecureZipFSProvider$SecureZipFS::SecureZipFSProvider$SecureZipFS() {
}

$Class* SecureZipFSProvider$SecureZipFS::load$($String* name, bool initialize) {
	$loadClass(SecureZipFSProvider$SecureZipFS, name, initialize, &_SecureZipFSProvider$SecureZipFS_ClassInfo_, allocate$SecureZipFSProvider$SecureZipFS);
	return class$;
}

$Class* SecureZipFSProvider$SecureZipFS::class$ = nullptr;