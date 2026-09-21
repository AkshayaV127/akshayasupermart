Package: openssl:x64-mingw-static@3.6.4

**Host Environment**

- Host: x64-windows
- Compiler: GNU 16.1.0
- CMake Version: 4.4.3
-    vcpkg-tool version: 2026-07-27-98d7cb0cf1f4686a3e43aa5672b6230c1d56bce8
    vcpkg-scripts version: e6f9e70a29 2026-09-17 (25 hours ago)

**To Reproduce**

`vcpkg install `

**Failure logs**

```
-- Using cached openssl-openssl-openssl-3.6.4.tar.gz
-- Cleaning sources at C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/buildtrees/openssl/src/nssl-3.6.4-c134d64f50.clean. Use --editable to skip cleaning for the packages you specify.
-- Extracting source C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/openssl-openssl-openssl-3.6.4.tar.gz
-- Applying patch cmake-config.patch
-- Applying patch command-line-length.patch
-- Applying patch script-prefix.patch
-- Applying patch windows/install-layout.patch
-- Applying patch windows/install-pdbs.patch
-- Applying patch windows/install-programs.diff
-- Applying patch unix/android-cc.patch
-- Applying patch unix/move-openssldir.patch
-- Applying patch unix/no-empty-dirs.patch
-- Applying patch unix/no-static-libs-for-shared.patch
-- Using source at C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/buildtrees/openssl/src/nssl-3.6.4-c134d64f50.clean
-- Getting CMake variables for x64-mingw-static
-- Loading CMake variables from C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/buildtrees/openssl/cmake-get-vars_C_CXX-x64-mingw-static.cmake.log
-- Using cached msys2-make-4.4.1-2-x86_64.pkg.tar.zst
-- Using cached msys2-perl-5.40.3-1-x86_64.pkg.tar.zst
-- Using cached msys2-bash-5.3.009-1-x86_64.pkg.tar.zst
-- Using cached msys2-coreutils-8.32-5-x86_64.pkg.tar.zst
-- Using cached msys2-file-5.46-2-x86_64.pkg.tar.zst
-- Using cached msys2-gawk-5.3.2-1-x86_64.pkg.tar.zst
-- Using cached msys2-grep-1~3.0-7-x86_64.pkg.tar.zst
-- Using cached msys2-gzip-1.14-1-x86_64.pkg.tar.zst
-- Using cached msys2-diffutils-3.12-1-x86_64.pkg.tar.zst
-- Using cached msys2-pkgconf-2.5.1-1-x86_64.pkg.tar.zst
-- Using cached msys2-sed-4.9-1-x86_64.pkg.tar.zst
-- Using cached msys2-msys2-runtime-3.6.5-1-x86_64.pkg.tar.zst
-- Using cached msys2-libintl-0.22.5-1-x86_64.pkg.tar.zst
-- Using cached msys2-libxcrypt-4.5.2-1-x86_64.pkg.tar.zst
-- Using cached msys2-libiconv-1.18-1-x86_64.pkg.tar.zst
-- Using cached msys2-gmp-6.3.0-2-x86_64.pkg.tar.zst
-- Using cached msys2-gcc-libs-15.2.0-1-x86_64.pkg.tar.zst
-- Using cached msys2-libbz2-1.0.8-4-x86_64.pkg.tar.zst
-- Using cached msys2-liblzma-5.8.2-1-x86_64.pkg.tar.zst
-- Using cached msys2-libzstd-1.5.7-1-x86_64.pkg.tar.zst
-- Using cached msys2-zlib-1.3.1-1-x86_64.pkg.tar.zst
-- Using cached msys2-libreadline-8.3.003-1-x86_64.pkg.tar.zst
-- Using cached msys2-mpfr-4.2.2-1-x86_64.pkg.tar.zst
-- Using cached msys2-libpcre-8.45-5-x86_64.pkg.tar.zst
-- Using cached msys2-ncurses-6.5.20240831-2-x86_64.pkg.tar.zst
-- Using msys root at C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1
-- Getting CMake variables for x64-mingw-static
-- Using cached msys2-autoconf-wrapper-20250528-1-any.pkg.tar.zst
-- Using cached msys2-automake-wrapper-20250528-1-any.pkg.tar.zst
-- Using cached msys2-binutils-2.45.1-1-x86_64.pkg.tar.zst
-- Using cached msys2-libtool-2.5.4-4-x86_64.pkg.tar.zst
-- Using cached msys2-make-4.4.1-2-x86_64.pkg.tar.zst
-- Using cached msys2-pkgconf-2.5.1-1-x86_64.pkg.tar.zst
-- Using cached msys2-which-2.23-4-x86_64.pkg.tar.zst
-- Using cached msys2-bash-5.3.009-1-x86_64.pkg.tar.zst
-- Using cached msys2-coreutils-8.32-5-x86_64.pkg.tar.zst
-- Using cached msys2-file-5.46-2-x86_64.pkg.tar.zst
-- Using cached msys2-gawk-5.3.2-1-x86_64.pkg.tar.zst
-- Using cached msys2-grep-1~3.0-7-x86_64.pkg.tar.zst
-- Using cached msys2-gzip-1.14-1-x86_64.pkg.tar.zst
-- Using cached msys2-diffutils-3.12-1-x86_64.pkg.tar.zst
-- Using cached msys2-sed-4.9-1-x86_64.pkg.tar.zst
-- Using cached msys2-msys2-runtime-3.6.5-1-x86_64.pkg.tar.zst
-- Using cached msys2-autoconf2.72-2.72-3-any.pkg.tar.zst
-- Using cached msys2-automake1.16-1.16.5-1-any.pkg.tar.zst
-- Using cached msys2-automake1.17-1.17-1-any.pkg.tar.zst
-- Using cached msys2-automake1.18-1.18.1-1-any.pkg.tar.zst
-- Using cached msys2-libiconv-1.18-1-x86_64.pkg.tar.zst
-- Using cached msys2-libintl-0.22.5-1-x86_64.pkg.tar.zst
-- Using cached msys2-zlib-1.3.1-1-x86_64.pkg.tar.zst
-- Using cached msys2-findutils-4.10.0-2-x86_64.pkg.tar.zst
-- Using cached msys2-tar-1.35-3-x86_64.pkg.tar.zst
-- Using cached msys2-gmp-6.3.0-2-x86_64.pkg.tar.zst
-- Using cached msys2-gcc-libs-15.2.0-1-x86_64.pkg.tar.zst
-- Using cached msys2-libbz2-1.0.8-4-x86_64.pkg.tar.zst
-- Using cached msys2-liblzma-5.8.2-1-x86_64.pkg.tar.zst
-- Using cached msys2-libzstd-1.5.7-1-x86_64.pkg.tar.zst
-- Using cached msys2-libreadline-8.3.003-1-x86_64.pkg.tar.zst
-- Using cached msys2-mpfr-4.2.2-1-x86_64.pkg.tar.zst
-- Using cached msys2-libpcre-8.45-5-x86_64.pkg.tar.zst
-- Using cached msys2-m4-1.4.19-2-x86_64.pkg.tar.zst
-- Using cached msys2-perl-5.40.3-1-x86_64.pkg.tar.zst
-- Using cached msys2-ncurses-6.5.20240831-2-x86_64.pkg.tar.zst
-- Using cached msys2-libxcrypt-4.5.2-1-x86_64.pkg.tar.zst
-- Using msys root at C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/fe50d45a6f168d59
-- Using cached msys2-mingw-w64-x86_64-pkgconf-1~2.5.1-1-any.pkg.tar.zst
-- Using cached msys2-msys2-runtime-3.6.5-1-x86_64.pkg.tar.zst
-- Using msys root at C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/3e71d1f8e22ab23f
-- Configuring x64-mingw-static-dbg
-- Configuring x64-mingw-static-rel
-- Building x64-mingw-static-dbg
CMake Error at scripts/cmake/vcpkg_execute_build_process.cmake:134 (message):
    Command failed: C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/fe50d45a6f168d59/usr/bin/make.exe -j 9 --trace -f Makefile build_inst_sw
    Working Directory: C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/buildtrees/openssl/x64-mingw-static-dbg/
    See logs for more information:
      C:\Users\Parameswari\OneDrive\Desktop\AkshayaMart\vcpkg\buildtrees\openssl\build-x64-mingw-static-dbg-out.log
      C:\Users\Parameswari\OneDrive\Desktop\AkshayaMart\vcpkg\buildtrees\openssl\build-x64-mingw-static-dbg-err.log

Call Stack (most recent call first):
  scripts/cmake/vcpkg_build_make.cmake:136 (vcpkg_execute_build_process)
  scripts/cmake/vcpkg_install_make.cmake:2 (vcpkg_build_make)
  ports/openssl/unix/portfile.cmake:141 (vcpkg_install_make)
  ports/openssl/portfile.cmake:80 (include)
  scripts/ports.cmake:209 (include)



```

<details><summary>C:\Users\Parameswari\OneDrive\Desktop\AkshayaMart\vcpkg\buildtrees\openssl\build-x64-mingw-static-dbg-err.log</summary>

```
DEBUG: all keys: APPLINKDIR, BINDIR, CMAKECONFIGDIR, COMMENT, ENGINESDIR, INCLUDEDIR, LDLIBS, LIBDIR, MODULESDIR, PKGCONFIGDIR, PREFIX, VERSION, libdir
DEBUG: LIBDIR = lib, libdir = /C/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg_installed/x64-mingw-static/debug/lib => LIBDIR = lib
No value given for COMMENT
DEBUG: PREFIX = /C/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg_installed/x64-mingw-static/debug => PREFIX = /C/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg_installed/x64-mingw-static/debug
DEBUG: libdir = /C/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg_installed/x64-mingw-static/debug/lib => libdir = /C/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg_installed/x64-mingw-static/debug/lib
DEBUG: BINDIR = bin => BINDIR = /C/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg_installed/x64-mingw-static/debug/bin, BINDIR_REL_PREFIX = bin
DEBUG: LIBDIR = lib => LIBDIR = /C/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg_installed/x64-mingw-static/debug/lib, LIBDIR_REL_PREFIX = lib
DEBUG: INCLUDEDIR = include => INCLUDEDIR = /C/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg_installed/x64-mingw-static/debug/include, INCLUDEDIR_REL_PREFIX = include
DEBUG: APPLINKDIR = include/openssl => APPLINKDIR = /C/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg_installed/x64-mingw-static/debug/include/openssl, APPLINKDIR_REL_PREFIX = include/openssl
DEBUG: ENGINESDIR = /C/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg_installed/x64-mingw-static/debug/lib/engines-3 => ENGINESDIR = /C/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg_installed/x64-mingw-static/debug/lib/engines-3, ENGINESDIR_REL_LIBDIR = engines-3
DEBUG: MODULESDIR = /C/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg_installed/x64-mingw-static/debug/lib/ossl-modules => MODULESDIR = /C/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg_installed/x64-mingw-static/debug/lib/ossl-modules, MODULESDIR_REL_LIBDIR = ossl-modules
DEBUG: PKGCONFIGDIR = /C/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg_installed/x64-mingw-static/debug/lib/pkgconfig => PKGCONFIGDIR = /C/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg_installed/x64-mingw-static/debug/lib/pkgconfig, PKGCONFIGDIR_REL_LIBDIR = pkgconfig
DEBUG: CMAKECONFIGDIR = /C/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg_installed/x64-mingw-static/debug/share/openssl => CMAKECONFIGDIR = /C/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg_installed/x64-mingw-static/debug/share/openssl, CMAKECONFIGDIR_REL_LIBDIR = ../share/openssl
Use of uninitialized value in concatenation (.) or string at ../src/nssl-3.6.4-c134d64f50.clean/util/mkinstallvars.pl line 137.
DEBUG: all keys: APPLINKDIR, BINDIR, CMAKECONFIGDIR, COMMENT, ENGINESDIR, INCLUDEDIR, LDLIBS, LIBDIR, MODULESDIR, PKGCONFIGDIR, PREFIX, VERSION, libdir
Use of uninitialized value in concatenation (.) or string at ../src/nssl-3.6.4-c134d64f50.clean/util/mkinstallvars.pl line 55.
DEBUG: LIBDIR = , libdir =  => Use of uninitialized value in concatenation (.) or string at ../src/nssl-3.6.4-c134d64f50.clean/util/mkinstallvars.pl line 57.
LIBDIR = 
No value given for CMAKECONFIGDIR
No value given for PKGCONFIGDIR
No value given for libdir
DEBUG: PREFIX = . => PREFIX = /c/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/buildtrees/openssl/x64-mingw-static-dbg
Use of uninitialized value in concatenation (.) or string at ../src/nssl-3.6.4-c134d64f50.clean/util/mkinstallvars.pl line 72.
DEBUG: libdir =  => Use of uninitialized value in concatenation (.) or string at ../src/nssl-3.6.4-c134d64f50.clean/util/mkinstallvars.pl line 75.
libdir = 
DEBUG: BINDIR = apps => BINDIR = /c/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/buildtrees/openssl/x64-mingw-static-dbg/apps, BINDIR_REL_PREFIX = apps
DEBUG: LIBDIR = Use of uninitialized value in print at ../src/nssl-3.6.4-c134d64f50.clean/util/mkinstallvars.pl line 91.
 => Use of uninitialized value in concatenation (.) or string at ../src/nssl-3.6.4-c134d64f50.clean/util/mkinstallvars.pl line 108.
LIBDIR = /c/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/buildtrees/openssl/x64-mingw-static-dbg, LIBDIR_REL_PREFIX = 
DEBUG: INCLUDEDIR = [ include, ../src/nssl-3.6.4-c134d64f50.clean/include ] => INCLUDEDIR = [ /c/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/buildtrees/openssl/x64-mingw-static-dbg/include, /c/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/buildtrees/openssl/x64-mingw-static-dbg/../src/nssl-3.6.4-c134d64f50.clean/include ], INCLUDEDIR_REL_PREFIX = [ include, ../src/nssl-3.6.4-c134d64f50.clean/include ]
DEBUG: APPLINKDIR = ms => APPLINKDIR = /c/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/buildtrees/openssl/x64-mingw-static-dbg/ms, APPLINKDIR_REL_PREFIX = ms
DEBUG: ENGINESDIR = engines => ENGINESDIR = /c/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/buildtrees/openssl/x64-mingw-static-dbg/engines, ENGINESDIR_REL_LIBDIR = engines
DEBUG: MODULESDIR = providers => MODULESDIR = /c/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/buildtrees/openssl/x64-mingw-static-dbg/providers, MODULESDIR_REL_LIBDIR = providers
DEBUG: PKGCONFIGDIR = . => PKGCONFIGDIR = /c/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/buildtrees/openssl/x64-mingw-static-dbg, PKGCONFIGDIR_REL_LIBDIR = .
DEBUG: CMAKECONFIGDIR = . => CMAKECONFIGDIR = /c/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/buildtrees/openssl/x64-mingw-static-dbg, CMAKECONFIGDIR_REL_LIBDIR = .
Use of uninitialized value in join or string at ../src/nssl-3.6.4-c134d64f50.clean/util/mkinstallvars.pl line 157.
make[1]: *** [Makefile:5245: crypto/aes/libcrypto-lib-aes_cfb.obj] Error 1
make[1]: *** Waiting for unfinished jobs....
make[1]: *** [Makefile:5247: crypto/aes/libcrypto-lib-aes_ecb.obj] Error 1
make[1]: *** [Makefile:5249: crypto/aes/libcrypto-lib-aes_ige.obj] Error 1
make: *** [Makefile:1782: build_inst_sw] Error 2
```
</details>

<details><summary>C:\Users\Parameswari\OneDrive\Desktop\AkshayaMart\vcpkg\buildtrees\openssl\build-x64-mingw-static-dbg-out.log</summary>

```
Makefile:3950: update target 'builddata.pm' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl ../src/nssl-3.6.4-c134d64f50.clean/util/mkinstallvars.pl COMMENT="This file should be used when building against this OpenSSL build, and should never be installed" PREFIX=. BINDIR=apps APPLINKDIR=ms LIBDIR= INCLUDEDIR=include "INCLUDEDIR=../src/nssl-3.6.4-c134d64f50.clean/include" ENGINESDIR=engines MODULESDIR=providers "VERSION=3.6.4" "LDLIBS=-lws2_32 -lgdi32 -lcrypt32 " > builddata.pm
Makefile:3956: update target 'installdata.pm' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl ../src/nssl-3.6.4-c134d64f50.clean/util/mkinstallvars.pl "PREFIX=/C/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg_installed/x64-mingw-static/debug" BINDIR=bin "LIBDIR=lib" "libdir=/C/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg_installed/x64-mingw-static/debug/lib" INCLUDEDIR=include APPLINKDIR=include/openssl "ENGINESDIR=/C/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg_installed/x64-mingw-static/debug/lib/engines-3" "MODULESDIR=/C/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg_installed/x64-mingw-static/debug/lib/ossl-modules" "PKGCONFIGDIR=/C/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg_installed/x64-mingw-static/debug/lib/pkgconfig" "CMAKECONFIGDIR=/C/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg_installed/x64-mingw-static/debug/share/openssl" "LDLIBS=-lws2_32 -lgdi32 -lcrypt32 " "VERSION=3.6.4" > installdata.pm
Makefile:3964: update target 'include/crypto/bn_conf.h' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-Mconfigdata" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/include/crypto/bn_conf.h.in > include/crypto/bn_conf.h
Makefile:3966: update target 'include/crypto/dso_conf.h' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-Mconfigdata" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/include/crypto/dso_conf.h.in > include/crypto/dso_conf.h
Makefile:3968: update target 'include/openssl/asn1.h' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-Mconfigdata" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/include/openssl/asn1.h.in > include/openssl/asn1.h
Makefile:3970: update target 'include/openssl/asn1t.h' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-Mconfigdata" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/include/openssl/asn1t.h.in > include/openssl/asn1t.h
Makefile:3972: update target 'include/openssl/bio.h' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-Mconfigdata" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/include/openssl/bio.h.in > include/openssl/bio.h
Makefile:3974: update target 'include/openssl/cmp.h' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-Mconfigdata" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/include/openssl/cmp.h.in > include/openssl/cmp.h
Makefile:3976: update target 'include/openssl/cms.h' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-Mconfigdata" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/include/openssl/cms.h.in > include/openssl/cms.h
Makefile:3978: update target 'include/openssl/comp.h' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-Mconfigdata" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/include/openssl/comp.h.in > include/openssl/comp.h
Makefile:3980: update target 'include/openssl/conf.h' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-Mconfigdata" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/include/openssl/conf.h.in > include/openssl/conf.h
Makefile:3982: update target 'include/openssl/core_names.h' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-I../src/nssl-3.6.4-c134d64f50.clean/util/perl" "-Mconfigdata" "-MOpenSSL::paramnames" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/include/openssl/core_names.h.in > include/openssl/core_names.h
Makefile:3984: update target 'include/openssl/crmf.h' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-Mconfigdata" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/include/openssl/crmf.h.in > include/openssl/crmf.h
Makefile:3986: update target 'include/openssl/crypto.h' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-Mconfigdata" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/include/openssl/crypto.h.in > include/openssl/crypto.h
Makefile:3988: update target 'include/openssl/ct.h' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-Mconfigdata" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/include/openssl/ct.h.in > include/openssl/ct.h
Makefile:3990: update target 'include/openssl/err.h' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-Mconfigdata" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/include/openssl/err.h.in > include/openssl/err.h
Makefile:3992: update target 'include/openssl/ess.h' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-Mconfigdata" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/include/openssl/ess.h.in > include/openssl/ess.h
Makefile:3994: update target 'include/openssl/fipskey.h' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-Mconfigdata" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/include/openssl/fipskey.h.in > include/openssl/fipskey.h
Makefile:3996: update target 'include/openssl/lhash.h' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-Mconfigdata" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/include/openssl/lhash.h.in > include/openssl/lhash.h
Makefile:3998: update target 'include/openssl/ocsp.h' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-Mconfigdata" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/include/openssl/ocsp.h.in > include/openssl/ocsp.h
Makefile:4000: update target 'include/openssl/opensslv.h' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-Mconfigdata" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/include/openssl/opensslv.h.in > include/openssl/opensslv.h
Makefile:4002: update target 'include/openssl/pkcs12.h' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-Mconfigdata" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/include/openssl/pkcs12.h.in > include/openssl/pkcs12.h
Makefile:4004: update target 'include/openssl/pkcs7.h' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-Mconfigdata" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/include/openssl/pkcs7.h.in > include/openssl/pkcs7.h
Makefile:4006: update target 'include/openssl/safestack.h' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-Mconfigdata" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/include/openssl/safestack.h.in > include/openssl/safestack.h
Makefile:4008: update target 'include/openssl/srp.h' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-Mconfigdata" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/include/openssl/srp.h.in > include/openssl/srp.h
Makefile:4010: update target 'include/openssl/ssl.h' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-Mconfigdata" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/include/openssl/ssl.h.in > include/openssl/ssl.h
Makefile:4012: update target 'include/openssl/ui.h' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-Mconfigdata" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/include/openssl/ui.h.in > include/openssl/ui.h
Makefile:4014: update target 'include/openssl/x509.h' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-Mconfigdata" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/include/openssl/x509.h.in > include/openssl/x509.h
Makefile:4016: update target 'include/openssl/x509_acert.h' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-Mconfigdata" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/include/openssl/x509_acert.h.in > include/openssl/x509_acert.h
Makefile:4018: update target 'include/openssl/x509_vfy.h' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-Mconfigdata" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/include/openssl/x509_vfy.h.in > include/openssl/x509_vfy.h
Makefile:4020: update target 'include/openssl/x509v3.h' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-Mconfigdata" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/include/openssl/x509v3.h.in > include/openssl/x509v3.h
Makefile:4024: update target 'libcrypto.pc' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-Mconfigdata" "-Mbuilddata" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/exporters/pkg-config/libcrypto.pc.in > libcrypto.pc
Makefile:4026: update target 'libssl.pc' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-Mconfigdata" "-Mbuilddata" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/exporters/pkg-config/libssl.pc.in > libssl.pc
Makefile:4028: update target 'providers/implementations/asymciphers/rsa_enc.c' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-I../src/nssl-3.6.4-c134d64f50.clean/util/perl" "-Mconfigdata" "-MOpenSSL::paramnames" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/asymciphers/rsa_enc.c.in > providers/implementations/asymciphers/rsa_enc.c
Makefile:4030: update target 'providers/implementations/asymciphers/sm2_enc.c' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-I../src/nssl-3.6.4-c134d64f50.clean/util/perl" "-Mconfigdata" "-MOpenSSL::paramnames" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/asymciphers/sm2_enc.c.in > providers/implementations/asymciphers/sm2_enc.c
Makefile:4032: update target 'providers/implementations/ciphers/cipher_chacha20_poly1305.c' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-I../src/nssl-3.6.4-c134d64f50.clean/util/perl" "-Mconfigdata" "-MOpenSSL::paramnames" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/ciphers/cipher_chacha20_poly1305.c.in > providers/implementations/ciphers/cipher_chacha20_poly1305.c
Makefile:4034: update target 'providers/implementations/ciphers/ciphercommon.c' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-I../src/nssl-3.6.4-c134d64f50.clean/util/perl" "-Mconfigdata" "-MOpenSSL::paramnames" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/ciphers/ciphercommon.c.in > providers/implementations/ciphers/ciphercommon.c
Makefile:4036: update target 'providers/implementations/ciphers/ciphercommon_ccm.c' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-I../src/nssl-3.6.4-c134d64f50.clean/util/perl" "-Mconfigdata" "-MOpenSSL::paramnames" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/ciphers/ciphercommon_ccm.c.in > providers/implementations/ciphers/ciphercommon_ccm.c
Makefile:4038: update target 'providers/implementations/ciphers/ciphercommon_gcm.c' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-I../src/nssl-3.6.4-c134d64f50.clean/util/perl" "-Mconfigdata" "-MOpenSSL::paramnames" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/ciphers/ciphercommon_gcm.c.in > providers/implementations/ciphers/ciphercommon_gcm.c
Makefile:4040: update target 'providers/implementations/digests/blake2_prov.c' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-I../src/nssl-3.6.4-c134d64f50.clean/util/perl" "-Mconfigdata" "-MOpenSSL::paramnames" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/digests/blake2_prov.c.in > providers/implementations/digests/blake2_prov.c
Makefile:4042: update target 'providers/implementations/digests/digestcommon.c' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-I../src/nssl-3.6.4-c134d64f50.clean/util/perl" "-Mconfigdata" "-MOpenSSL::paramnames" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/digests/digestcommon.c.in > providers/implementations/digests/digestcommon.c
Makefile:4044: update target 'providers/implementations/digests/sha3_prov.c' due to: target does not exist
...
Skipped 25 lines
...
Makefile:4070: update target 'providers/implementations/kdfs/hkdf.c' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-I../src/nssl-3.6.4-c134d64f50.clean/util/perl" "-Mconfigdata" "-MOpenSSL::paramnames" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/kdfs/hkdf.c.in > providers/implementations/kdfs/hkdf.c
Makefile:4072: update target 'providers/implementations/kdfs/hmacdrbg_kdf.c' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-I../src/nssl-3.6.4-c134d64f50.clean/util/perl" "-Mconfigdata" "-MOpenSSL::paramnames" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/kdfs/hmacdrbg_kdf.c.in > providers/implementations/kdfs/hmacdrbg_kdf.c
Makefile:4074: update target 'providers/implementations/kdfs/kbkdf.c' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-I../src/nssl-3.6.4-c134d64f50.clean/util/perl" "-Mconfigdata" "-MOpenSSL::paramnames" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/kdfs/kbkdf.c.in > providers/implementations/kdfs/kbkdf.c
Makefile:4076: update target 'providers/implementations/kdfs/krb5kdf.c' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-I../src/nssl-3.6.4-c134d64f50.clean/util/perl" "-Mconfigdata" "-MOpenSSL::paramnames" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/kdfs/krb5kdf.c.in > providers/implementations/kdfs/krb5kdf.c
Makefile:4078: update target 'providers/implementations/kdfs/pbkdf1.c' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-I../src/nssl-3.6.4-c134d64f50.clean/util/perl" "-Mconfigdata" "-MOpenSSL::paramnames" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/kdfs/pbkdf1.c.in > providers/implementations/kdfs/pbkdf1.c
Makefile:4080: update target 'providers/implementations/kdfs/pbkdf2.c' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-I../src/nssl-3.6.4-c134d64f50.clean/util/perl" "-Mconfigdata" "-MOpenSSL::paramnames" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/kdfs/pbkdf2.c.in > providers/implementations/kdfs/pbkdf2.c
Makefile:4082: update target 'providers/implementations/kdfs/pkcs12kdf.c' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-I../src/nssl-3.6.4-c134d64f50.clean/util/perl" "-Mconfigdata" "-MOpenSSL::paramnames" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/kdfs/pkcs12kdf.c.in > providers/implementations/kdfs/pkcs12kdf.c
Makefile:4084: update target 'providers/implementations/kdfs/pvkkdf.c' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-I../src/nssl-3.6.4-c134d64f50.clean/util/perl" "-Mconfigdata" "-MOpenSSL::paramnames" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/kdfs/pvkkdf.c.in > providers/implementations/kdfs/pvkkdf.c
Makefile:4086: update target 'providers/implementations/kdfs/scrypt.c' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-I../src/nssl-3.6.4-c134d64f50.clean/util/perl" "-Mconfigdata" "-MOpenSSL::paramnames" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/kdfs/scrypt.c.in > providers/implementations/kdfs/scrypt.c
Makefile:4088: update target 'providers/implementations/kdfs/sshkdf.c' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-I../src/nssl-3.6.4-c134d64f50.clean/util/perl" "-Mconfigdata" "-MOpenSSL::paramnames" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/kdfs/sshkdf.c.in > providers/implementations/kdfs/sshkdf.c
Makefile:4090: update target 'providers/implementations/kdfs/sskdf.c' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-I../src/nssl-3.6.4-c134d64f50.clean/util/perl" "-Mconfigdata" "-MOpenSSL::paramnames" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/kdfs/sskdf.c.in > providers/implementations/kdfs/sskdf.c
Makefile:4092: update target 'providers/implementations/kdfs/tls1_prf.c' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-I../src/nssl-3.6.4-c134d64f50.clean/util/perl" "-Mconfigdata" "-MOpenSSL::paramnames" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/kdfs/tls1_prf.c.in > providers/implementations/kdfs/tls1_prf.c
Makefile:4094: update target 'providers/implementations/kdfs/x942kdf.c' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-I../src/nssl-3.6.4-c134d64f50.clean/util/perl" "-Mconfigdata" "-MOpenSSL::paramnames" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/kdfs/x942kdf.c.in > providers/implementations/kdfs/x942kdf.c
Makefile:4096: update target 'providers/implementations/kem/ec_kem.c' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-I../src/nssl-3.6.4-c134d64f50.clean/util/perl" "-Mconfigdata" "-MOpenSSL::paramnames" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/kem/ec_kem.c.in > providers/implementations/kem/ec_kem.c
Makefile:4098: update target 'providers/implementations/kem/ecx_kem.c' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-I../src/nssl-3.6.4-c134d64f50.clean/util/perl" "-Mconfigdata" "-MOpenSSL::paramnames" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/kem/ecx_kem.c.in > providers/implementations/kem/ecx_kem.c
Makefile:4100: update target 'providers/implementations/kem/ml_kem_kem.c' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-I../src/nssl-3.6.4-c134d64f50.clean/util/perl" "-Mconfigdata" "-MOpenSSL::paramnames" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/kem/ml_kem_kem.c.in > providers/implementations/kem/ml_kem_kem.c
Makefile:4102: update target 'providers/implementations/kem/rsa_kem.c' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-I../src/nssl-3.6.4-c134d64f50.clean/util/perl" "-Mconfigdata" "-MOpenSSL::paramnames" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/kem/rsa_kem.c.in > providers/implementations/kem/rsa_kem.c
Makefile:4104: update target 'providers/implementations/keymgmt/ecx_kmgmt.c' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-I../src/nssl-3.6.4-c134d64f50.clean/util/perl" "-Mconfigdata" "-MOpenSSL::paramnames" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/keymgmt/ecx_kmgmt.c.in > providers/implementations/keymgmt/ecx_kmgmt.c
Makefile:4106: update target 'providers/implementations/keymgmt/lms_kmgmt.c' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-I../src/nssl-3.6.4-c134d64f50.clean/util/perl" "-Mconfigdata" "-MOpenSSL::paramnames" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/keymgmt/lms_kmgmt.c.in > providers/implementations/keymgmt/lms_kmgmt.c
Makefile:4108: update target 'providers/implementations/keymgmt/ml_dsa_kmgmt.c' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-I../src/nssl-3.6.4-c134d64f50.clean/util/perl" "-Mconfigdata" "-MOpenSSL::paramnames" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/keymgmt/ml_dsa_kmgmt.c.in > providers/implementations/keymgmt/ml_dsa_kmgmt.c
Makefile:4110: update target 'providers/implementations/keymgmt/ml_kem_kmgmt.c' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-I../src/nssl-3.6.4-c134d64f50.clean/util/perl" "-Mconfigdata" "-MOpenSSL::paramnames" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/keymgmt/ml_kem_kmgmt.c.in > providers/implementations/keymgmt/ml_kem_kmgmt.c
Makefile:4112: update target 'providers/implementations/keymgmt/mlx_kmgmt.c' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-I../src/nssl-3.6.4-c134d64f50.clean/util/perl" "-Mconfigdata" "-MOpenSSL::paramnames" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/keymgmt/mlx_kmgmt.c.in > providers/implementations/keymgmt/mlx_kmgmt.c
Makefile:4114: update target 'providers/implementations/keymgmt/slh_dsa_kmgmt.c' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-I../src/nssl-3.6.4-c134d64f50.clean/util/perl" "-Mconfigdata" "-MOpenSSL::paramnames" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/keymgmt/slh_dsa_kmgmt.c.in > providers/implementations/keymgmt/slh_dsa_kmgmt.c
Makefile:4116: update target 'providers/implementations/keymgmt/template_kmgmt.c' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-I../src/nssl-3.6.4-c134d64f50.clean/util/perl" "-Mconfigdata" "-MOpenSSL::paramnames" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/keymgmt/template_kmgmt.c.in > providers/implementations/keymgmt/template_kmgmt.c
Makefile:4118: update target 'providers/implementations/macs/cmac_prov.c' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-I../src/nssl-3.6.4-c134d64f50.clean/util/perl" "-Mconfigdata" "-MOpenSSL::paramnames" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/macs/cmac_prov.c.in > providers/implementations/macs/cmac_prov.c
Makefile:4120: update target 'providers/implementations/macs/gmac_prov.c' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-I../src/nssl-3.6.4-c134d64f50.clean/util/perl" "-Mconfigdata" "-MOpenSSL::paramnames" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/macs/gmac_prov.c.in > providers/implementations/macs/gmac_prov.c
Makefile:4122: update target 'providers/implementations/macs/hmac_prov.c' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-I../src/nssl-3.6.4-c134d64f50.clean/util/perl" "-Mconfigdata" "-MOpenSSL::paramnames" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/macs/hmac_prov.c.in > providers/implementations/macs/hmac_prov.c
Makefile:4124: update target 'providers/implementations/macs/kmac_prov.c' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-I../src/nssl-3.6.4-c134d64f50.clean/util/perl" "-Mconfigdata" "-MOpenSSL::paramnames" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/macs/kmac_prov.c.in > providers/implementations/macs/kmac_prov.c
Makefile:4126: update target 'providers/implementations/macs/poly1305_prov.c' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-I../src/nssl-3.6.4-c134d64f50.clean/util/perl" "-Mconfigdata" "-MOpenSSL::paramnames" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/macs/poly1305_prov.c.in > providers/implementations/macs/poly1305_prov.c
Makefile:4128: update target 'providers/implementations/macs/siphash_prov.c' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-I../src/nssl-3.6.4-c134d64f50.clean/util/perl" "-Mconfigdata" "-MOpenSSL::paramnames" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/macs/siphash_prov.c.in > providers/implementations/macs/siphash_prov.c
Makefile:4130: update target 'providers/implementations/rands/drbg_ctr.c' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-I../src/nssl-3.6.4-c134d64f50.clean/util/perl" "-Mconfigdata" "-MOpenSSL::paramnames" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/rands/drbg_ctr.c.in > providers/implementations/rands/drbg_ctr.c
Makefile:4132: update target 'providers/implementations/rands/drbg_hash.c' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-I../src/nssl-3.6.4-c134d64f50.clean/util/perl" "-Mconfigdata" "-MOpenSSL::paramnames" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/rands/drbg_hash.c.in > providers/implementations/rands/drbg_hash.c
Makefile:4134: update target 'providers/implementations/rands/drbg_hmac.c' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-I../src/nssl-3.6.4-c134d64f50.clean/util/perl" "-Mconfigdata" "-MOpenSSL::paramnames" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/rands/drbg_hmac.c.in > providers/implementations/rands/drbg_hmac.c
Makefile:4136: update target 'providers/implementations/rands/fips_crng_test.c' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-I../src/nssl-3.6.4-c134d64f50.clean/util/perl" "-Mconfigdata" "-MOpenSSL::paramnames" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/rands/fips_crng_test.c.in > providers/implementations/rands/fips_crng_test.c
Makefile:4138: update target 'providers/implementations/rands/seed_src.c' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-I../src/nssl-3.6.4-c134d64f50.clean/util/perl" "-Mconfigdata" "-MOpenSSL::paramnames" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/rands/seed_src.c.in > providers/implementations/rands/seed_src.c
Makefile:4140: update target 'providers/implementations/rands/seed_src_jitter.c' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-I../src/nssl-3.6.4-c134d64f50.clean/util/perl" "-Mconfigdata" "-MOpenSSL::paramnames" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/rands/seed_src_jitter.c.in > providers/implementations/rands/seed_src_jitter.c
Makefile:4142: update target 'providers/implementations/rands/test_rng.c' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-I../src/nssl-3.6.4-c134d64f50.clean/util/perl" "-Mconfigdata" "-MOpenSSL::paramnames" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/rands/test_rng.c.in > providers/implementations/rands/test_rng.c
Makefile:4144: update target 'providers/implementations/signature/dsa_sig.c' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-I../src/nssl-3.6.4-c134d64f50.clean/util/perl" "-Mconfigdata" "-MOpenSSL::paramnames" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/signature/dsa_sig.c.in > providers/implementations/signature/dsa_sig.c
Makefile:4146: update target 'providers/implementations/signature/ecdsa_sig.c' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-I../src/nssl-3.6.4-c134d64f50.clean/util/perl" "-Mconfigdata" "-MOpenSSL::paramnames" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/signature/ecdsa_sig.c.in > providers/implementations/signature/ecdsa_sig.c
Makefile:4148: update target 'providers/implementations/signature/eddsa_sig.c' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-I../src/nssl-3.6.4-c134d64f50.clean/util/perl" "-Mconfigdata" "-MOpenSSL::paramnames" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/signature/eddsa_sig.c.in > providers/implementations/signature/eddsa_sig.c
Makefile:4150: update target 'providers/implementations/signature/ml_dsa_sig.c' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-I../src/nssl-3.6.4-c134d64f50.clean/util/perl" "-Mconfigdata" "-MOpenSSL::paramnames" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/signature/ml_dsa_sig.c.in > providers/implementations/signature/ml_dsa_sig.c
Makefile:4152: update target 'providers/implementations/signature/rsa_sig.c' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-I../src/nssl-3.6.4-c134d64f50.clean/util/perl" "-Mconfigdata" "-MOpenSSL::paramnames" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/signature/rsa_sig.c.in > providers/implementations/signature/rsa_sig.c
Makefile:4154: update target 'providers/implementations/signature/slh_dsa_sig.c' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-I../src/nssl-3.6.4-c134d64f50.clean/util/perl" "-Mconfigdata" "-MOpenSSL::paramnames" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/signature/slh_dsa_sig.c.in > providers/implementations/signature/slh_dsa_sig.c
Makefile:4156: update target 'providers/implementations/signature/sm2_sig.c' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-I../src/nssl-3.6.4-c134d64f50.clean/util/perl" "-Mconfigdata" "-MOpenSSL::paramnames" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/signature/sm2_sig.c.in > providers/implementations/signature/sm2_sig.c
Makefile:4158: update target 'providers/implementations/skeymgmt/generic.c' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-I../src/nssl-3.6.4-c134d64f50.clean/util/perl" "-Mconfigdata" "-MOpenSSL::paramnames" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/skeymgmt/generic.c.in > providers/implementations/skeymgmt/generic.c
Makefile:4160: update target 'providers/implementations/storemgmt/file_store.c' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-I../src/nssl-3.6.4-c134d64f50.clean/util/perl" "-Mconfigdata" "-MOpenSSL::paramnames" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/storemgmt/file_store.c.in > providers/implementations/storemgmt/file_store.c
Makefile:4162: update target 'providers/implementations/storemgmt/file_store_any2obj.c' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-I../src/nssl-3.6.4-c134d64f50.clean/util/perl" "-Mconfigdata" "-MOpenSSL::paramnames" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/storemgmt/file_store_any2obj.c.in > providers/implementations/storemgmt/file_store_any2obj.c
Makefile:4164: update target 'providers/implementations/storemgmt/winstore_store.c' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-I../src/nssl-3.6.4-c134d64f50.clean/util/perl" "-Mconfigdata" "-MOpenSSL::paramnames" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/storemgmt/winstore_store.c.in > providers/implementations/storemgmt/winstore_store.c
Makefile:3948: update target 'OpenSSLConfig.cmake' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-Mconfigdata" "-Mbuilddata" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/exporters/cmake/OpenSSLConfig.cmake.in > OpenSSLConfig.cmake
Makefile:3954: update target 'exporters/OpenSSLConfig.cmake' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-Mconfigdata" "-Minstalldata" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/exporters/cmake/OpenSSLConfig.cmake.in > exporters/OpenSSLConfig.cmake
Makefile:3960: update target 'exporters/libcrypto.pc' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-Mconfigdata" "-Minstalldata" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/exporters/pkg-config/libcrypto.pc.in > exporters/libcrypto.pc
Makefile:3962: update target 'exporters/libssl.pc' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-Mconfigdata" "-Minstalldata" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/exporters/pkg-config/libssl.pc.in > exporters/libssl.pc
Makefile:4022: update target 'openssl.pc' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-Mconfigdata" "-Mbuilddata" "-Mbuilddata" "-Mbuilddata" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/exporters/pkg-config/openssl.pc.in > openssl.pc
Makefile:3946: update target 'OpenSSLConfigVersion.cmake' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-Mconfigdata" "-Mconfigdata" "-Mbuilddata" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/exporters/cmake/OpenSSLConfigVersion.cmake.in > OpenSSLConfigVersion.cmake
Makefile:3952: update target 'exporters/OpenSSLConfigVersion.cmake' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-Mconfigdata" "-Mconfigdata" "-Minstalldata" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/exporters/cmake/OpenSSLConfigVersion.cmake.in > exporters/OpenSSLConfigVersion.cmake
Makefile:3958: update target 'exporters/openssl.pc' due to: target does not exist
C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl "-I." "-Mconfigdata" "-Mconfigdata" "-Mconfigdata" "-Minstalldata" "../src/nssl-3.6.4-c134d64f50.clean/util/dofile.pl" "-oMakefile" ../src/nssl-3.6.4-c134d64f50.clean/exporters/pkg-config/openssl.pc.in > exporters/openssl.pc
Makefile:1782: update target 'build_inst_sw' due to: target does not exist
"/usr/bin/make" depend && "/usr/bin/make" _build_inst_sw
make[1]: Entering directory '/c/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/buildtrees/openssl/x64-mingw-static-dbg'
Makefile:1891: update target 'depend' due to: target does not exist
: 
make[1]: Leaving directory '/c/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/buildtrees/openssl/x64-mingw-static-dbg'
make[1]: Entering directory '/c/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/buildtrees/openssl/x64-mingw-static-dbg'
Makefile:5239: update target 'crypto/aes/aes-cfb-avx512.s' due to: target does not exist
CC="C:/msys64/ucrt64/bin/x86_64-w64-mingw32-gcc.exe" C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl ../src/nssl-3.6.4-c134d64f50.clean/crypto/aes/asm/aes-cfb-avx512.pl "mingw64" -I. -Iinclude -Iproviders/common/include -Iproviders/implementations/include -I../src/nssl-3.6.4-c134d64f50.clean -I../src/nssl-3.6.4-c134d64f50.clean/include -I../src/nssl-3.6.4-c134d64f50.clean/providers/common/include -I../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/include -m64 -g -DL_ENDIAN -DOPENSSL_PIC -DOPENSSLDIR="\"/etc/ssl\"" -DENGINESDIR="\"/C/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg_installed/x64-mingw-static/debug/lib/engines-3\"" -DMODULESDIR="\"/C/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg_installed/x64-mingw-static/debug/lib/ossl-modules\"" -DUNICODE -D_UNICODE -DWIN32_LEAN_AND_MEAN -D_MT -DOPENSSL_BUILDING_OPENSSL  -DAES_ASM -DBSAES_ASM -DCMLL_ASM -DECP_NISTZ256_ASM -DGHASH_ASM -DKECCAK1600_ASM -DMD5_ASM -DOPENSSL_BN_ASM_GF2m -DOPENSSL_BN_ASM_MONT -DOPENSSL_BN_ASM_MONT5 -DOPENSSL_CPUID_OBJ -DOPENSSL_IA32_SSE2 -DOPENSSL_SM3_ASM -DPADLOCK_ASM -DPOLY1305_ASM -DRC4_ASM -DSHA1_ASM -DSHA256_ASM -DSHA512_ASM -DSM4_ASM -DSTATIC_LEGACY -DVPAES_ASM -DWHIRLPOOL_ASM -DX25519_ASM  crypto/aes/aes-cfb-avx512.s
Makefile:5243: update target 'crypto/aes/aes-x86_64.s' due to: target does not exist
CC="C:/msys64/ucrt64/bin/x86_64-w64-mingw32-gcc.exe" C:/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/downloads/tools/msys2/9181087bf6e6a4f1/usr/bin/perl ../src/nssl-3.6.4-c134d64f50.clean/crypto/aes/asm/aes-x86_64.pl "mingw64" -I. -Iinclude -Iproviders/common/include -Iproviders/implementations/include -I../src/nssl-3.6.4-c134d64f50.clean -I../src/nssl-3.6.4-c134d64f50.clean/include -I../src/nssl-3.6.4-c134d64f50.clean/providers/common/include -I../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/include -m64 -g -DL_ENDIAN -DOPENSSL_PIC -DOPENSSLDIR="\"/etc/ssl\"" -DENGINESDIR="\"/C/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg_installed/x64-mingw-static/debug/lib/engines-3\"" -DMODULESDIR="\"/C/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg_installed/x64-mingw-static/debug/lib/ossl-modules\"" -DUNICODE -D_UNICODE -DWIN32_LEAN_AND_MEAN -D_MT -DOPENSSL_BUILDING_OPENSSL  -DAES_ASM -DBSAES_ASM -DCMLL_ASM -DECP_NISTZ256_ASM -DGHASH_ASM -DKECCAK1600_ASM -DMD5_ASM -DOPENSSL_BN_ASM_GF2m -DOPENSSL_BN_ASM_MONT -DOPENSSL_BN_ASM_MONT5 -DOPENSSL_CPUID_OBJ -DOPENSSL_IA32_SSE2 -DOPENSSL_SM3_ASM -DPADLOCK_ASM -DPOLY1305_ASM -DRC4_ASM -DSHA1_ASM -DSHA256_ASM -DSHA512_ASM -DSM4_ASM -DSTATIC_LEGACY -DVPAES_ASM -DWHIRLPOOL_ASM -DX25519_ASM  crypto/aes/aes-x86_64.s
Makefile:5245: update target 'crypto/aes/libcrypto-lib-aes_cfb.obj' due to: target does not exist
C:/msys64/ucrt64/bin/x86_64-w64-mingw32-gcc.exe  -I. -Iinclude -Iproviders/common/include -Iproviders/implementations/include -I../src/nssl-3.6.4-c134d64f50.clean -I../src/nssl-3.6.4-c134d64f50.clean/include -I../src/nssl-3.6.4-c134d64f50.clean/providers/common/include -I../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/include  -DAES_ASM -DBSAES_ASM -DCMLL_ASM -DECP_NISTZ256_ASM -DGHASH_ASM -DKECCAK1600_ASM -DMD5_ASM -DOPENSSL_BN_ASM_GF2m -DOPENSSL_BN_ASM_MONT -DOPENSSL_BN_ASM_MONT5 -DOPENSSL_CPUID_OBJ -DOPENSSL_IA32_SSE2 -DOPENSSL_SM3_ASM -DPADLOCK_ASM -DPOLY1305_ASM -DRC4_ASM -DSHA1_ASM -DSHA256_ASM -DSHA512_ASM -DSM4_ASM -DSTATIC_LEGACY -DVPAES_ASM -DWHIRLPOOL_ASM -DX25519_ASM -m64 -g -DL_ENDIAN -DOPENSSL_PIC -DOPENSSLDIR="\"/etc/ssl\"" -DENGINESDIR="\"/C/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg_installed/x64-mingw-static/debug/lib/engines-3\"" -DMODULESDIR="\"/C/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg_installed/x64-mingw-static/debug/lib/ossl-modules\"" -DUNICODE -D_UNICODE -DWIN32_LEAN_AND_MEAN -D_MT -DOPENSSL_BUILDING_OPENSSL   -c -o crypto/aes/libcrypto-lib-aes_cfb.obj ../src/nssl-3.6.4-c134d64f50.clean/crypto/aes/aes_cfb.c
Makefile:5247: update target 'crypto/aes/libcrypto-lib-aes_ecb.obj' due to: target does not exist
C:/msys64/ucrt64/bin/x86_64-w64-mingw32-gcc.exe  -I. -Iinclude -Iproviders/common/include -Iproviders/implementations/include -I../src/nssl-3.6.4-c134d64f50.clean -I../src/nssl-3.6.4-c134d64f50.clean/include -I../src/nssl-3.6.4-c134d64f50.clean/providers/common/include -I../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/include  -DAES_ASM -DBSAES_ASM -DCMLL_ASM -DECP_NISTZ256_ASM -DGHASH_ASM -DKECCAK1600_ASM -DMD5_ASM -DOPENSSL_BN_ASM_GF2m -DOPENSSL_BN_ASM_MONT -DOPENSSL_BN_ASM_MONT5 -DOPENSSL_CPUID_OBJ -DOPENSSL_IA32_SSE2 -DOPENSSL_SM3_ASM -DPADLOCK_ASM -DPOLY1305_ASM -DRC4_ASM -DSHA1_ASM -DSHA256_ASM -DSHA512_ASM -DSM4_ASM -DSTATIC_LEGACY -DVPAES_ASM -DWHIRLPOOL_ASM -DX25519_ASM -m64 -g -DL_ENDIAN -DOPENSSL_PIC -DOPENSSLDIR="\"/etc/ssl\"" -DENGINESDIR="\"/C/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg_installed/x64-mingw-static/debug/lib/engines-3\"" -DMODULESDIR="\"/C/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg_installed/x64-mingw-static/debug/lib/ossl-modules\"" -DUNICODE -D_UNICODE -DWIN32_LEAN_AND_MEAN -D_MT -DOPENSSL_BUILDING_OPENSSL   -c -o crypto/aes/libcrypto-lib-aes_ecb.obj ../src/nssl-3.6.4-c134d64f50.clean/crypto/aes/aes_ecb.c
Makefile:5249: update target 'crypto/aes/libcrypto-lib-aes_ige.obj' due to: target does not exist
C:/msys64/ucrt64/bin/x86_64-w64-mingw32-gcc.exe  -I. -Iinclude -Iproviders/common/include -Iproviders/implementations/include -I../src/nssl-3.6.4-c134d64f50.clean -I../src/nssl-3.6.4-c134d64f50.clean/include -I../src/nssl-3.6.4-c134d64f50.clean/providers/common/include -I../src/nssl-3.6.4-c134d64f50.clean/providers/implementations/include  -DAES_ASM -DBSAES_ASM -DCMLL_ASM -DECP_NISTZ256_ASM -DGHASH_ASM -DKECCAK1600_ASM -DMD5_ASM -DOPENSSL_BN_ASM_GF2m -DOPENSSL_BN_ASM_MONT -DOPENSSL_BN_ASM_MONT5 -DOPENSSL_CPUID_OBJ -DOPENSSL_IA32_SSE2 -DOPENSSL_SM3_ASM -DPADLOCK_ASM -DPOLY1305_ASM -DRC4_ASM -DSHA1_ASM -DSHA256_ASM -DSHA512_ASM -DSM4_ASM -DSTATIC_LEGACY -DVPAES_ASM -DWHIRLPOOL_ASM -DX25519_ASM -m64 -g -DL_ENDIAN -DOPENSSL_PIC -DOPENSSLDIR="\"/etc/ssl\"" -DENGINESDIR="\"/C/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg_installed/x64-mingw-static/debug/lib/engines-3\"" -DMODULESDIR="\"/C/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg_installed/x64-mingw-static/debug/lib/ossl-modules\"" -DUNICODE -D_UNICODE -DWIN32_LEAN_AND_MEAN -D_MT -DOPENSSL_BUILDING_OPENSSL   -c -o crypto/aes/libcrypto-lib-aes_ige.obj ../src/nssl-3.6.4-c134d64f50.clean/crypto/aes/aes_ige.c
make[1]: Leaving directory '/c/Users/Parameswari/OneDrive/Desktop/AkshayaMart/vcpkg/buildtrees/openssl/x64-mingw-static-dbg'
```
</details>

**Additional context**

<details><summary>vcpkg.json</summary>

```
{
  "name": "akshayamart",
  "version-string": "0.1.0",
  "dependencies": [
    "drogon",
    "nlohmann-json",
    "libsodium",
    "spdlog",
    "gtest"
  ]
}

```
</details>
