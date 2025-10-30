#include <jdk/internal/net/http/SimpleSSLContext.h>

#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/InputStream.h>
#include <java/lang/SecurityException.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/KeyManagementException.h>
#include <java/security/KeyStore.h>
#include <java/security/KeyStoreException.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/SecureRandom.h>
#include <java/security/UnrecoverableKeyException.h>
#include <java/security/cert/CertificateException.h>
#include <java/util/StringTokenizer.h>
#include <javax/net/ssl/KeyManager.h>
#include <javax/net/ssl/KeyManagerFactory.h>
#include <javax/net/ssl/SSLContext.h>
#include <javax/net/ssl/TrustManager.h>
#include <javax/net/ssl/TrustManagerFactory.h>
#include <jcpp.h>

using $KeyManagerArray = $Array<::javax::net::ssl::KeyManager>;
using $TrustManagerArray = $Array<::javax::net::ssl::TrustManager>;
using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $InputStream = ::java::io::InputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityException = ::java::lang::SecurityException;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $KeyManagementException = ::java::security::KeyManagementException;
using $KeyStore = ::java::security::KeyStore;
using $KeyStoreException = ::java::security::KeyStoreException;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $SecureRandom = ::java::security::SecureRandom;
using $UnrecoverableKeyException = ::java::security::UnrecoverableKeyException;
using $CertificateException = ::java::security::cert::CertificateException;
using $StringTokenizer = ::java::util::StringTokenizer;
using $KeyManagerFactory = ::javax::net::ssl::KeyManagerFactory;
using $SSLContext = ::javax::net::ssl::SSLContext;
using $TrustManagerFactory = ::javax::net::ssl::TrustManagerFactory;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

$FieldInfo _SimpleSSLContext_FieldInfo_[] = {
	{"ssl", "Ljavax/net/ssl/SSLContext;", nullptr, $PRIVATE | $FINAL, $field(SimpleSSLContext, ssl)},
	{}
};

$MethodInfo _SimpleSSLContext_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SimpleSSLContext::*)()>(&SimpleSSLContext::init$)), "java.io.IOException"},
	{"get", "()Ljavax/net/ssl/SSLContext;", nullptr, $PUBLIC},
	{"init", "(Ljava/io/InputStream;)Ljavax/net/ssl/SSLContext;", nullptr, $PRIVATE, $method(static_cast<$SSLContext*(SimpleSSLContext::*)($InputStream*)>(&SimpleSSLContext::init)), "java.io.IOException"},
	{}
};

$ClassInfo _SimpleSSLContext_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.net.http.SimpleSSLContext",
	"java.lang.Object",
	nullptr,
	_SimpleSSLContext_FieldInfo_,
	_SimpleSSLContext_MethodInfo_
};

$Object* allocate$SimpleSSLContext($Class* clazz) {
	return $of($alloc(SimpleSSLContext));
}

void SimpleSSLContext::init$() {
	$useLocalCurrentObjectStackCache();
	$var($String, paths, $System::getProperty("test.src.path"_s));
	$init($File);
	$var($StringTokenizer, st, $new($StringTokenizer, paths, $File::pathSeparator));
	bool securityExceptions = false;
	$var($SSLContext, sslContext, nullptr);
	while (st->hasMoreTokens()) {
		$var($String, path, st->nextToken());
		try {
			$var($File, f, $new($File, path, "../../../../../lib/jdk/test/lib/net/testkeys"_s));
			if (f->exists()) {
				{
					$var($FileInputStream, fis, $new($FileInputStream, f));
					{
						$var($Throwable, var$0, nullptr);
						bool break$1 = false;
						try {
							try {
								$assign(sslContext, init(fis));
								// break;
								break$1 = true;
								goto $finally;
							} catch ($Throwable& t$) {
								try {
									fis->close();
								} catch ($Throwable& x2) {
									t$->addSuppressed(x2);
								}
								$throw(t$);
							}
						} catch ($Throwable& var$2) {
							$assign(var$0, var$2);
						} $finally: {
							fis->close();
						}
						if (var$0 != nullptr) {
							$throw(var$0);
						}
						if (break$1) {
							break;
						}
					}
				}
			}
		} catch ($SecurityException& e) {
			securityExceptions = true;
		}
	}
	if (securityExceptions) {
		$nc($System::out)->println("SecurityExceptions thrown on loading testkeys"_s);
	}
	$set(this, ssl, sslContext);
}

$SSLContext* SimpleSSLContext::init($InputStream* i) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($chars, passphrase, "passphrase"_s->toCharArray());
		$var($KeyStore, ks, $KeyStore::getInstance("PKCS12"_s));
		$nc(ks)->load(i, passphrase);
		$var($KeyManagerFactory, kmf, $KeyManagerFactory::getInstance("PKIX"_s));
		$nc(kmf)->init(ks, passphrase);
		$var($TrustManagerFactory, tmf, $TrustManagerFactory::getInstance("PKIX"_s));
		$nc(tmf)->init(ks);
		$var($SSLContext, ssl, $SSLContext::getInstance("TLS"_s));
		$var($KeyManagerArray, var$0, kmf->getKeyManagers());
		$nc(ssl)->init(var$0, $(tmf->getTrustManagers()), nullptr);
		return ssl;
	} catch ($KeyManagementException& e) {
		$throwNew($RuntimeException, $(e->getMessage()));
	} catch ($KeyStoreException& e) {
		$throwNew($RuntimeException, $(e->getMessage()));
	} catch ($UnrecoverableKeyException& e) {
		$throwNew($RuntimeException, $(e->getMessage()));
	} catch ($CertificateException& e) {
		$throwNew($RuntimeException, $(e->getMessage()));
	} catch ($NoSuchAlgorithmException& e) {
		$throwNew($RuntimeException, $(e->getMessage()));
	}
	$shouldNotReachHere();
}

$SSLContext* SimpleSSLContext::get() {
	return this->ssl;
}

SimpleSSLContext::SimpleSSLContext() {
}

$Class* SimpleSSLContext::load$($String* name, bool initialize) {
	$loadClass(SimpleSSLContext, name, initialize, &_SimpleSSLContext_ClassInfo_, allocate$SimpleSSLContext);
	return class$;
}

$Class* SimpleSSLContext::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk