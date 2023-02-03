/*
 * WARNING: do not edit!
 * Generated by util/mkbuildinf.pl
 *
 * Copyright 2014-2017 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the Apache License 2.0 (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#define PLATFORM "platform: darwin64-arm64-cc"
#define DATE "built on: Tue Dec 14 22:54:16 2021 UTC"

/*
 * Generate compiler_flags as an array of individual characters. This is a
 * workaround for the situation where CFLAGS gets too long for a C90 string
 * literal
 */
static const char compiler_flags[] = {
    'c','o','m','p','i','l','e','r',':',' ','c','c',' ','-','f','P',
    'I','C',' ','-','a','r','c','h',' ','a','r','m','6','4',' ','-',
    'O','3',' ','-','W','a','l','l',' ','-','D','L','_','E','N','D',
    'I','A','N',' ','-','D','O','P','E','N','S','S','L','_','P','I',
    'C',' ','-','D','_','R','E','E','N','T','R','A','N','T',' ','-',
    'D','O','P','E','N','S','S','L','_','B','U','I','L','D','I','N',
    'G','_','O','P','E','N','S','S','L',' ','-','D','N','D','E','B',
    'U','G','\0'
};
