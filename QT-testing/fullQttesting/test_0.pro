QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
LIBS += -lsqlite3 -lssl -lcrypto

SOURCES += \
    AI_Code.cpp \
    GameSettings.cpp \
    PasswordHash.cpp \
    database.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    AItest.h \
    GameSettings.h \
    mainwindow.h \
    openssl/aes.h \
    openssl/asn1.h \
    openssl/asn1_mac.h \
    openssl/asn1err.h \
    openssl/asn1t.h \
    openssl/async.h \
    openssl/asyncerr.h \
    openssl/bio.h \
    openssl/bioerr.h \
    openssl/blowfish.h \
    openssl/bn.h \
    openssl/bnerr.h \
    openssl/buffer.h \
    openssl/buffererr.h \
    openssl/camellia.h \
    openssl/cast.h \
    openssl/cmac.h \
    openssl/cmp.h \
    openssl/cmp_util.h \
    openssl/cmperr.h \
    openssl/cms.h \
    openssl/cmserr.h \
    openssl/comp.h \
    openssl/comperr.h \
    openssl/conf.h \
    openssl/conf_api.h \
    openssl/conferr.h \
    openssl/configuration.h \
    openssl/conftypes.h \
    openssl/core.h \
    openssl/core_dispatch.h \
    openssl/core_names.h \
    openssl/core_object.h \
    openssl/crmf.h \
    openssl/crmferr.h \
    openssl/crypto.h \
    openssl/cryptoerr.h \
    openssl/cryptoerr_legacy.h \
    openssl/ct.h \
    openssl/cterr.h \
    openssl/decoder.h \
    openssl/decodererr.h \
    openssl/des.h \
    openssl/dh.h \
    openssl/dherr.h \
    openssl/dsa.h \
    openssl/dsaerr.h \
    openssl/dtls1.h \
    openssl/e_os2.h \
    openssl/ebcdic.h \
    openssl/ec.h \
    openssl/ecdh.h \
    openssl/ecdsa.h \
    openssl/ecerr.h \
    openssl/encoder.h \
    openssl/encodererr.h \
    openssl/engine.h \
    openssl/engineerr.h \
    openssl/err.h \
    openssl/ess.h \
    openssl/esserr.h \
    openssl/evp.h \
    openssl/evperr.h \
    openssl/fips_names.h \
    openssl/fipskey.h \
    openssl/hmac.h \
    openssl/http.h \
    openssl/httperr.h \
    openssl/idea.h \
    openssl/kdf.h \
    openssl/kdferr.h \
    openssl/lhash.h \
    openssl/macros.h \
    openssl/md2.h \
    openssl/md4.h \
    openssl/md5.h \
    openssl/mdc2.h \
    openssl/modes.h \
    openssl/obj_mac.h \
    openssl/objects.h \
    openssl/objectserr.h \
    openssl/ocsp.h \
    openssl/ocsperr.h \
    openssl/opensslconf.h \
    openssl/opensslv.h \
    openssl/ossl_typ.h \
    openssl/param_build.h \
    openssl/params.h \
    openssl/pem.h \
    openssl/pem2.h \
    openssl/pemerr.h \
    openssl/pkcs12.h \
    openssl/pkcs12err.h \
    openssl/pkcs7.h \
    openssl/pkcs7err.h \
    openssl/prov_ssl.h \
    openssl/proverr.h \
    openssl/provider.h \
    openssl/rand.h \
    openssl/randerr.h \
    openssl/rc2.h \
    openssl/rc4.h \
    openssl/rc5.h \
    openssl/ripemd.h \
    openssl/rsa.h \
    openssl/rsaerr.h \
    openssl/safestack.h \
    openssl/seed.h \
    openssl/self_test.h \
    openssl/sha.h \
    openssl/srp.h \
    openssl/srtp.h \
    openssl/ssl.h \
    openssl/ssl2.h \
    openssl/ssl3.h \
    openssl/sslerr.h \
    openssl/sslerr_legacy.h \
    openssl/stack.h \
    openssl/store.h \
    openssl/storeerr.h \
    openssl/symhacks.h \
    openssl/tls1.h \
    openssl/trace.h \
    openssl/ts.h \
    openssl/tserr.h \
    openssl/txt_db.h \
    openssl/types.h \
    openssl/ui.h \
    openssl/uierr.h \
    openssl/whrlpool.h \
    openssl/x509.h \
    openssl/x509_vfy.h \
    openssl/x509err.h \
    openssl/x509v3.h \
    openssl/x509v3err.h \
    queue.h \
    sqlite3.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    game_data.db
