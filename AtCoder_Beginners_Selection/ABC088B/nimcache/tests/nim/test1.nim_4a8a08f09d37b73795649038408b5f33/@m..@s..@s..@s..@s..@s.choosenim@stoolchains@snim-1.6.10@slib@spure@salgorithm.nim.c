/* Generated by Nim Compiler v1.6.10 */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -fmax-errors=3   -I/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib -I/home/se0r12/Atcoder/AtCoder_Beginners_Selection/ABC088B/tests/nim -o /home/se0r12/Atcoder/AtCoder_Beginners_Selection/ABC088B/nimcache/tests/nim/test1.nim_4a8a08f09d37b73795649038408b5f33/@m..@s..@s..@s..@s..@s.choosenim@stoolchains@snim-1.6.10@slib@spure@salgorithm.nim.c.o /home/se0r12/Atcoder/AtCoder_Beginners_Selection/ABC088B/nimcache/tests/nim/test1.nim_4a8a08f09d37b73795649038408b5f33/@m..@s..@s..@s..@s..@s.choosenim@stoolchains@snim-1.6.10@slib@spure@salgorithm.nim.c */
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
#undef far
#undef powerpc
#undef unix
  #  define nimfr_(proc, file) \
      TFrame FR_; \
      FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = 0; nimFrame(&FR_);

  #  define nimfrs_(proc, file, slots, length) \
      struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename; NI len; VarSlot s[slots];} FR_; \
      FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = length; nimFrame((TFrame*)&FR_);

  #  define nimln_(n, file) \
      FR_.line = n; FR_.filename = file;
  typedef struct tySequence__qwqHTkRvwhrRyENtudHQ7g tySequence__qwqHTkRvwhrRyENtudHQ7g;
typedef struct TGenericSeq TGenericSeq;
typedef struct NimStringDesc NimStringDesc;
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NU8 tyEnum_SortOrder__8iBc6wlNqBa9cju9cUAhUAxA;
typedef struct {
N_NIMCALL_PTR(NI, ClP_0) (NI x, NI y, void* ClE_0);
void* ClE_0;
} tyProc__EGDHMEKq2nFyDlkU6lrC3A;
typedef N_CLOSURE_PTR(NI, TM__JdC9c6SaUkvO1XjYuWP1JWQ_8) (NI x, NI y);
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_CLOSURE_PTR(NI, TM__JdC9c6SaUkvO1XjYuWP1JWQ_12) (NI x, NI y);
typedef N_CLOSURE_PTR(NI, TM__JdC9c6SaUkvO1XjYuWP1JWQ_24) (NI x, NI y, void* ClE_0);
struct tySequence__qwqHTkRvwhrRyENtudHQ7g {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(tySequence__qwqHTkRvwhrRyENtudHQ7g*, sorted__OOZOOZmain_95)(NI* a, NI aLen_0, tyProc__EGDHMEKq2nFyDlkU6lrC3A cmp, tyEnum_SortOrder__8iBc6wlNqBa9cju9cUAhUAxA order);
N_LIB_PRIVATE N_NIMCALL(tySequence__qwqHTkRvwhrRyENtudHQ7g*, newSeq__OOZOOZmain_107)(NI len);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i, NI64 a, NI64 b);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NIMCALL(void, sort__OOZOOZmain_123)(NI* a, NI aLen_0, tyProc__EGDHMEKq2nFyDlkU6lrC3A cmp, tyEnum_SortOrder__8iBc6wlNqBa9cju9cUAhUAxA order);
N_LIB_PRIVATE N_NIMCALL(void, mergeAlt__OOZOOZmain_140)(NI* a, NI aLen_0, NI* b, NI bLen_0, NI lo, NI m, NI hi, tyProc__EGDHMEKq2nFyDlkU6lrC3A cmp, tyEnum_SortOrder__8iBc6wlNqBa9cju9cUAhUAxA order);
static N_INLINE(NI, star___pureZalgorithm_8)(NI x, tyEnum_SortOrder__8iBc6wlNqBa9cju9cUAhUAxA order);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_2997)(void);
static N_INLINE(void, popFrame)(void);
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl__systemZassertions_56)(NimStringDesc* msg);
N_LIB_PRIVATE N_NIMCALL(NI, cmp__system_7499)(NI x, NI y);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size);
STRING_LITERAL(TM__JdC9c6SaUkvO1XjYuWP1JWQ_9, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/algorithm.nim(334, 10) `j <= m` ", 87);
extern TFrame* framePtr__system_2564;
extern TFrame* framePtr__system_2564;
extern TFrame* framePtr__system_2564;
extern TFrame* framePtr__system_2564;
extern TFrame* framePtr__system_2564;
extern TFrame* framePtr__system_2564;
static N_INLINE(void, nimFrame)(TFrame* s) {
	{
		if (!(framePtr__system_2564 == ((TFrame*) NIM_NIL))) goto LA3_;
		(*s).calldepth = ((NI16) 0);
	}
	goto LA1_;
	LA3_: ;
	{
		(*s).calldepth = (NI16)((*framePtr__system_2564).calldepth + ((NI16) 1));
	}
	LA1_: ;
	(*s).prev = framePtr__system_2564;
	framePtr__system_2564 = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA8_;
		callDepthLimitReached__system_2997();
	}
	LA8_: ;
}
static N_INLINE(void, popFrame)(void) {
	framePtr__system_2564 = (*framePtr__system_2564).prev;
}
static N_INLINE(NI, star___pureZalgorithm_8)(NI x, tyEnum_SortOrder__8iBc6wlNqBa9cju9cUAhUAxA order) {
	NI result;
	NI y;
	NI TM__JdC9c6SaUkvO1XjYuWP1JWQ_5;
	NI TM__JdC9c6SaUkvO1XjYuWP1JWQ_6;
	nimfr_("*", "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/algorithm.nim");
	result = (NI)0;
	nimln_(64, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/algorithm.nim");
	if (nimSubInt(order, ((NI) 1), &TM__JdC9c6SaUkvO1XjYuWP1JWQ_5)) { raiseOverflow(); };
	y = (NI)(TM__JdC9c6SaUkvO1XjYuWP1JWQ_5);
	nimln_(65, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/algorithm.nim");
	if (nimSubInt((NI)(x ^ y), y, &TM__JdC9c6SaUkvO1XjYuWP1JWQ_6)) { raiseOverflow(); };
	result = (NI)(TM__JdC9c6SaUkvO1XjYuWP1JWQ_6);
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, mergeAlt__OOZOOZmain_140)(NI* a, NI aLen_0, NI* b, NI bLen_0, NI lo, NI m, NI hi, tyProc__EGDHMEKq2nFyDlkU6lrC3A cmp, tyEnum_SortOrder__8iBc6wlNqBa9cju9cUAhUAxA order) {
	NI j;
	NI bb;
	NI i;
	NI k;
	nimfr_("mergeAlt", "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/algorithm.nim");
{	nimln_(331, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/algorithm.nim");
	{
		NI TM__JdC9c6SaUkvO1XjYuWP1JWQ_7;
		NI T3_;
		NI T4_;
		if (m < 0 || m >= aLen_0){ raiseIndexError2(m,aLen_0-1); }
		if (nimAddInt(m, ((NI) 1), &TM__JdC9c6SaUkvO1XjYuWP1JWQ_7)) { raiseOverflow(); };
		if ((NI)(TM__JdC9c6SaUkvO1XjYuWP1JWQ_7) < 0 || (NI)(TM__JdC9c6SaUkvO1XjYuWP1JWQ_7) >= aLen_0){ raiseIndexError2((NI)(TM__JdC9c6SaUkvO1XjYuWP1JWQ_7),aLen_0-1); }
		T3_ = (NI)0;
		T3_ = cmp.ClE_0? cmp.ClP_0(a[m], a[(NI)(TM__JdC9c6SaUkvO1XjYuWP1JWQ_7)], cmp.ClE_0):((TM__JdC9c6SaUkvO1XjYuWP1JWQ_8)(cmp.ClP_0))(a[m], a[(NI)(TM__JdC9c6SaUkvO1XjYuWP1JWQ_7)]);
		T4_ = (NI)0;
		T4_ = star___pureZalgorithm_8(T3_, order);
		if (!(T4_ <= ((NI) 0))) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	nimln_(332, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/algorithm.nim");
	j = lo;
	nimln_(334, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/algorithm.nim");
	{
		if (!!((j <= m))) goto LA9_;
		failedAssertImpl__systemZassertions_56(((NimStringDesc*) &TM__JdC9c6SaUkvO1XjYuWP1JWQ_9));
	}
	LA9_: ;
	nimln_(336, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/algorithm.nim");
	bb = ((NI) 0);
	{
		nimln_(337, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/algorithm.nim");
		while (1) {
			NI TM__JdC9c6SaUkvO1XjYuWP1JWQ_10;
			NI TM__JdC9c6SaUkvO1XjYuWP1JWQ_11;
			if (!(j <= m)) goto LA12;
			if (bb < 0 || bb >= bLen_0){ raiseIndexError2(bb,bLen_0-1); }
			nimln_(338, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/algorithm.nim");
			if (j < 0 || j >= aLen_0){ raiseIndexError2(j,aLen_0-1); }
			b[bb] = a[j];
			nimln_(339, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/algorithm.nim");
			if (nimAddInt(bb, ((NI) 1), &TM__JdC9c6SaUkvO1XjYuWP1JWQ_10)) { raiseOverflow(); };
			bb = (NI)(TM__JdC9c6SaUkvO1XjYuWP1JWQ_10);
			nimln_(340, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/algorithm.nim");
			if (nimAddInt(j, ((NI) 1), &TM__JdC9c6SaUkvO1XjYuWP1JWQ_11)) { raiseOverflow(); };
			j = (NI)(TM__JdC9c6SaUkvO1XjYuWP1JWQ_11);
		} LA12: ;
	}
	nimln_(344, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/algorithm.nim");
	i = ((NI) 0);
	nimln_(345, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/algorithm.nim");
	k = lo;
	{
		nimln_(347, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/algorithm.nim");
		while (1) {
			NIM_BOOL T15_;
			NI TM__JdC9c6SaUkvO1XjYuWP1JWQ_15;
			T15_ = (NIM_BOOL)0;
			T15_ = (k < j);
			if (!(T15_)) goto LA16_;
			T15_ = (j <= hi);
			LA16_: ;
			if (!T15_) goto LA14;
			nimln_(348, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/algorithm.nim");
			{
				NI T19_;
				NI T20_;
				NI TM__JdC9c6SaUkvO1XjYuWP1JWQ_13;
				if (i < 0 || i >= bLen_0){ raiseIndexError2(i,bLen_0-1); }
				if (j < 0 || j >= aLen_0){ raiseIndexError2(j,aLen_0-1); }
				T19_ = (NI)0;
				T19_ = cmp.ClE_0? cmp.ClP_0(b[i], a[j], cmp.ClE_0):((TM__JdC9c6SaUkvO1XjYuWP1JWQ_12)(cmp.ClP_0))(b[i], a[j]);
				T20_ = (NI)0;
				T20_ = star___pureZalgorithm_8(T19_, order);
				if (!(T20_ <= ((NI) 0))) goto LA21_;
				if (k < 0 || k >= aLen_0){ raiseIndexError2(k,aLen_0-1); }
				nimln_(349, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/algorithm.nim");
				if (i < 0 || i >= bLen_0){ raiseIndexError2(i,bLen_0-1); }
				a[k] = b[i];
				nimln_(350, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/algorithm.nim");
				if (nimAddInt(i, ((NI) 1), &TM__JdC9c6SaUkvO1XjYuWP1JWQ_13)) { raiseOverflow(); };
				i = (NI)(TM__JdC9c6SaUkvO1XjYuWP1JWQ_13);
			}
			goto LA17_;
			LA21_: ;
			{
				NI TM__JdC9c6SaUkvO1XjYuWP1JWQ_14;
				if (k < 0 || k >= aLen_0){ raiseIndexError2(k,aLen_0-1); }
				nimln_(352, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/algorithm.nim");
				if (j < 0 || j >= aLen_0){ raiseIndexError2(j,aLen_0-1); }
				a[k] = a[j];
				nimln_(353, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/algorithm.nim");
				if (nimAddInt(j, ((NI) 1), &TM__JdC9c6SaUkvO1XjYuWP1JWQ_14)) { raiseOverflow(); };
				j = (NI)(TM__JdC9c6SaUkvO1XjYuWP1JWQ_14);
			}
			LA17_: ;
			nimln_(354, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/algorithm.nim");
			if (nimAddInt(k, ((NI) 1), &TM__JdC9c6SaUkvO1XjYuWP1JWQ_15)) { raiseOverflow(); };
			k = (NI)(TM__JdC9c6SaUkvO1XjYuWP1JWQ_15);
		} LA14: ;
	}
	{
		nimln_(357, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/algorithm.nim");
		while (1) {
			NI TM__JdC9c6SaUkvO1XjYuWP1JWQ_16;
			NI TM__JdC9c6SaUkvO1XjYuWP1JWQ_17;
			if (!(k < j)) goto LA25;
			if (k < 0 || k >= aLen_0){ raiseIndexError2(k,aLen_0-1); }
			nimln_(358, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/algorithm.nim");
			if (i < 0 || i >= bLen_0){ raiseIndexError2(i,bLen_0-1); }
			a[k] = b[i];
			nimln_(359, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/algorithm.nim");
			if (nimAddInt(k, ((NI) 1), &TM__JdC9c6SaUkvO1XjYuWP1JWQ_16)) { raiseOverflow(); };
			k = (NI)(TM__JdC9c6SaUkvO1XjYuWP1JWQ_16);
			nimln_(360, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/algorithm.nim");
			if (nimAddInt(i, ((NI) 1), &TM__JdC9c6SaUkvO1XjYuWP1JWQ_17)) { raiseOverflow(); };
			i = (NI)(TM__JdC9c6SaUkvO1XjYuWP1JWQ_17);
		} LA25: ;
	}
	}BeforeRet_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, sort__OOZOOZmain_123)(NI* a, NI aLen_0, tyProc__EGDHMEKq2nFyDlkU6lrC3A cmp, tyEnum_SortOrder__8iBc6wlNqBa9cju9cUAhUAxA order) {
	NI n;
	tySequence__qwqHTkRvwhrRyENtudHQ7g* b;
	NI s;
	nimfr_("sort", "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/algorithm.nim");
	nimln_(407, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/algorithm.nim");
	n = aLen_0;
	nimln_(408, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/algorithm.nim");
	if (((NI)(n / ((NI) 2))) < ((NI) 0) || ((NI)(n / ((NI) 2))) > ((NI) IL64(9223372036854775807))){ raiseRangeErrorI((NI)(n / ((NI) 2)), ((NI) 0), ((NI) IL64(9223372036854775807))); }
	b = newSeq__OOZOOZmain_107(((NI) ((NI)(n / ((NI) 2)))));
	nimln_(409, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/algorithm.nim");
	s = ((NI) 1);
	{
		nimln_(410, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/algorithm.nim");
		while (1) {
			NI m;
			NI TM__JdC9c6SaUkvO1XjYuWP1JWQ_3;
			NI TM__JdC9c6SaUkvO1XjYuWP1JWQ_4;
			NI TM__JdC9c6SaUkvO1XjYuWP1JWQ_23;
			if (!(s < n)) goto LA2;
			nimln_(411, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/algorithm.nim");
			if (nimSubInt(n, ((NI) 1), &TM__JdC9c6SaUkvO1XjYuWP1JWQ_3)) { raiseOverflow(); };
			if (nimSubInt((NI)(TM__JdC9c6SaUkvO1XjYuWP1JWQ_3), s, &TM__JdC9c6SaUkvO1XjYuWP1JWQ_4)) { raiseOverflow(); };
			m = (NI)(TM__JdC9c6SaUkvO1XjYuWP1JWQ_4);
			{
				nimln_(412, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/algorithm.nim");
				while (1) {
					NI TM__JdC9c6SaUkvO1XjYuWP1JWQ_18;
					NI TM__JdC9c6SaUkvO1XjYuWP1JWQ_19;
					NI TM__JdC9c6SaUkvO1XjYuWP1JWQ_20;
					NI TM__JdC9c6SaUkvO1XjYuWP1JWQ_21;
					NI TM__JdC9c6SaUkvO1XjYuWP1JWQ_22;
					if (!(((NI) 0) <= m)) goto LA4;
					nimln_(413, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/algorithm.nim");
					if (nimSubInt(m, s, &TM__JdC9c6SaUkvO1XjYuWP1JWQ_18)) { raiseOverflow(); };
					if (nimAddInt((NI)(TM__JdC9c6SaUkvO1XjYuWP1JWQ_18), ((NI) 1), &TM__JdC9c6SaUkvO1XjYuWP1JWQ_19)) { raiseOverflow(); };
					if (nimAddInt(m, s, &TM__JdC9c6SaUkvO1XjYuWP1JWQ_20)) { raiseOverflow(); };
					mergeAlt__OOZOOZmain_140(a, aLen_0, (b) ? (b->data) : NIM_NIL, (b ? b->Sup.len : 0), (((NI)(TM__JdC9c6SaUkvO1XjYuWP1JWQ_19) >= ((NI) 0)) ? (NI)(TM__JdC9c6SaUkvO1XjYuWP1JWQ_19) : ((NI) 0)), m, (NI)(TM__JdC9c6SaUkvO1XjYuWP1JWQ_20), cmp, order);
					nimln_(414, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/algorithm.nim");
					if (nimMulInt(s, ((NI) 2), &TM__JdC9c6SaUkvO1XjYuWP1JWQ_21)) { raiseOverflow(); };
					if (nimSubInt(m, (NI)(TM__JdC9c6SaUkvO1XjYuWP1JWQ_21), &TM__JdC9c6SaUkvO1XjYuWP1JWQ_22)) { raiseOverflow(); };
					m = (NI)(TM__JdC9c6SaUkvO1XjYuWP1JWQ_22);
				} LA4: ;
			}
			nimln_(415, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/algorithm.nim");
			if (nimMulInt(s, ((NI) 2), &TM__JdC9c6SaUkvO1XjYuWP1JWQ_23)) { raiseOverflow(); };
			s = (NI)(TM__JdC9c6SaUkvO1XjYuWP1JWQ_23);
		} LA2: ;
	}
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(tySequence__qwqHTkRvwhrRyENtudHQ7g*, sorted__OOZOOZmain_95)(NI* a, NI aLen_0, tyProc__EGDHMEKq2nFyDlkU6lrC3A cmp, tyEnum_SortOrder__8iBc6wlNqBa9cju9cUAhUAxA order) {
	tySequence__qwqHTkRvwhrRyENtudHQ7g* result;
	nimfr_("sorted", "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/algorithm.nim");
	result = NIM_NIL;
	nimln_(444, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/algorithm.nim");
	if ((aLen_0) < ((NI) 0) || (aLen_0) > ((NI) IL64(9223372036854775807))){ raiseRangeErrorI(aLen_0, ((NI) 0), ((NI) IL64(9223372036854775807))); }
	result = newSeq__OOZOOZmain_107(((NI) (aLen_0)));
	{
		NI i;
		NI colontmp_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		nimln_(445, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/algorithm.nim");
		colontmp_ = (aLen_0-1);
		nimln_(90, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/system/iterators_1.nim");
		res = ((NI) 0);
		{
			nimln_(91, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/system/iterators_1.nim");
			while (1) {
				NI TM__JdC9c6SaUkvO1XjYuWP1JWQ_2;
				if (!(res <= colontmp_)) goto LA3;
				nimln_(445, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/algorithm.nim");
				i = res;
				if (i < 0 || i >= (result ? result->Sup.len : 0)){ raiseIndexError2(i,(result ? result->Sup.len : 0)-1); }
				if (i < 0 || i >= aLen_0){ raiseIndexError2(i,aLen_0-1); }
				result->data[i] = a[i];
				nimln_(93, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/system/iterators_1.nim");
				if (nimAddInt(res, ((NI) 1), &TM__JdC9c6SaUkvO1XjYuWP1JWQ_2)) { raiseOverflow(); };
				res = (NI)(TM__JdC9c6SaUkvO1XjYuWP1JWQ_2);
			} LA3: ;
		}
	}
	nimln_(447, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/algorithm.nim");
	sort__OOZOOZmain_123((result) ? (result->data) : NIM_NIL, (result ? result->Sup.len : 0), cmp, order);
	popFrame();
	return result;
}
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem__systemZmemory_7(p, ((int) 0), size);
}
N_LIB_PRIVATE N_NIMCALL(tySequence__qwqHTkRvwhrRyENtudHQ7g*, sorted__OOZOOZmain_84)(NI* a, NI aLen_0, tyEnum_SortOrder__8iBc6wlNqBa9cju9cUAhUAxA order) {
	tySequence__qwqHTkRvwhrRyENtudHQ7g* result;
	tyProc__EGDHMEKq2nFyDlkU6lrC3A T1_;
	nimfr_("sorted", "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/algorithm.nim");
	result = NIM_NIL;
	nimln_(450, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/algorithm.nim");
	nimln_(465, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/algorithm.nim");
	nimZeroMem((void*)(&T1_), sizeof(tyProc__EGDHMEKq2nFyDlkU6lrC3A));
	T1_.ClP_0 = ((TM__JdC9c6SaUkvO1XjYuWP1JWQ_24) (cmp__system_7499)); T1_.ClE_0 = NIM_NIL;
	result = sorted__OOZOOZmain_95(a, aLen_0, T1_, order);
	popFrame();
	return result;
}