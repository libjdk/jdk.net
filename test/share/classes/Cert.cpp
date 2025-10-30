#include <Cert.h>

#include <java/lang/Enum.h>
#include <jcpp.h>

#undef BAD_CERT
#undef GOOD_CERT
#undef LOOPBACK_CERT

using $CertArray = $Array<Cert>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _Cert_FieldInfo_[] = {
	{"BAD_CERT", "LCert;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Cert, BAD_CERT)},
	{"GOOD_CERT", "LCert;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Cert, GOOD_CERT)},
	{"LOOPBACK_CERT", "LCert;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Cert, LOOPBACK_CERT)},
	{"$VALUES", "[LCert;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Cert, $VALUES)},
	{"keyAlgo", "Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(Cert, keyAlgo)},
	{"certStr", "Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(Cert, certStr)},
	{"keyStr", "Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(Cert, keyStr)},
	{}
};

$MethodInfo _Cert_MethodInfo_[] = {
	{"$values", "()[LCert;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$CertArray*(*)()>(&Cert::$values))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", $PRIVATE, $method(static_cast<void(Cert::*)($String*,int32_t,$String*,$String*,$String*)>(&Cert::init$))},
	{"valueOf", "(Ljava/lang/String;)LCert;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Cert*(*)($String*)>(&Cert::valueOf))},
	{"values", "()[LCert;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$CertArray*(*)()>(&Cert::values))},
	{}
};

$ClassInfo _Cert_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"Cert",
	"java.lang.Enum",
	nullptr,
	_Cert_FieldInfo_,
	_Cert_MethodInfo_,
	"Ljava/lang/Enum<LCert;>;"
};

$Object* allocate$Cert($Class* clazz) {
	return $of($alloc(Cert));
}

Cert* Cert::BAD_CERT = nullptr;
Cert* Cert::GOOD_CERT = nullptr;
Cert* Cert::LOOPBACK_CERT = nullptr;
$CertArray* Cert::$VALUES = nullptr;

$CertArray* Cert::$values() {
	$init(Cert);
	return $new($CertArray, {
		Cert::BAD_CERT,
		Cert::GOOD_CERT,
		Cert::LOOPBACK_CERT
	});
}

$CertArray* Cert::values() {
	$init(Cert);
	return $cast($CertArray, Cert::$VALUES->clone());
}

Cert* Cert::valueOf($String* name) {
	$init(Cert);
	return $cast(Cert, $Enum::valueOf(Cert::class$, name));
}

void Cert::init$($String* $enum$name, int32_t $enum$ordinal, $String* keyAlgo, $String* certStr, $String* keyStr) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, keyAlgo, keyAlgo);
	$set(this, certStr, certStr);
	$set(this, keyStr, keyStr);
}

void clinit$Cert($Class* class$) {
	$assignStatic(Cert::BAD_CERT, $new(Cert, "BAD_CERT"_s, 0, "RSA"_s, "-----BEGIN CERTIFICATE-----\nMIIC7jCCAdagAwIBAgIUZSQTPHqYDBaikZyOQoTPvr7S8UIwDQYJKoZIhvcNAQEL\nBQAwDzENMAsGA1UEAwwEZXZpbDAeFw0yMDAyMDgwMzU5MjdaFw0zMDAyMDUwMzU5\nMjdaMA8xDTALBgNVBAMMBGV2aWwwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEK\nAoIBAQCmirsTOW1G+LoI/Aj59lMk3KLywAbXASeTdnBoWkchuJ0QJWO/5b5kgf6Q\nVFfe9lXof9psGIKaCGq6KsI0uqj7+7y++//l+E6GB8UshVB8MXc1SLFe8AxPYhWC\nTXaKWyWGl7PXvugzbByFrf4IwE9+6phYkvl/zHvaMKqdwnkpXuyuBgT3BiYTSNsx\nk1Ma+s5rqiwsOODSzwhadwmU9T4z11KypYb/DixJgHvUET4gTB+i3ll+PllVdQtX\nzBLpEuj5HadK0PsqlOIok3eoSU+MpRqsz0gFEQ95y+Les3MlBeQ7fVKBz8GbrFDB\nAtzca+iknEh8fkLIUUuCjTjUtLvfAgMBAAGjQjBAMB0GA1UdDgQWBBQJ0OhRbA+I\nWUfR/QXCABDWpIAEBzAfBgNVHSMEGDAWgBQJ0OhRbA+IWUfR/QXCABDWpIAEBzAN\nBgkqhkiG9w0BAQsFAAOCAQEAQMfPfYfVSSdsiEUOlVg6M5D90HRONzqlg/v0RqQI\nfb3uufXJs20dg8iamVORXIIeUpGv1OQ2Rx4ndnV3bRLK6ep3gswIkOnD8z/CeNgl\nodZPvWyklHTMenGqU2TR3ceFep/DvQkrP4aZWyr3e2fjatKR/s4pXgBwHs/hR76O\nvDYLRDyCG/+MtUClFsc9HLedbU4Wp8JyaafFZ63/VjaIcvdHoDGNILRu5AIN/JVM\nSgz4blkWJxS1dlqBYwxvbpJWrHUcktsa3Bzw2zWOkTVGQJi3pMvzRBkgliNaXPi3\nqcPViqgzVoB4QdOQBnvDt"
		"Q9+8Nt/dQY1VJFSBLxZQIefiQ==\n-----END CERTIFICATE-----"_s, "MIIEvQIBADANBgkqhkiG9w0BAQEFAASCBKcwggSjAgEAAoIBAQCmirsTOW1G+LoI\n/Aj59lMk3KLywAbXASeTdnBoWkchuJ0QJWO/5b5kgf6QVFfe9lXof9psGIKaCGq6\nKsI0uqj7+7y++//l+E6GB8UshVB8MXc1SLFe8AxPYhWCTXaKWyWGl7PXvugzbByF\nrf4IwE9+6phYkvl/zHvaMKqdwnkpXuyuBgT3BiYTSNsxk1Ma+s5rqiwsOODSzwha\ndwmU9T4z11KypYb/DixJgHvUET4gTB+i3ll+PllVdQtXzBLpEuj5HadK0PsqlOIo\nk3eoSU+MpRqsz0gFEQ95y+Les3MlBeQ7fVKBz8GbrFDBAtzca+iknEh8fkLIUUuC\njTjUtLvfAgMBAAECggEATyu2QS5Un5+QOMMvtTx/TA/DOulElyNKYBS23TTFiedM\nayeLIuehuf/+NziRSUILlupouGhyda04p2W6SvzNZnTGxnffr8B5+8dn2YFKwK93\nPxJel4ZAI+C53ubaSm2IClLFwPNVSVTEvlv3XsulPu1hHQJJr5JS8meeRD72AE8G\nbrKbLlq6OGey6u9teao0m4Wo05MzaEoOx4fztPP4BiJJobuPYrdthUwfXJ2mQYeg\nfJKl+JeLUnAXmq8e+6Zs88NzGK8Gmd2TvGnUahxSDtXHuRkB2lOrGFrEJKkAXDBx\n2q8r3vvcay6+k95fS2HOvggFDALS37BGckWg4+HYuQKBgQDXkxw0u2G7rCYbF691\njil++DLNUzejZonAvA/cceVHShfAMlWCBf58cLNsY33rkRsFazhrdDoDAFqKxejB\nxWM8U7UHiHZSznuXTL0YbUombfz+0lp/KwXcirnB7O3AdIW4lfMo/ozeMMIuEzsL\nG/MDvbNSdawEso/qtxFvz87ctQKBgQDFxcCSyWb/SQVr3RkZkO3BW2efuANxNeUh\n35L4inWTa8ml8UL4SrTrkfUHzu5TnBGbSb2n8CdkPnInA81dK"
		"agX6LXuONeLkX/e\nRXyWIwWRiBkpYSaw2OGApl49DRvk2kCzwoVRWwh8qfhpC0P6AClFRaVAovYcTxm3\nvhCJL3jmwwKBgGMLvTbhLStMEgn6nOwXECu9H6JE7NhPgVUjUupHDj/t4/GzbqQZ\n2u4T3ewb3jwAZHjd5YNBWHIOlIsUGTgGV+zczN0ULsEnC5Pddzgk5p+3gzkVLu0k\nuEG3H1fhYu882j+P7bPVGKXxoxYGUedtxP7gBucJF6rk28jMqd9EjFfNAoGBAKcc\nASwGodDzknEh0SOZIkxPP6/lfIMcVw/YKgd4dwCqAykEQuIpvdWO7sw6PYbISNg9\n5tMQSTiayznMLKqbmD0blR5FSVvVBYZ6kFsMHJhrt1cPj/G+UEy0RsyvVvJ4uFMr\n+hpUIUe1FwErU7TajgTKZGfJSsuAyupG3xIL2syhAoGALv+ulZAY/gUKH8NigsXo\npFPTpiXMyTD/O4RUH/5LcxDELVZ8cnV2q3qEX+ep24y0AtNiBx4oHpZ/vIxtwBCR\nJKU2xmIGC6NyQMRSzfmNgi0X450rgKbTAxn/LAU8syXmNpBUrFZ8+02pQvWzxqfU\nzGaMEK3+f1sq8Byzau/qhKU="_s));
	$assignStatic(Cert::GOOD_CERT, $new(Cert, "GOOD_CERT"_s, 1, "RSA"_s, "-----BEGIN CERTIFICATE-----\nMIIC+DCCAeCgAwIBAgIUcEEvcUPRZ7Upxj7OYrrVqkrx9/AwDQYJKoZIhvcNAQEL\nBQAwFDESMBAGA1UEAwwJbG9jYWxob3N0MB4XDTIwMDIwODAzNTkxOFoXDTMwMDIw\nNTAzNTkxOFowFDESMBAGA1UEAwwJbG9jYWxob3N0MIIBIjANBgkqhkiG9w0BAQEF\nAAOCAQ8AMIIBCgKCAQEAtSOmfkF0zjPeZ4DDsJZO3OaDq+XHtPLB+xvri1iuL9b+\ndZDXOqPZ5+koWM9NzDR6Um+IN46oTU+8eJw+hYcZaE9tzS9kH+6qOBk/827yEyVa\njh9Wqw164xj16QPyQJuHEeeDJ7elNfaOQXRu2UqZB9suKbolqsHe42hbg0/tbln7\nC8C6qEJOpnEaapFHi3/3AeoQQ57zywqrzopeiiuUDWmBhXY30ve33RrJl/OIM1sB\nQSoVCPcaF0mXaDwUTYIksxelon1K9PJa76p9ybGnsxkYfCAGZ8O+fTjJfQONU+Gu\nzOmcyXL5D5O/nI8lxN8hbZwVIAYXLYRUonECIOJ/iQIDAQABo0IwQDAdBgNVHQ4E\nFgQUEmXHS9h32FVuLa/E+An+CPQi6tUwHwYDVR0jBBgwFoAUEmXHS9h32FVuLa/E\n+An+CPQi6tUwDQYJKoZIhvcNAQELBQADggEBAFatzXsT9YZ0TF66G6apSbbs6mH9\nPMVE9IuE4yv2zyKofSMmDHFdmfNdkMHWkIxcZKuiL00IPFL76LAb9DWNQVy4otq6\n3+n0CCi808gDNUMYMQLlXVooZsByXuMuokyg29F5mWEH4rswU6ru33lAB7CT7BuN\nz5/eUhxTcXcJV6pLgcEM68NIc755PULevmqmd8SrVgcFjkxAFOsYd9L86wYLdiPO\nuXfN/EjLMGHG2gpEqHEzQpEEAA/IsCJ1HQ8vvGkeggUIXPrwlIMbQcz/8WBSDel5\nhvVRmADJCLf/0IwxKsSOM"
		"WZ4OMmcXMjxnae3lWPQomlzWHMZlFraG2rE/Vo=\n-----END CERTIFICATE-----"_s, "MIIEvQIBADANBgkqhkiG9w0BAQEFAASCBKcwggSjAgEAAoIBAQC1I6Z+QXTOM95n\ngMOwlk7c5oOr5ce08sH7G+uLWK4v1v51kNc6o9nn6ShYz03MNHpSb4g3jqhNT7x4\nnD6FhxloT23NL2Qf7qo4GT/zbvITJVqOH1arDXrjGPXpA/JAm4cR54Mnt6U19o5B\ndG7ZSpkH2y4puiWqwd7jaFuDT+1uWfsLwLqoQk6mcRpqkUeLf/cB6hBDnvPLCqvO\nil6KK5QNaYGFdjfS97fdGsmX84gzWwFBKhUI9xoXSZdoPBRNgiSzF6WifUr08lrv\nqn3JsaezGRh8IAZnw759OMl9A41T4a7M6ZzJcvkPk7+cjyXE3yFtnBUgBhcthFSi\ncQIg4n+JAgMBAAECggEAD2O4AYIOKna9ro2CEr6ydJIhHbmn/feiA3Obz3r5UZcy\nh0qG/rRtDwcAJot2UKMkwVw4dn/oTKk5mgWsSivwPKyC56vfFddxHtMGW+hRKM9D\nok+HTYEXr7OvMNzk+Bg+oYbJ3dX8c1k/PNBnmo578e7tPR5TlO5jwW5cWAuyYG2f\n+YUCqMNe02yZvvlvK1kOSSgqlNH0S14/hVZTYkyxXMCCrkxPFXh5j8w6ZUzVipXg\n99EYcRdq7dA3XVBSgQQ4m5772FIIzlBn8LdIIfw3VQrtZ9HapowLk6QdcHSHBKMK\n0rqb1PlG2ynD2n8hKn4MssJ+tkzvbGrQcLjL/+XHAQKBgQDmiOIke90T8puq3FkN\nNlgdBA9Zem5U2t3TvtQa36cuO/paYrLaVK5U0ucNZ9d4i6avdyp8TyKJrUHDcazi\nQkDpjxb0KBhisutDZ4o1JFW4ZtB3zwIGIYWBBIE1kRIc0ucYoAurSdOmAsKq6XJQ\nB0CQYBJPrTHq5niCl0tKPtrISwKBgQDJJfNcKSz46zdnqsNZAmL+q+cMQf4txiCS\nv0JefOeKKlwNcYWxRgf1yTNENamKKh8wyqOhc/OkxXjglRo9B"
		"FMt6BFFARzDddWE\nWo18cyLc2WvTTv2FCZ0J/eF1jPTGJsTpCU6Prbt4XPjZpzSTF2cQR7CxLp15FsJm\n2LMcQ8ma+wKBgQC72So8hFme2X+S+D3wECo4aoh/Zs3kgvtigQqgY0H84I6de/M1\nCO+M2tW/DLB8336RV87cwDbqbK07rrMrIsV2C0yu4sUMF7Kwl/v8VYEr40tXdOy3\nRjVc7ejDV1Sk/A2m+TLI/j1h9rndPqARKfeoLUB+gCg+ulHUR6fn9dOchQKBgByx\nuj6qbQzxWQ0D0iwvZ/nWgfZAr8bN3bWxbQFXphwSoOEWEbFRQS9xzUtssEvSaHKo\nZaFRji8yMGUxP/X2WPtSgKwsVXMYqyXfWRGoxw9kQLp7KTVCQtG7Et+XBRADVdG8\njyV17ilkcedyr9BP5VbwMyeDc9ljQsYzIZHlpavjAoGAct8Wktj0hegCoTxSukU1\nSkJ7t4376sSfxVbbUrH86Y1Z55le1O+VkGtqETmk+Q8qf5Ymnal3W9zZ0O9mOE04\notFbiB3ifUbpBAipyxS06SIFwMctmSk2EqBcXa3nZ9eUGqx0JhoQahfyDkFzfwJY\nhiBTWnlMjCiJ40yRYAWDzZg="_s));
	$assignStatic(Cert::LOOPBACK_CERT, $new(Cert, "LOOPBACK_CERT"_s, 2, "RSA"_s, "-----BEGIN CERTIFICATE-----\nMIIDBTCCAe2gAwIBAgIUP2KROX4C6XcgYc5+ojzAbD8uCEkwDQYJKoZIhvcNAQEL\nBQAwEjEQMA4GA1UEAwwHdW5rbm93bjAeFw0yMDAyMDgwNDAwMDRaFw0zMDAyMDUw\nNDAwMDRaMBIxEDAOBgNVBAMMB3Vua25vd24wggEiMA0GCSqGSIb3DQEBAQUAA4IB\nDwAwggEKAoIBAQC8dBwc+nhzuGOcqmeQkcms6JrUPDPcvq6gEEH3dxorzngfxrsl\nlfM6SPJBV4A7HVEcsGhcMoPzzpFVISi3XyLkGuw2WnEW6nKcB2QgaS0Ub8PoDZ7P\nerWGOIjHF1slKxX40tZBiEp1oJANDq7CzSGWiyTorCjbX6OiWZCbhQkw+SpXrAdD\nfzjEAr3y8cgsC7qqTxoz/T9C1+UMmzc88kpAqih7jj2L/i6387dBmV+zrMsNyO0Q\nUPGACzMiSZV3tiwYA6cvDY3WS3fCwLSYUWdHi1orerHQuGOHLK4eyPVDcvuQdUJ/\nT0+jbNZa51scqrBUT/aDlCMCxFUY3vquz2xfAgMBAAGjUzBRMB0GA1UdDgQWBBT3\n166A3+x6YFroYmBwA7a9IwUZYjAfBgNVHSMEGDAWgBT3166A3+x6YFroYmBwA7a9\nIwUZYjAPBgNVHREECDAGhwR/AAABMA0GCSqGSIb3DQEBCwUAA4IBAQBcfcv2J73T\nnHFsCPU3WM6UW2uE8BIM/s/VbjkV1nalFyHi/TU6CN01sDymTABhzIlx5N6PW0HP\nZ0q1C7l1nsoQHwmJO+avOHu3ZjDrLMpU6wTQLEemTd3R5HTyA3/I/FUVFHeuLwJg\nL7OLNc8ouT1hkiIZD+xKwfCEdT3o+ldB+9L4WYRJPt2W3bf3W/yM8JmwW8uf6+U3\nV46xiE5GoOKoIkeAkBAaIbepsZH9rPb7alBSgYgwQYDft9wuGMeNcvPvgVsXjA7I\nRafJVdxVinVMEaOjckIZ5"
		"WlrR5667aIJapZH1r7/tiSQCRaJcILx7pL4x8C+x34z\ndPHbbyP/Rdq9\n-----END CERTIFICATE-----"_s, "MIIEvAIBADANBgkqhkiG9w0BAQEFAASCBKYwggSiAgEAAoIBAQC8dBwc+nhzuGOc\nqmeQkcms6JrUPDPcvq6gEEH3dxorzngfxrsllfM6SPJBV4A7HVEcsGhcMoPzzpFV\nISi3XyLkGuw2WnEW6nKcB2QgaS0Ub8PoDZ7PerWGOIjHF1slKxX40tZBiEp1oJAN\nDq7CzSGWiyTorCjbX6OiWZCbhQkw+SpXrAdDfzjEAr3y8cgsC7qqTxoz/T9C1+UM\nmzc88kpAqih7jj2L/i6387dBmV+zrMsNyO0QUPGACzMiSZV3tiwYA6cvDY3WS3fC\nwLSYUWdHi1orerHQuGOHLK4eyPVDcvuQdUJ/T0+jbNZa51scqrBUT/aDlCMCxFUY\n3vquz2xfAgMBAAECggEAEcYNpLoGxDs+wdbcf6kQUUt61st6xLYDODtwTUuhX0JQ\n2AZhPjE/SF764ijDgk/Ih6EnppJpGYSA9ntzIKBLZSIY5yNuiQ/BkW+tBNWGl+fW\nnTszoDPdjPQmCkjsorvGjbos1O9qvl9PVrvsxZidM1qaN4uNKuuBPl2eItzQOhsM\nYFbmw1nqSX31gukv9a6yM2VgDUiGMlEGwkOphutbqt+wTO+9hEopGZHB7mNc5NO9\nfoWVVI1rzS2yR2d85lsG4YBqBMDp2s2cBofIAe/SSSpBYPR4RfEBDpSaVceR4+cL\nLq52DhLVe/zgVj7LEGdyTZTQxw414sRBIz8KXcRIkQKBgQDon26R0/vToZcxgnpr\nososGh+iTov883DCxX30sntl/GbyUhg50q7Tq5mXGyzodoFHGTL+bOcU3g5O4MOV\n6HlTFe1dUjyC7M0ah6NaCSsl4SPTxtWjeHMBMhNisInDAO+ju4MJAhgoHuYL6p39\nNDmKSDtpaegFz1Q64C1Ea9fsFwKBgQDPZFvQNjSCm06ObsfXLZKS6IEqgGbihMfM\ncv/HjIpAKXNp/Y6Y/YmdFBpdHDkOJ9BXwJqTuMuM69BuldvNX"
		"kkY7zrhPFPawWyF\nO/N1aMNCT89AreBwXMYmgG9yLm1EF1FOuz2oAnWWpcUHBups+cZQikYSQxcOSqrL\nbNTEWffG+QKBgDTk+8lhAGQQ3EY/uwJ6k6oPjp3jamVsHXnMWmWnp/N6vxXeoO+U\n/nfXDyeS4FVDjQXTrwq3TJwsGejJpu+RWvUPiVes+WFz4vdjXDt+1jbYyMLA9Zck\nLlJZRpssNUcIEXWTj6oetct5qymOgbovg93zqr6/fCjGCgsRKnniY8ilAoGAcWGH\nhGQt/v1TTDEqVexXRrOP8iFyngJDjPWN+pVN+9ftfhOeAuwRcOvNofvNAX0ovODS\nYVJVDfzZ3atWGIekZNpdEUg++8hlQM3OwvB8V2N0hgLJQgSmW+Q5iW3yVJh+3hEl\nmxWFHdAQ0E+ql9tR3TRLLK67CxgtGbus8o/RE1kCgYAuf9o6Q++l8H0vNZTnzBNu\nbt0QnLxyh7RuViYuCkzLK+jGftgadVfsRgnOKvxQkMzcXfBgpV5JcVKXtaxDhPxM\nxHwblgOEGlrD4tAwvtPw3GLhmD4Shy8zcT0Lwto81fquskA5yyDGJxbq9CMzWk3w\ndSOT2C7lwW+hkycUio/fTQ=="_s));
	$assignStatic(Cert::$VALUES, Cert::$values());
}

Cert::Cert() {
}

$Class* Cert::load$($String* name, bool initialize) {
	$loadClass(Cert, name, initialize, &_Cert_ClassInfo_, clinit$Cert, allocate$Cert);
	return class$;
}

$Class* Cert::class$ = nullptr;