/* Generated by Nim Compiler v0.17.2 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, amd64, gcc */
/* Command for C compiler:
   C:\nim\nim-0.17.2\dist\mingw64\bin\gcc.exe -c  -w -mno-ms-bitfields  -IC:\nim\nim-0.17.2\lib -o C:\Users\takala\Desktop\nim\shortest_path\nimcache\stdlib_winlean.o C:\Users\takala\Desktop\nim\shortest_path\nimcache\stdlib_winlean.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef powerpc
#undef unix
typedef struct tyObject_GUID_J2WQBMgezjwf6Trblkflgg tyObject_GUID_J2WQBMgezjwf6Trblkflgg;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_FILETIME_bs4NMleDDVF7xsEK0SGLBw tyObject_FILETIME_bs4NMleDDVF7xsEK0SGLBw;
typedef NI8 tyArray_9cWG514ToTTjfTPLhXXV0IQ[8];
struct tyObject_GUID_J2WQBMgezjwf6Trblkflgg {
NI32 D1;
NI16 D2;
NI16 D3;
tyArray_9cWG514ToTTjfTPLhXXV0IQ D4;
};
typedef N_STDCALL_PTR(NCSTRING, tyProc_5ctyytqoGFQ0BA1imFGbVw) (int family, void* paddr, NCSTRING pStringBuffer, NI32 stringBufSize);
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_STDCALL_PTR(void, tyProc_9bc9cLDdaqTE6n5J78feKRYg) (tyObject_FILETIME_bs4NMleDDVF7xsEK0SGLBw* lpSystemTimeAsFileTime);
struct tyObject_FILETIME_bs4NMleDDVF7xsEK0SGLBw {
NI32 dwLowDateTime;
NI32 dwHighDateTime;
};
typedef N_STDCALL_PTR(NI32, tyProc_9bXer9a4ps9aSGctILcxWReVw) (void);
typedef N_STDCALL_PTR(NI32, tyProc_aO673xGTLLxou7P7GxoCXA) (NI32 dwFlags, void* lpSource, NI32 dwMessageId, NI32 dwLanguageId, void* lpBuffer, NI32 nSize, void* Arguments);
typedef N_STDCALL_PTR(void, tyProc_im9buRnIvptJfzdASYMEbBA) (void* p);
typedef N_STDCALL_PTR(NI16*, tyProc_9cu0cWy2jNXKVhds9cs4T9a9cA) (void);
typedef N_STDCALL_PTR(NI32, tyProc_hayl9b1HhJokJ1Zo9ctoglPg) (NI16* para1);
typedef N_STDCALL_PTR(NI32, tyProc_IwsYs9blTXXmAlfsBWq604w) (NI16* lpName, NI16* lpValue);
N_NIMCALL(void*, loadLib_EFK1MHQsQvQPg5NaJH389bA)(NimStringDesc* path, NIM_BOOL global_symbols);
N_NIMCALL(void*, symAddr_fM7lTRTvv9a9axreJA2Bx7jA_2)(void* lib, NCSTRING name);
N_NIMCALL(void*, nimLoadLibrary)(NimStringDesc* path);
N_NOINLINE(void, nimLoadLibraryError)(NimStringDesc* path);
N_NIMCALL(void*, nimGetProcAddr)(void* lib, NCSTRING name);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
tyObject_GUID_J2WQBMgezjwf6Trblkflgg WSAID_CONNECTEX_YmR9c9crObjjK9ckt1ygsPQKg;
tyObject_GUID_J2WQBMgezjwf6Trblkflgg WSAID_ACCEPTEX_pwoOiDuyZgHBOLaI2GSBpg;
tyObject_GUID_J2WQBMgezjwf6Trblkflgg WSAID_GETACCEPTEXSOCKADDRS_rSjtFMq7pCHQR2EQvcKbDg;
tyProc_5ctyytqoGFQ0BA1imFGbVw inet_ntop_real_FVXn9aJ5AOo23ScDsZUc9aZw;
void* ws2_hGspZUrVrEMpO9aP9c3dJQPQ;
static void* TM_k6kyf4Co79a84IkK9blFuQVA_5;
tyProc_9bc9cLDdaqTE6n5J78feKRYg Dl_128825_;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
tyProc_9bXer9a4ps9aSGctILcxWReVw Dl_127830_;
tyProc_aO673xGTLLxou7P7GxoCXA Dl_127835_;
tyProc_im9buRnIvptJfzdASYMEbBA Dl_128001_;
tyProc_9cu0cWy2jNXKVhds9cs4T9a9cA Dl_128632_;
tyProc_hayl9b1HhJokJ1Zo9ctoglPg Dl_128634_;
tyProc_IwsYs9blTXXmAlfsBWq604w Dl_128018_;
NIM_CONST tyArray_9cWG514ToTTjfTPLhXXV0IQ TM_k6kyf4Co79a84IkK9blFuQVA_2 = {((NI8) -114),
((NI8) -23),
((NI8) 118),
((NI8) -27),
((NI8) -116),
((NI8) 116),
((NI8) 6),
((NI8) 62)}
;
NIM_CONST tyArray_9cWG514ToTTjfTPLhXXV0IQ TM_k6kyf4Co79a84IkK9blFuQVA_3 = {((NI8) -107),
((NI8) -54),
((NI8) 0),
((NI8) -128),
((NI8) 95),
((NI8) 72),
((NI8) -95),
((NI8) -110)}
;
STRING_LITERAL(TM_k6kyf4Co79a84IkK9blFuQVA_4, "Ws2_32.dll", 10);
STRING_LITERAL(TM_k6kyf4Co79a84IkK9blFuQVA_7, "kernel32", 8);
STRING_LITERAL(TM_k6kyf4Co79a84IkK9blFuQVA_8, "kernel32", 8);

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI T1_;
	T1_ = (NI)0;
	{
		if (!(framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA4_;
		T1_ = ((NI) 0);
	}
	goto LA2_;
	LA4_: ;
	{
		T1_ = ((NI) ((NI16)((*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1))));
	}
	LA2_: ;
	(*s).calldepth = ((NI16) (T1_));
	(*s).prev = framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA9_;
		stackOverflow_II46IjNZztN9bmbxUD8dt8g();
	}
	LA9_: ;
}

static N_INLINE(void, popFrame)(void) {
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = (*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).prev;
}

N_NIMCALL(NI64, rdFileTime_8xfVp1z4bc5fRCRgoEFhIQ)(tyObject_FILETIME_bs4NMleDDVF7xsEK0SGLBw f) {
	NI64 result;
	nimfr_("rdFileTime", "winlean.nim");
	result = (NI64)0;
	nimln_(396, "winlean.nim");
	result = (NI64)(((NI64)(NU64)(NU32)(f.dwLowDateTime)) | (NI64)((NU64)(((NI64)(NU64)(NU32)(f.dwHighDateTime))) << (NU64)(((NI) 32))));
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_winleanInit000)(void) {
	tyObject_GUID_J2WQBMgezjwf6Trblkflgg T1_;
	tyObject_GUID_J2WQBMgezjwf6Trblkflgg T2_;
	tyObject_GUID_J2WQBMgezjwf6Trblkflgg T3_;
	nimfr_("winlean", "winlean.nim");
	nimln_(825, "winlean.nim");
	memset((void*)(&T1_), 0, sizeof(T1_));
	T1_.D1 = ((NI32) 631375801);
	T1_.D2 = ((NI16) -8717);
	T1_.D3 = ((NI16) 18016);
	memcpy((void*)T1_.D4, (NIM_CONST void*)TM_k6kyf4Co79a84IkK9blFuQVA_2, sizeof(tyArray_9cWG514ToTTjfTPLhXXV0IQ));
	WSAID_CONNECTEX_YmR9c9crObjjK9ckt1ygsPQKg = T1_;
	nimln_(827, "winlean.nim");
	memset((void*)(&T2_), 0, sizeof(T2_));
	T2_.D1 = ((NI32) -1254720015);
	T2_.D2 = ((NI16) -13396);
	T2_.D3 = ((NI16) 4559);
	memcpy((void*)T2_.D4, (NIM_CONST void*)TM_k6kyf4Co79a84IkK9blFuQVA_3, sizeof(tyArray_9cWG514ToTTjfTPLhXXV0IQ));
	WSAID_ACCEPTEX_pwoOiDuyZgHBOLaI2GSBpg = T2_;
	nimln_(829, "winlean.nim");
	memset((void*)(&T3_), 0, sizeof(T3_));
	T3_.D1 = ((NI32) -1254720014);
	T3_.D2 = ((NI16) -13396);
	T3_.D3 = ((NI16) 4559);
	memcpy((void*)T3_.D4, (NIM_CONST void*)TM_k6kyf4Co79a84IkK9blFuQVA_3, sizeof(tyArray_9cWG514ToTTjfTPLhXXV0IQ));
	WSAID_GETACCEPTEXSOCKADDRS_rSjtFMq7pCHQR2EQvcKbDg = T3_;
	nimln_(879, "winlean.nim");
	inet_ntop_real_FVXn9aJ5AOo23ScDsZUc9aZw = NIM_NIL;
	nimln_(881, "winlean.nim");
	ws2_hGspZUrVrEMpO9aP9c3dJQPQ = loadLib_EFK1MHQsQvQPg5NaJH389bA(((NimStringDesc*) &TM_k6kyf4Co79a84IkK9blFuQVA_4), NIM_FALSE);
	nimln_(882, "winlean.nim");
	{
		void* T8_;
		nimln_(378, "system.nim");
		nimln_(882, "winlean.nim");
		if (!!((ws2_hGspZUrVrEMpO9aP9c3dJQPQ == NIM_NIL))) goto LA6_;
		nimln_(883, "winlean.nim");
		T8_ = (void*)0;
		T8_ = symAddr_fM7lTRTvv9a9axreJA2Bx7jA_2(ws2_hGspZUrVrEMpO9aP9c3dJQPQ, "inet_ntop");
		inet_ntop_real_FVXn9aJ5AOo23ScDsZUc9aZw = ((tyProc_5ctyytqoGFQ0BA1imFGbVw) (T8_));
	}
	LA6_: ;
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_winleanDatInit000)(void) {
if (!((TM_k6kyf4Co79a84IkK9blFuQVA_5 = nimLoadLibrary((NimStringDesc*) &TM_k6kyf4Co79a84IkK9blFuQVA_7))
)) nimLoadLibraryError((NimStringDesc*) &TM_k6kyf4Co79a84IkK9blFuQVA_8);
	Dl_128825_ = (tyProc_9bc9cLDdaqTE6n5J78feKRYg) nimGetProcAddr(TM_k6kyf4Co79a84IkK9blFuQVA_5, "GetSystemTimeAsFileTime");
	Dl_127830_ = (tyProc_9bXer9a4ps9aSGctILcxWReVw) nimGetProcAddr(TM_k6kyf4Co79a84IkK9blFuQVA_5, "GetLastError");
	Dl_127835_ = (tyProc_aO673xGTLLxou7P7GxoCXA) nimGetProcAddr(TM_k6kyf4Co79a84IkK9blFuQVA_5, "FormatMessageW");
	Dl_128001_ = (tyProc_im9buRnIvptJfzdASYMEbBA) nimGetProcAddr(TM_k6kyf4Co79a84IkK9blFuQVA_5, "LocalFree");
	Dl_128632_ = (tyProc_9cu0cWy2jNXKVhds9cs4T9a9cA) nimGetProcAddr(TM_k6kyf4Co79a84IkK9blFuQVA_5, "GetEnvironmentStringsW");
	Dl_128634_ = (tyProc_hayl9b1HhJokJ1Zo9ctoglPg) nimGetProcAddr(TM_k6kyf4Co79a84IkK9blFuQVA_5, "FreeEnvironmentStringsW");
	Dl_128018_ = (tyProc_IwsYs9blTXXmAlfsBWq604w) nimGetProcAddr(TM_k6kyf4Co79a84IkK9blFuQVA_5, "SetEnvironmentVariableW");
}

