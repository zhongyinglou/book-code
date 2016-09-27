/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 3.01.75 */
/* at Thu Oct 23 11:33:45 1997
 */
/* Compiler settings for dualserver.idl:
    Os (OptLev=s), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: none
*/
//@@MIDL_FILE_HEADING(  )
#ifdef __cplusplus
extern "C" {
#endif


#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID {
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

const IID IID_IMath = {0xD6F16BC1, 0x4B83, 0x11d1, {0x88, 0x3A, 0x44, 0x45, 0x53, 0x54, 0x00, 0x00}};


const IID LIBID_DualServerLib = {0xD6F16BC2, 0x4B83, 0x11d1, {0x88, 0x3A, 0x44, 0x45, 0x53, 0x54, 0x00, 0x00}};


const CLSID CLSID_Math = {0xD6F16BC4, 0x4B83, 0x11d1, {0x88, 0x3A, 0x44, 0x45, 0x53, 0x54, 0x00, 0x00}};


#ifdef __cplusplus
}
#endif

