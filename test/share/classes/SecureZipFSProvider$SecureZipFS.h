#ifndef _SecureZipFSProvider$SecureZipFS_h_
#define _SecureZipFSProvider$SecureZipFS_h_
//$ class SecureZipFSProvider$SecureZipFS
//$ extends java.nio.file.FileSystem

#include <java/lang/Array.h>
#include <java/nio/file/FileSystem.h>

class SecureZipFSProvider;
namespace java {
	namespace lang {
		class Iterable;
	}
}
namespace java {
	namespace nio {
		namespace file {
			class Path;
			class PathMatcher;
			class WatchService;
		}
	}
}
namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class UserPrincipalLookupService;
			}
		}
	}
}
namespace java {
	namespace nio {
		namespace file {
			namespace spi {
				class FileSystemProvider;
			}
		}
	}
}
namespace java {
	namespace util {
		class Set;
	}
}

class $export SecureZipFSProvider$SecureZipFS : public ::java::nio::file::FileSystem {
	$class(SecureZipFSProvider$SecureZipFS, $NO_CLASS_INIT, ::java::nio::file::FileSystem)
public:
	SecureZipFSProvider$SecureZipFS();
	void init$(::SecureZipFSProvider* provider, ::java::nio::file::FileSystem* delegate);
	virtual void close() override;
	virtual ::java::lang::Iterable* getFileStores() override;
	virtual ::java::nio::file::Path* getPath($String* first, $StringArray* more) override;
	virtual ::java::nio::file::PathMatcher* getPathMatcher($String* syntaxAndPattern) override;
	virtual ::java::lang::Iterable* getRootDirectories() override;
	virtual $String* getSeparator() override;
	virtual ::java::nio::file::attribute::UserPrincipalLookupService* getUserPrincipalLookupService() override;
	virtual bool isOpen() override;
	virtual bool isReadOnly() override;
	virtual ::java::nio::file::WatchService* newWatchService() override;
	virtual ::java::nio::file::spi::FileSystemProvider* provider() override;
	virtual ::java::util::Set* supportedFileAttributeViews() override;
	virtual ::java::nio::file::Path* unwrap(::java::nio::file::Path* wrapper);
	virtual ::java::nio::file::Path* wrap(::java::nio::file::Path* path);
	::SecureZipFSProvider* provider$ = nullptr;
	::java::nio::file::FileSystem* delegate = nullptr;
};

#endif // _SecureZipFSProvider$SecureZipFS_h_