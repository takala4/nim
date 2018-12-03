/* Generated by Nim Compiler v0.17.2 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, amd64, gcc */
/* Command for C compiler:
   C:\nim\nim-0.17.2\dist\mingw64\bin\gcc.exe -c  -w -mno-ms-bitfields  -IC:\nim\nim-0.17.2\lib -o C:\Users\takala\Desktop\nim\scraping\nimcache\stdlib_sets.o C:\Users\takala\Desktop\nim\scraping\nimcache\stdlib_sets.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
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
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_HashSet_J1RbOJyRcRl1E5zDK6YKcQ tyObject_HashSet_J1RbOJyRcRl1E5zDK6YKcQ;
typedef struct tySequence_8Np6tlClE5az1CyqZdN19bQ tySequence_8Np6tlClE5az1CyqZdN19bQ;
typedef struct tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_HashSet_J1RbOJyRcRl1E5zDK6YKcQ {
tySequence_8Np6tlClE5az1CyqZdN19bQ* data;
NI counter;
};
struct tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ {
NI Field0;
NI Field1;
};
typedef NU8 tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc_ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tySequence_8Np6tlClE5az1CyqZdN19bQ {
  TGenericSeq Sup;
  tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ data[SEQ_DECL_SIZE];
};
static N_INLINE(NIM_BOOL, isEmpty_UshbaKGVTNLaJdFZ6zcwswsets)(NI hcode);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NIM_BOOL, isFilled_UshbaKGVTNLaJdFZ6zcwsw_2sets)(NI hcode);
static N_INLINE(NIM_BOOL, mustRehash_flzFqVXoQqeNJHN4qDyOhwsets)(NI length, NI counter);
N_NIMCALL(void, failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA)(NimStringDesc* msg);
N_NIMCALL(NI, mulInt)(NI a, NI b);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, rightSize_9aQ9aswOyc6W7eMnLOsk3W7Asets)(NI count);
N_NIMCALL(NI, nextPowerOfTwo_gcitR3TEXHJ3GR9bmwIvtRA)(NI x);
static N_INLINE(NI, divInt)(NI a, NI b);
N_NOINLINE(void, raiseDivByZero)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
static N_INLINE(NI, nextTry_iM1OyigHU0QXXBzsM5QjYAsets)(NI h, NI maxHash);
N_NIMCALL(void, init_9c8NRZCrp0RIj28igIK3trA)(tyObject_HashSet_J1RbOJyRcRl1E5zDK6YKcQ* s, NI initialSize);
N_NIMCALL(NIM_BOOL, isPowerOfTwo_M0Db9b9cHxuUgw2ZF0P8utPg)(NI x);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
static N_NIMCALL(void, Marker_tySequence_8Np6tlClE5az1CyqZdN19bQ)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NIM_BOOL, isValid_JFzq9bIVYKxl54COuFCF9bSA)(tyObject_HashSet_J1RbOJyRcRl1E5zDK6YKcQ s);
static N_INLINE(NI, rawGet_8BZcW9arrDLi5cvAlu40Aswsets)(tyObject_HashSet_J1RbOJyRcRl1E5zDK6YKcQ s, NI key, NI* hc);
static N_INLINE(NI, hash_M6zZEYz39abIOUmj0QsNREghashes)(NI x);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(void, enlarge_UfNOE2WKRXdG3IkKj9a3bBw)(tyObject_HashSet_J1RbOJyRcRl1E5zDK6YKcQ* s);
static N_INLINE(NI, rawGetKnownHC_jnVAYE9b4aFtwThD2krrpcAsets)(tyObject_HashSet_J1RbOJyRcRl1E5zDK6YKcQ s, NI key, NI hc);
N_NIMCALL(void, rawInsert_w4R39aNwJUympF4c5lYF1tg)(tyObject_HashSet_J1RbOJyRcRl1E5zDK6YKcQ* s, tySequence_8Np6tlClE5az1CyqZdN19bQ** data, NI key, NI hc, NI h);
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
TNimType NTI_1v9bKyksXWMsm0vNwmZ4EuQ_;
extern TNimType NTI_rR5Bzr1D5krxoo1NcNyeMA_;
TNimType NTI_8Np6tlClE5az1CyqZdN19bQ_;
TNimType NTI_J1RbOJyRcRl1E5zDK6YKcQ_;
STRING_LITERAL(TM_0JXiWyhP5OCO8jWMA6sb1w_2, "\015\012  counter < length ", 21);
STRING_LITERAL(TM_0JXiWyhP5OCO8jWMA6sb1w_10, "isPowerOfTwo(initialSize) ", 26);
STRING_LITERAL(TM_0JXiWyhP5OCO8jWMA6sb1w_12, "isValid(s) The set needs to be initialized.", 43);

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

static N_INLINE(NIM_BOOL, isEmpty_UshbaKGVTNLaJdFZ6zcwswsets)(NI hcode) {
	NIM_BOOL result;
	nimfr_("isEmpty", "sets.nim");
	result = (NIM_BOOL)0;
	nimln_(60, "sets.nim");
	result = (hcode == ((NI) 0));
	popFrame();
	return result;
}

static N_INLINE(NIM_BOOL, isFilled_UshbaKGVTNLaJdFZ6zcwsw_2sets)(NI hcode) {
	NIM_BOOL result;
	nimfr_("isFilled", "sets.nim");
	result = (NIM_BOOL)0;
	nimln_(63, "sets.nim");
	nimln_(378, "system.nim");
	nimln_(63, "sets.nim");
	result = !((hcode == ((NI) 0)));
	popFrame();
	return result;
}

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ (NI)((NU64) ~(b))));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NIM_BOOL, mustRehash_flzFqVXoQqeNJHN4qDyOhwsets)(NI length, NI counter) {
	NIM_BOOL result;
	NIM_BOOL T5_;
	NI TM_0JXiWyhP5OCO8jWMA6sb1w_3;
	NI TM_0JXiWyhP5OCO8jWMA6sb1w_4;
	NI TM_0JXiWyhP5OCO8jWMA6sb1w_5;
	nimfr_("mustRehash", "sets.nim");
	result = (NIM_BOOL)0;
	nimln_(127, "sets.nim");
	{
		if (!!((counter < length))) goto LA3_;
		failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA(((NimStringDesc*) &TM_0JXiWyhP5OCO8jWMA6sb1w_2));
	}
	LA3_: ;
	nimln_(128, "sets.nim");
	T5_ = (NIM_BOOL)0;
	TM_0JXiWyhP5OCO8jWMA6sb1w_3 = mulInt(length, ((NI) 2));
	TM_0JXiWyhP5OCO8jWMA6sb1w_4 = mulInt(counter, ((NI) 3));
	T5_ = ((NI)(TM_0JXiWyhP5OCO8jWMA6sb1w_3) < (NI)(TM_0JXiWyhP5OCO8jWMA6sb1w_4));
	if (T5_) goto LA6_;
	TM_0JXiWyhP5OCO8jWMA6sb1w_5 = subInt(length, counter);
	T5_ = ((NI)(TM_0JXiWyhP5OCO8jWMA6sb1w_5) < ((NI) 4));
	LA6_: ;
	result = T5_;
	popFrame();
	return result;
}

static N_INLINE(NI, divInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	{
		if (!(b == ((NI) 0))) goto LA3_;
		raiseDivByZero();
	}
	LA3_: ;
	{
		NIM_BOOL T7_;
		T7_ = (NIM_BOOL)0;
		T7_ = (a == ((NI) (IL64(-9223372036854775807) - IL64(1))));
		if (!(T7_)) goto LA8_;
		T7_ = (b == ((NI) -1));
		LA8_: ;
		if (!T7_) goto LA9_;
		raiseOverflow();
	}
	LA9_: ;
	result = (NI)(a / b);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ b));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NI, rightSize_9aQ9aswOyc6W7eMnLOsk3W7Asets)(NI count) {
	NI result;
	NI TM_0JXiWyhP5OCO8jWMA6sb1w_6;
	NI TM_0JXiWyhP5OCO8jWMA6sb1w_7;
	NI TM_0JXiWyhP5OCO8jWMA6sb1w_8;
	nimfr_("rightSize", "sets.nim");
	result = (NI)0;
	nimln_(137, "sets.nim");
	TM_0JXiWyhP5OCO8jWMA6sb1w_6 = mulInt(((NI) (count)), ((NI) 3));
	TM_0JXiWyhP5OCO8jWMA6sb1w_7 = divInt(((NI) ((NI)(TM_0JXiWyhP5OCO8jWMA6sb1w_6))), ((NI) 2));
	TM_0JXiWyhP5OCO8jWMA6sb1w_8 = addInt(((NI) ((NI)(TM_0JXiWyhP5OCO8jWMA6sb1w_7))), ((NI) 4));
	result = nextPowerOfTwo_gcitR3TEXHJ3GR9bmwIvtRA(((NI) ((NI)(TM_0JXiWyhP5OCO8jWMA6sb1w_8))));
	popFrame();
	return result;
}

static N_INLINE(NI, nextTry_iM1OyigHU0QXXBzsM5QjYAsets)(NI h, NI maxHash) {
	NI result;
	NI TM_0JXiWyhP5OCO8jWMA6sb1w_9;
	nimfr_("nextTry", "sets.nim");
	result = (NI)0;
	nimln_(140, "sets.nim");
	TM_0JXiWyhP5OCO8jWMA6sb1w_9 = addInt(h, ((NI) 1));
	result = (NI)((NI)(TM_0JXiWyhP5OCO8jWMA6sb1w_9) & maxHash);
	popFrame();
	return result;
}

static N_INLINE(NI, chckRange)(NI i, NI a, NI b) {
	NI result;
{	result = (NI)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (a <= i);
		if (!(T3_)) goto LA4_;
		T3_ = (i <= b);
		LA4_: ;
		if (!T3_) goto LA5_;
		result = i;
		goto BeforeRet_;
	}
	goto LA1_;
	LA5_: ;
	{
		raiseRangeError(((NI64) (i)));
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}
static N_NIMCALL(void, Marker_tySequence_8Np6tlClE5az1CyqZdN19bQ)(void* p, NI op) {
	tySequence_8Np6tlClE5az1CyqZdN19bQ* a;
	NI T1_;
	a = (tySequence_8Np6tlClE5az1CyqZdN19bQ*)p;
	T1_ = (NI)0;
}

N_NIMCALL(void, init_9c8NRZCrp0RIj28igIK3trA)(tyObject_HashSet_J1RbOJyRcRl1E5zDK6YKcQ* s, NI initialSize) {
	nimfr_("init", "sets.nim");
	nimln_(361, "sets.nim");
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = isPowerOfTwo_M0Db9b9cHxuUgw2ZF0P8utPg(initialSize);
		if (!!(T3_)) goto LA4_;
		failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA(((NimStringDesc*) &TM_0JXiWyhP5OCO8jWMA6sb1w_10));
	}
	LA4_: ;
	nimln_(362, "sets.nim");
	(*s).counter = ((NI) 0);
	nimln_(363, "sets.nim");
	unsureAsgnRef((void**) (&(*s).data), (tySequence_8Np6tlClE5az1CyqZdN19bQ*) newSeq((&NTI_8Np6tlClE5az1CyqZdN19bQ_), ((NI)chckRange(initialSize, ((NI) 0), ((NI) IL64(9223372036854775807))))));
	popFrame();
}

N_NIMCALL(void, initSet_Txfa7L9a4GIy6iVDPiKpY3Q)(NI initialSize, tyObject_HashSet_J1RbOJyRcRl1E5zDK6YKcQ* Result) {
	nimfr_("initSet", "sets.nim");
	nimln_(375, "sets.nim");
	init_9c8NRZCrp0RIj28igIK3trA(Result, initialSize);
	popFrame();
}

N_NIMCALL(NIM_BOOL, isValid_JFzq9bIVYKxl54COuFCF9bSA)(tyObject_HashSet_J1RbOJyRcRl1E5zDK6YKcQ s) {
	NIM_BOOL result;
	nimfr_("isValid", "sets.nim");
	result = (NIM_BOOL)0;
	nimln_(77, "sets.nim");
	result = !((s.data == 0));
	popFrame();
	return result;
}

static N_INLINE(NI, hash_M6zZEYz39abIOUmj0QsNREghashes)(NI x) {
	NI result;
	nimfr_("hash", "hashes.nim");
	result = (NI)0;
	nimln_(109, "hashes.nim");
	result = x;
	popFrame();
	return result;
}

static N_INLINE(NI, rawGet_8BZcW9arrDLi5cvAlu40Aswsets)(tyObject_HashSet_J1RbOJyRcRl1E5zDK6YKcQ s, NI key, NI* hc) {
	NI result;
	NI h;
	NI T5_;
	NI TM_0JXiWyhP5OCO8jWMA6sb1w_13;
	nimfr_("rawGet", "sets.nim");
{	result = (NI)0;
	nimln_(155, "sets.nim");
	(*hc) = hash_M6zZEYz39abIOUmj0QsNREghashes(key);
	nimln_(156, "sets.nim");
	{
		if (!((*hc) == ((NI) 0))) goto LA3_;
		nimln_(157, "sets.nim");
		(*hc) = ((NI) 314159265);
	}
	LA3_: ;
	nimln_(143, "sets.nim");
	T5_ = (s.data ? (s.data->Sup.len-1) : -1);
	h = (NI)((*hc) & T5_);
	{
		nimln_(144, "sets.nim");
		while (1) {
			NIM_BOOL T8_;
			NI T15_;
			if ((NU)(h) >= (NU)(s.data->Sup.len)) raiseIndexError();
			T8_ = (NIM_BOOL)0;
			T8_ = isFilled_UshbaKGVTNLaJdFZ6zcwsw_2sets(s.data->data[h].Field0);
			if (!T8_) goto LA7;
			nimln_(149, "sets.nim");
			{
				NIM_BOOL T11_;
				T11_ = (NIM_BOOL)0;
				if ((NU)(h) >= (NU)(s.data->Sup.len)) raiseIndexError();
				T11_ = (s.data->data[h].Field0 == (*hc));
				if (!(T11_)) goto LA12_;
				if ((NU)(h) >= (NU)(s.data->Sup.len)) raiseIndexError();
				T11_ = (s.data->data[h].Field1 == key);
				LA12_: ;
				if (!T11_) goto LA13_;
				nimln_(150, "sets.nim");
				result = h;
				goto BeforeRet_;
			}
			LA13_: ;
			nimln_(151, "sets.nim");
			T15_ = (s.data ? (s.data->Sup.len-1) : -1);
			h = nextTry_iM1OyigHU0QXXBzsM5QjYAsets(h, T15_);
		} LA7: ;
	}
	nimln_(152, "sets.nim");
	TM_0JXiWyhP5OCO8jWMA6sb1w_13 = subInt(((NI) -1), h);
	result = (NI)(TM_0JXiWyhP5OCO8jWMA6sb1w_13);
	}BeforeRet_: ;
	popFrame();
	return result;
}

static N_INLINE(NI, rawGetKnownHC_jnVAYE9b4aFtwThD2krrpcAsets)(tyObject_HashSet_J1RbOJyRcRl1E5zDK6YKcQ s, NI key, NI hc) {
	NI result;
	NI h;
	NI T1_;
	NI TM_0JXiWyhP5OCO8jWMA6sb1w_15;
	nimfr_("rawGetKnownHC", "sets.nim");
{	result = (NI)0;
	nimln_(143, "sets.nim");
	T1_ = (s.data ? (s.data->Sup.len-1) : -1);
	h = (NI)(hc & T1_);
	{
		nimln_(144, "sets.nim");
		while (1) {
			NIM_BOOL T4_;
			NI T11_;
			if ((NU)(h) >= (NU)(s.data->Sup.len)) raiseIndexError();
			T4_ = (NIM_BOOL)0;
			T4_ = isFilled_UshbaKGVTNLaJdFZ6zcwsw_2sets(s.data->data[h].Field0);
			if (!T4_) goto LA3;
			nimln_(149, "sets.nim");
			{
				NIM_BOOL T7_;
				T7_ = (NIM_BOOL)0;
				if ((NU)(h) >= (NU)(s.data->Sup.len)) raiseIndexError();
				T7_ = (s.data->data[h].Field0 == hc);
				if (!(T7_)) goto LA8_;
				if ((NU)(h) >= (NU)(s.data->Sup.len)) raiseIndexError();
				T7_ = (s.data->data[h].Field1 == key);
				LA8_: ;
				if (!T7_) goto LA9_;
				nimln_(150, "sets.nim");
				result = h;
				goto BeforeRet_;
			}
			LA9_: ;
			nimln_(151, "sets.nim");
			T11_ = (s.data ? (s.data->Sup.len-1) : -1);
			h = nextTry_iM1OyigHU0QXXBzsM5QjYAsets(h, T11_);
		} LA3: ;
	}
	nimln_(152, "sets.nim");
	TM_0JXiWyhP5OCO8jWMA6sb1w_15 = subInt(((NI) -1), h);
	result = (NI)(TM_0JXiWyhP5OCO8jWMA6sb1w_15);
	}BeforeRet_: ;
	popFrame();
	return result;
}

N_NIMCALL(void, rawInsert_w4R39aNwJUympF4c5lYF1tg)(tyObject_HashSet_J1RbOJyRcRl1E5zDK6YKcQ* s, tySequence_8Np6tlClE5az1CyqZdN19bQ** data, NI key, NI hc, NI h) {
	nimfr_("rawInsert", "sets.nim");
	if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
	nimln_(161, "sets.nim");
	(*data)->data[h].Field1 = key;
	if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
	nimln_(162, "sets.nim");
	(*data)->data[h].Field0 = hc;
	popFrame();
}

N_NIMCALL(void, enlarge_UfNOE2WKRXdG3IkKj9a3bBw)(tyObject_HashSet_J1RbOJyRcRl1E5zDK6YKcQ* s) {
	tySequence_8Np6tlClE5az1CyqZdN19bQ* n;
	NI T1_;
	NI TM_0JXiWyhP5OCO8jWMA6sb1w_14;
	tySequence_8Np6tlClE5az1CyqZdN19bQ* T2_;
	nimfr_("enlarge", "sets.nim");
	n = (tySequence_8Np6tlClE5az1CyqZdN19bQ*)0;
	nimln_(215, "sets.nim");
	T1_ = ((*s).data ? (*s).data->Sup.len : 0);
	TM_0JXiWyhP5OCO8jWMA6sb1w_14 = mulInt(T1_, ((NI) 2));
	n = (tySequence_8Np6tlClE5az1CyqZdN19bQ*) newSeq((&NTI_8Np6tlClE5az1CyqZdN19bQ_), ((NI)chckRange((NI)(TM_0JXiWyhP5OCO8jWMA6sb1w_14), ((NI) 0), ((NI) IL64(9223372036854775807)))));
	nimln_(216, "sets.nim");
	T2_ = (tySequence_8Np6tlClE5az1CyqZdN19bQ*)0;
	T2_ = (*s).data;
	unsureAsgnRef((void**) (&(*s).data), n);
	n = T2_;
	{
		NI i;
		NI colontmp_;
		NI T4_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		nimln_(217, "sets.nim");
		T4_ = (n ? (n->Sup.len-1) : -1);
		colontmp_ = T4_;
		nimln_(1973, "system.nim");
		res = ((NI) 0);
		{
			nimln_(1974, "system.nim");
			while (1) {
				NI TM_0JXiWyhP5OCO8jWMA6sb1w_17;
				if (!(res <= colontmp_)) goto LA6;
				nimln_(1975, "system.nim");
				i = res;
				nimln_(218, "sets.nim");
				{
					NIM_BOOL T9_;
					NI j;
					NI T12_;
					NI TM_0JXiWyhP5OCO8jWMA6sb1w_16;
					if ((NU)(i) >= (NU)(n->Sup.len)) raiseIndexError();
					T9_ = (NIM_BOOL)0;
					T9_ = isFilled_UshbaKGVTNLaJdFZ6zcwsw_2sets(n->data[i].Field0);
					if (!T9_) goto LA10_;
					nimln_(219, "sets.nim");
					if ((NU)(i) >= (NU)(n->Sup.len)) raiseIndexError();
					if ((NU)(i) >= (NU)(n->Sup.len)) raiseIndexError();
					T12_ = (NI)0;
					T12_ = rawGetKnownHC_jnVAYE9b4aFtwThD2krrpcAsets((*s), n->data[i].Field1, n->data[i].Field0);
					TM_0JXiWyhP5OCO8jWMA6sb1w_16 = subInt(((NI) -1), T12_);
					j = (NI)(TM_0JXiWyhP5OCO8jWMA6sb1w_16);
					nimln_(220, "sets.nim");
					if ((NU)(i) >= (NU)(n->Sup.len)) raiseIndexError();
					if ((NU)(i) >= (NU)(n->Sup.len)) raiseIndexError();
					rawInsert_w4R39aNwJUympF4c5lYF1tg(s, (&(*s).data), n->data[i].Field1, n->data[i].Field0, j);
				}
				LA10_: ;
				nimln_(1976, "system.nim");
				TM_0JXiWyhP5OCO8jWMA6sb1w_17 = addInt(res, ((NI) 1));
				res = (NI)(TM_0JXiWyhP5OCO8jWMA6sb1w_17);
			} LA6: ;
		}
	}
	popFrame();
}

N_NIMCALL(void, incl_mie3xWW6nO78ICyeKubimQ)(tyObject_HashSet_J1RbOJyRcRl1E5zDK6YKcQ* s, NI key) {
	NI hc;
	NI index;
	nimfr_("incl", "sets.nim");
	nimln_(254, "sets.nim");
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = isValid_JFzq9bIVYKxl54COuFCF9bSA((*s));
		if (!!(T3_)) goto LA4_;
		failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA(((NimStringDesc*) &TM_0JXiWyhP5OCO8jWMA6sb1w_12));
	}
	LA4_: ;
	hc = (NI)0;
	nimln_(224, "sets.nim");
	index = rawGet_8BZcW9arrDLi5cvAlu40Aswsets((*s), key, (&hc));
	nimln_(255, "sets.nim");
	{
		NI TM_0JXiWyhP5OCO8jWMA6sb1w_18;
		NI TM_0JXiWyhP5OCO8jWMA6sb1w_19;
		nimln_(225, "sets.nim");
		if (!(index < ((NI) 0))) goto LA8_;
		nimln_(226, "sets.nim");
		{
			NI T12_;
			NIM_BOOL T13_;
			T12_ = ((*s).data ? (*s).data->Sup.len : 0);
			T13_ = (NIM_BOOL)0;
			T13_ = mustRehash_flzFqVXoQqeNJHN4qDyOhwsets(T12_, (*s).counter);
			if (!T13_) goto LA14_;
			nimln_(227, "sets.nim");
			enlarge_UfNOE2WKRXdG3IkKj9a3bBw(s);
			nimln_(228, "sets.nim");
			index = rawGetKnownHC_jnVAYE9b4aFtwThD2krrpcAsets((*s), key, hc);
		}
		LA14_: ;
		nimln_(229, "sets.nim");
		TM_0JXiWyhP5OCO8jWMA6sb1w_18 = subInt(((NI) -1), index);
		rawInsert_w4R39aNwJUympF4c5lYF1tg(s, (&(*s).data), key, hc, (NI)(TM_0JXiWyhP5OCO8jWMA6sb1w_18));
		nimln_(230, "sets.nim");
		TM_0JXiWyhP5OCO8jWMA6sb1w_19 = addInt((*s).counter, ((NI) 1));
		(*s).counter = (NI)(TM_0JXiWyhP5OCO8jWMA6sb1w_19);
	}
	LA8_: ;
	popFrame();
}

N_NIMCALL(NIM_BOOL, contains_VRxshyvToOn4RLYHBlBSPQ)(tyObject_HashSet_J1RbOJyRcRl1E5zDK6YKcQ s, NI key) {
	NIM_BOOL result;
	NI hc;
	NI index;
	nimfr_("contains", "sets.nim");
	result = (NIM_BOOL)0;
	nimln_(204, "sets.nim");
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = isValid_JFzq9bIVYKxl54COuFCF9bSA(s);
		if (!!(T3_)) goto LA4_;
		failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA(((NimStringDesc*) &TM_0JXiWyhP5OCO8jWMA6sb1w_12));
	}
	LA4_: ;
	hc = (NI)0;
	nimln_(206, "sets.nim");
	index = rawGet_8BZcW9arrDLi5cvAlu40Aswsets(s, key, (&hc));
	nimln_(207, "sets.nim");
	result = (((NI) 0) <= index);
	popFrame();
	return result;
}

N_NIMCALL(NI, len_fD9bQhCtUWtTZtVINFKvhfA)(tyObject_HashSet_J1RbOJyRcRl1E5zDK6YKcQ s) {
	NI result;
	nimfr_("len", "sets.nim");
	result = (NI)0;
	nimln_(91, "sets.nim");
	result = s.counter;
	popFrame();
	return result;
}

N_NIMCALL(void, excl_mie3xWW6nO78ICyeKubimQ_2)(tyObject_HashSet_J1RbOJyRcRl1E5zDK6YKcQ* s, NI key) {
	NI hc;
	NI i;
	NI msk;
	NI T6_;
	nimfr_("excl", "sets.nim");
{	nimln_(291, "sets.nim");
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = isValid_JFzq9bIVYKxl54COuFCF9bSA((*s));
		if (!!(T3_)) goto LA4_;
		failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA(((NimStringDesc*) &TM_0JXiWyhP5OCO8jWMA6sb1w_12));
	}
	LA4_: ;
	hc = (NI)0;
	nimln_(293, "sets.nim");
	i = rawGet_8BZcW9arrDLi5cvAlu40Aswsets((*s), key, (&hc));
	nimln_(294, "sets.nim");
	T6_ = ((*s).data ? ((*s).data->Sup.len-1) : -1);
	msk = T6_;
	nimln_(295, "sets.nim");
	{
		NI v;
		NI TM_0JXiWyhP5OCO8jWMA6sb1w_20;
		if (!(((NI) 0) <= i)) goto LA9_;
		if ((NU)(i) >= (NU)((*s).data->Sup.len)) raiseIndexError();
		nimln_(296, "sets.nim");
		(*s).data->data[i].Field0 = ((NI) 0);
		if ((NU)(i) >= (NU)((*s).data->Sup.len)) raiseIndexError();
		nimln_(297, "sets.nim");
		v = (NI)0;
		(*s).data->data[i].Field1 = v;
		nimln_(298, "sets.nim");
		TM_0JXiWyhP5OCO8jWMA6sb1w_20 = subInt((*s).counter, ((NI) 1));
		(*s).counter = (NI)(TM_0JXiWyhP5OCO8jWMA6sb1w_20);
		{
			nimln_(299, "sets.nim");
			while (1) {
				NI j;
				NI r;
				NI v_2;
				nimln_(300, "sets.nim");
				j = i;
				nimln_(301, "sets.nim");
				r = j;
				if ((NU)(i) >= (NU)((*s).data->Sup.len)) raiseIndexError();
				nimln_(302, "sets.nim");
				(*s).data->data[i].Field0 = ((NI) 0);
				if ((NU)(i) >= (NU)((*s).data->Sup.len)) raiseIndexError();
				nimln_(303, "sets.nim");
				v_2 = (NI)0;
				(*s).data->data[i].Field1 = v_2;
				{
					nimln_(304, "sets.nim");
					while (1) {
						NI TM_0JXiWyhP5OCO8jWMA6sb1w_21;
						nimln_(305, "sets.nim");
						TM_0JXiWyhP5OCO8jWMA6sb1w_21 = addInt(i, ((NI) 1));
						i = (NI)((NI)(TM_0JXiWyhP5OCO8jWMA6sb1w_21) & msk);
						nimln_(306, "sets.nim");
						{
							NIM_BOOL T17_;
							if ((NU)(i) >= (NU)((*s).data->Sup.len)) raiseIndexError();
							T17_ = (NIM_BOOL)0;
							T17_ = isEmpty_UshbaKGVTNLaJdFZ6zcwswsets((*s).data->data[i].Field0);
							if (!T17_) goto LA18_;
							nimln_(307, "sets.nim");
							goto BeforeRet_;
						}
						LA18_: ;
						nimln_(308, "sets.nim");
						if ((NU)(i) >= (NU)((*s).data->Sup.len)) raiseIndexError();
						r = (NI)((*s).data->data[i].Field0 & msk);
						nimln_(275, "sets.nim");
						{
							NIM_BOOL T22_;
							NIM_BOOL T23_;
							NIM_BOOL T24_;
							NIM_BOOL T27_;
							NIM_BOOL T30_;
							nimln_(304, "sets.nim");
							T22_ = (NIM_BOOL)0;
							T23_ = (NIM_BOOL)0;
							T24_ = (NIM_BOOL)0;
							T24_ = (r <= i);
							if (!(T24_)) goto LA25_;
							T24_ = (j < r);
							LA25_: ;
							T23_ = T24_;
							if (T23_) goto LA26_;
							T27_ = (NIM_BOOL)0;
							T27_ = (j < r);
							if (!(T27_)) goto LA28_;
							T27_ = (i < j);
							LA28_: ;
							T23_ = T27_;
							LA26_: ;
							T22_ = T23_;
							if (T22_) goto LA29_;
							T30_ = (NIM_BOOL)0;
							T30_ = (i < j);
							if (!(T30_)) goto LA31_;
							T30_ = (r <= i);
							LA31_: ;
							T22_ = T30_;
							LA29_: ;
							if (!!(T22_)) goto LA32_;
							nimln_(275, "sets.nim");
							goto LA13;
						}
						LA32_: ;
					}
				} LA13: ;
				if ((NU)(j) >= (NU)((*s).data->Sup.len)) raiseIndexError();
				nimln_(309, "sets.nim");
				if ((NU)(i) >= (NU)((*s).data->Sup.len)) raiseIndexError();
				(*s).data->data[j] = (*s).data->data[i];
			}
		}
	}
	LA9_: ;
	}BeforeRet_: ;
	popFrame();
}
NIM_EXTERNC N_NOINLINE(void, stdlib_setsInit000)(void) {
	nimfr_("sets", "sets.nim");
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_setsDatInit000)(void) {
static TNimNode* TM_0JXiWyhP5OCO8jWMA6sb1w_11[2];
static TNimNode* TM_0JXiWyhP5OCO8jWMA6sb1w_22[2];
static TNimNode TM_0JXiWyhP5OCO8jWMA6sb1w_0[6];
NTI_1v9bKyksXWMsm0vNwmZ4EuQ_.size = sizeof(tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ);
NTI_1v9bKyksXWMsm0vNwmZ4EuQ_.kind = 18;
NTI_1v9bKyksXWMsm0vNwmZ4EuQ_.base = 0;
NTI_1v9bKyksXWMsm0vNwmZ4EuQ_.flags = 3;
TM_0JXiWyhP5OCO8jWMA6sb1w_11[0] = &TM_0JXiWyhP5OCO8jWMA6sb1w_0[1];
TM_0JXiWyhP5OCO8jWMA6sb1w_0[1].kind = 1;
TM_0JXiWyhP5OCO8jWMA6sb1w_0[1].offset = offsetof(tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ, Field0);
TM_0JXiWyhP5OCO8jWMA6sb1w_0[1].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_0JXiWyhP5OCO8jWMA6sb1w_0[1].name = "Field0";
TM_0JXiWyhP5OCO8jWMA6sb1w_11[1] = &TM_0JXiWyhP5OCO8jWMA6sb1w_0[2];
TM_0JXiWyhP5OCO8jWMA6sb1w_0[2].kind = 1;
TM_0JXiWyhP5OCO8jWMA6sb1w_0[2].offset = offsetof(tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ, Field1);
TM_0JXiWyhP5OCO8jWMA6sb1w_0[2].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_0JXiWyhP5OCO8jWMA6sb1w_0[2].name = "Field1";
TM_0JXiWyhP5OCO8jWMA6sb1w_0[0].len = 2; TM_0JXiWyhP5OCO8jWMA6sb1w_0[0].kind = 2; TM_0JXiWyhP5OCO8jWMA6sb1w_0[0].sons = &TM_0JXiWyhP5OCO8jWMA6sb1w_11[0];
NTI_1v9bKyksXWMsm0vNwmZ4EuQ_.node = &TM_0JXiWyhP5OCO8jWMA6sb1w_0[0];
NTI_8Np6tlClE5az1CyqZdN19bQ_.size = sizeof(tySequence_8Np6tlClE5az1CyqZdN19bQ*);
NTI_8Np6tlClE5az1CyqZdN19bQ_.kind = 24;
NTI_8Np6tlClE5az1CyqZdN19bQ_.base = (&NTI_1v9bKyksXWMsm0vNwmZ4EuQ_);
NTI_8Np6tlClE5az1CyqZdN19bQ_.flags = 2;
NTI_8Np6tlClE5az1CyqZdN19bQ_.marker = Marker_tySequence_8Np6tlClE5az1CyqZdN19bQ;
NTI_J1RbOJyRcRl1E5zDK6YKcQ_.size = sizeof(tyObject_HashSet_J1RbOJyRcRl1E5zDK6YKcQ);
NTI_J1RbOJyRcRl1E5zDK6YKcQ_.kind = 18;
NTI_J1RbOJyRcRl1E5zDK6YKcQ_.base = 0;
NTI_J1RbOJyRcRl1E5zDK6YKcQ_.flags = 2;
TM_0JXiWyhP5OCO8jWMA6sb1w_22[0] = &TM_0JXiWyhP5OCO8jWMA6sb1w_0[4];
TM_0JXiWyhP5OCO8jWMA6sb1w_0[4].kind = 1;
TM_0JXiWyhP5OCO8jWMA6sb1w_0[4].offset = offsetof(tyObject_HashSet_J1RbOJyRcRl1E5zDK6YKcQ, data);
TM_0JXiWyhP5OCO8jWMA6sb1w_0[4].typ = (&NTI_8Np6tlClE5az1CyqZdN19bQ_);
TM_0JXiWyhP5OCO8jWMA6sb1w_0[4].name = "data";
TM_0JXiWyhP5OCO8jWMA6sb1w_22[1] = &TM_0JXiWyhP5OCO8jWMA6sb1w_0[5];
TM_0JXiWyhP5OCO8jWMA6sb1w_0[5].kind = 1;
TM_0JXiWyhP5OCO8jWMA6sb1w_0[5].offset = offsetof(tyObject_HashSet_J1RbOJyRcRl1E5zDK6YKcQ, counter);
TM_0JXiWyhP5OCO8jWMA6sb1w_0[5].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_0JXiWyhP5OCO8jWMA6sb1w_0[5].name = "counter";
TM_0JXiWyhP5OCO8jWMA6sb1w_0[3].len = 2; TM_0JXiWyhP5OCO8jWMA6sb1w_0[3].kind = 2; TM_0JXiWyhP5OCO8jWMA6sb1w_0[3].sons = &TM_0JXiWyhP5OCO8jWMA6sb1w_22[0];
NTI_J1RbOJyRcRl1E5zDK6YKcQ_.node = &TM_0JXiWyhP5OCO8jWMA6sb1w_0[3];
}
