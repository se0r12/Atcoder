/* Generated by Nim Compiler v1.6.10 */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -fmax-errors=3   -I/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib -I/home/se0r12/Atcoder/AtCoder_Beginners_Selection/ABC088B/tests/nim -o /home/se0r12/Atcoder/AtCoder_Beginners_Selection/ABC088B/nimcache/tests/nim/test2.nim_4a8a08f09d37b73795649038408b5f33/@m..@s..@s..@s..@s..@s.choosenim@stoolchains@snim-1.6.10@slib@spure@sparseutils.nim.c.o /home/se0r12/Atcoder/AtCoder_Beginners_Selection/ABC088B/nimcache/tests/nim/test2.nim_4a8a08f09d37b73795649038408b5f33/@m..@s..@s..@s..@s..@s.choosenim@stoolchains@snim-1.6.10@slib@spure@sparseutils.nim.c */
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
  typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw;
typedef struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w;
typedef struct tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct tyObject_GcStack__7fytPA5bBsob6See21YMRA tyObject_GcStack__7fytPA5bBsob6See21YMRA;
typedef struct tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg;
typedef struct tyObject_SmallChunk__tXn60W2f8h3jgAYdEmy5NQ tyObject_SmallChunk__tXn60W2f8h3jgAYdEmy5NQ;
typedef struct tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg;
typedef struct tyObject_LLChunk__XsENErzHIZV9bhvyJx56wGw tyObject_LLChunk__XsENErzHIZV9bhvyJx56wGw;
typedef struct tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA;
typedef struct tyObject_Trunk__W0r8S0Y3UGke6T9bIUWnnuw tyObject_Trunk__W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw;
typedef struct tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct tyTuple__ujsjpB2O9cjj3uDHsXbnSzg tyTuple__ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg;
typedef struct tyObject_CellSet__jG87P0AI9aZtss9ccTYBIISQ tyObject_CellSet__jG87P0AI9aZtss9ccTYBIISQ;
typedef struct tyObject_PageDesc__fublkgIY4LG3mT51LU2WHg tyObject_PageDesc__fublkgIY4LG3mT51LU2WHg;
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc__ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
NI align;
tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc__ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
struct RootObj {
TNimType* m_type;
};
struct Exception {
  RootObj Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
tySequence__uB9b75OUPRENsBAu4AnoePA* trace;
Exception* up;
};
struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA {
  Exception Sup;
};
struct tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw {
  tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA Sup;
};
typedef NU8 tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g {
NI refcount;
TNimType* typ;
};
struct tyObject_GcStack__7fytPA5bBsob6See21YMRA {
void* bottom;
};
struct tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w {
NI len;
NI cap;
tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef tyObject_SmallChunk__tXn60W2f8h3jgAYdEmy5NQ* tyArray__SPr7N6UKfuF549bNPiUvSRw[256];
typedef NU32 tyArray__BHbOSqU1t9b3Gt7K2c6fQig[24];
typedef tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg* tyArray__N1u1nqOgmuJN9cSZrnMHgOQ[32];
typedef tyArray__N1u1nqOgmuJN9cSZrnMHgOQ tyArray__B6durA4ZCi1xjJvRtyYxMg[24];
typedef tyObject_Trunk__W0r8S0Y3UGke6T9bIUWnnuw* tyArray__lh2A89ahMmYg9bCmpVaplLbA[256];
struct tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA {
tyArray__lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* tyArray__0aOLqZchNi8nWtMTi8ND8w[2];
struct tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw {
tyArray__0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct tyTuple__ujsjpB2O9cjj3uDHsXbnSzg {
tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef tyTuple__ujsjpB2O9cjj3uDHsXbnSzg tyArray__LzOv2eCDGiceMKQstCLmhw[30];
struct tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg {
NI len;
tyArray__LzOv2eCDGiceMKQstCLmhw chunks;
tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg {
NI minLargeObj;
NI maxLargeObj;
tyArray__SPr7N6UKfuF549bNPiUvSRw freeSmallChunks;
NU32 flBitmap;
tyArray__BHbOSqU1t9b3Gt7K2c6fQig slBitmap;
tyArray__B6durA4ZCi1xjJvRtyYxMg matrix;
tyObject_LLChunk__XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI occ;
NI lastSize;
tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* root;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* deleted;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* last;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw bottomData;
tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct tyObject_CellSet__jG87P0AI9aZtss9ccTYBIISQ {
NI counter;
NI max;
tyObject_PageDesc__fublkgIY4LG3mT51LU2WHg* head;
tyObject_PageDesc__fublkgIY4LG3mT51LU2WHg** data;
};
struct tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ {
tyObject_GcStack__7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
NI zctThreshold;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w zct;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w decStack;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg region;
tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg stat;
tyObject_CellSet__jG87P0AI9aZtss9ccTYBIISQ marked;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w additionalRoots;
NI gcThreadId;
};
struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};
struct tySequence__uB9b75OUPRENsBAu4AnoePA {
  TGenericSeq Sup;
  tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(NI, npuParseBiggestInt)(NimStringDesc* s, NI64* number, NI start);
N_LIB_PRIVATE N_NIMCALL(NI, rawParseInt__pureZparseutils_268)(NimStringDesc* s, NI64* b, NI start);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NOINLINE(void, integerOutOfRangeError__pureZparseutils_248)(void);
N_LIB_PRIVATE N_NOINLINE(void*, newObj)(TNimType* typ, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(void, decRef__system_5344)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NI, minuspercent___system_716)(NI x, NI y);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_2997)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NIM_BOOL, ltpercent___system_1005)(NI x, NI y);
static N_INLINE(void, rtlAddZCT__system_5342)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT__system_5293)(tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell__system_5299)(void* usr);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef__system_5337)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NI, pluspercent___system_696)(NI x, NI y);
N_LIB_PRIVATE N_NIMCALL(void, raiseExceptionEx)(Exception* e, NCSTRING ename, NCSTRING procname, NCSTRING filename, NI line);
extern TNimType NTIrefvalueerror__Ie1m0dv1ZHg72IgPRr1cDw_;
extern TNimType NTIvalueerror__yoNlBGx0D2tRizIdhQuENw_;
STRING_LITERAL(TM__vI9aZNKIcImom6dDyKXW1ZA_8, "Parsed integer outside of valid range", 37);
extern TFrame* framePtr__system_2564;
extern TFrame* framePtr__system_2564;
extern TFrame* framePtr__system_2564;
extern TFrame* framePtr__system_2564;
extern TFrame* framePtr__system_2564;
extern TFrame* framePtr__system_2564;
extern tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ gch__system_5246;
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
static N_INLINE(NI, minuspercent___system_716)(NI x, NI y) {
	NI result;
	nimfr_("-%", "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/system/arithmetics.nim");
	result = (NI)0;
	nimln_(414, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/system/arithmetics.nim");
	nimln_(418, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/system/arithmetics.nim");
	result = ((NI) ((NU)((NU64)(((NU) (x))) - (NU64)(((NU) (y))))));
	popFrame();
	return result;
}
static N_INLINE(NIM_BOOL, ltpercent___system_1005)(NI x, NI y) {
	NIM_BOOL result;
	nimfr_("<%", "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/system/comparisons.nim");
	result = (NIM_BOOL)0;
	nimln_(186, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/system/comparisons.nim");
	nimln_(188, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/system/comparisons.nim");
	result = ((NU64)(((NU) (x))) < (NU64)(((NU) (y))));
	popFrame();
	return result;
}
static N_INLINE(void, rtlAddZCT__system_5342)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("rtlAddZCT", "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/system/gc.nim");
	nimln_(243, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/system/gc.nim");
	addZCT__system_5293((&gch__system_5246.zct), c);
	popFrame();
}
static N_INLINE(void, decRef__system_5344)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("decRef", "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/system/gc.nim");
	nimln_(248, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/system/gc.nim");
	(*c).refcount = minuspercent___system_716((*c).refcount, ((NI) 8));
	nimln_(249, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/system/gc.nim");
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = ltpercent___system_1005((*c).refcount, ((NI) 8));
		if (!T3_) goto LA4_;
		nimln_(250, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/system/gc.nim");
		rtlAddZCT__system_5342(c);
	}
	LA4_: ;
	popFrame();
}
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell__system_5299)(void* usr) {
	tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* result;
	NI T1_;
	nimfr_("usrToCell", "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/system/gc.nim");
	result = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
	nimln_(177, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/system/gc.nim");
	T1_ = (NI)0;
	T1_ = minuspercent___system_716(((NI) (ptrdiff_t) (usr)), ((NI) 16));
	result = ((tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*) (T1_));
	popFrame();
	return result;
}
static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T1_;
	nimfr_("nimGCunrefNoCycle", "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/system/gc.nim");
	nimln_(276, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/system/gc.nim");
	T1_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
	T1_ = usrToCell__system_5299(p);
	decRef__system_5344(T1_);
	popFrame();
}
static N_INLINE(NI, pluspercent___system_696)(NI x, NI y) {
	NI result;
	nimfr_("+%", "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/system/arithmetics.nim");
	result = (NI)0;
	nimln_(403, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/system/arithmetics.nim");
	nimln_(407, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/system/arithmetics.nim");
	result = ((NI) ((NU)((NU64)(((NU) (x))) + (NU64)(((NU) (y))))));
	popFrame();
	return result;
}
static N_INLINE(void, incRef__system_5337)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("incRef", "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/system/gc.nim");
	nimln_(231, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/system/gc.nim");
	(*c).refcount = pluspercent___system_696((*c).refcount, ((NI) 8));
	popFrame();
}
static N_INLINE(void, asgnRef)(void** dest, void* src) {
	nimfr_("asgnRef", "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/system/gc.nim");
	nimln_(286, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/system/gc.nim");
	{
		tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T5_;
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T5_ = usrToCell__system_5299(src);
		incRef__system_5337(T5_);
	}
	LA3_: ;
	nimln_(287, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/system/gc.nim");
	{
		tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T10_;
		if (!!(((*dest) == NIM_NIL))) goto LA8_;
		T10_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T10_ = usrToCell__system_5299((*dest));
		decRef__system_5344(T10_);
	}
	LA8_: ;
	nimln_(288, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/system/gc.nim");
	(*dest) = src;
	popFrame();
}
N_LIB_PRIVATE N_NOINLINE(void, integerOutOfRangeError__pureZparseutils_248)(void) {
	tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw* T1_;
	NimStringDesc* T2_;
	nimfr_("integerOutOfRangeError", "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/parseutils.nim");
	T1_ = NIM_NIL;
	T1_ = (tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw*) newObj((&NTIrefvalueerror__Ie1m0dv1ZHg72IgPRr1cDw_), sizeof(tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw));
	(*T1_).Sup.Sup.Sup.m_type = (&NTIvalueerror__yoNlBGx0D2tRizIdhQuENw_);
	(*T1_).Sup.Sup.name = "ValueError";
	T2_ = NIM_NIL;
	T2_ = (*T1_).Sup.Sup.message; (*T1_).Sup.Sup.message = copyStringRC1(((NimStringDesc*) &TM__vI9aZNKIcImom6dDyKXW1ZA_8));
	if (T2_) nimGCunrefNoCycle(T2_);
	asgnRef((void**) (&(*T1_).Sup.Sup.parent), ((Exception*) NIM_NIL));
	nimln_(426, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/parseutils.nim");
	raiseExceptionEx((Exception*)T1_, "ValueError", "integerOutOfRangeError", "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/parseutils.nim", 426);
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(NI, rawParseInt__pureZparseutils_268)(NimStringDesc* s, NI64* b, NI start) {
	NI result;
	NI64 sign;
	NI i;
	nimfr_("rawParseInt", "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/parseutils.nim");
	result = (NI)0;
	nimln_(434, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/parseutils.nim");
	sign = IL64(-1);
	nimln_(435, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/parseutils.nim");
	i = start;
	nimln_(436, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/parseutils.nim");
	{
		if (!(i < (s ? s->Sup.len : 0))) goto LA3_;
		nimln_(437, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/parseutils.nim");
		{
			NI TM__vI9aZNKIcImom6dDyKXW1ZA_2;
			if (i < 0 || i >= (s ? s->Sup.len : 0)){ raiseIndexError2(i,(s ? s->Sup.len : 0)-1); }
			if (!((NU8)(s->data[i]) == (NU8)(43))) goto LA7_;
			if (nimAddInt(i, ((NI) 1), &TM__vI9aZNKIcImom6dDyKXW1ZA_2)) { raiseOverflow(); };
			i = (NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_2);
		}
		goto LA5_;
		LA7_: ;
		{
			NI TM__vI9aZNKIcImom6dDyKXW1ZA_3;
			nimln_(438, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/parseutils.nim");
			if (i < 0 || i >= (s ? s->Sup.len : 0)){ raiseIndexError2(i,(s ? s->Sup.len : 0)-1); }
			if (!((NU8)(s->data[i]) == (NU8)(45))) goto LA10_;
			nimln_(439, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/parseutils.nim");
			if (nimAddInt(i, ((NI) 1), &TM__vI9aZNKIcImom6dDyKXW1ZA_3)) { raiseOverflow(); };
			i = (NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_3);
			nimln_(440, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/parseutils.nim");
			sign = IL64(1);
		}
		goto LA5_;
		LA10_: ;
		LA5_: ;
	}
	LA3_: ;
	nimln_(441, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/parseutils.nim");
	{
		NIM_BOOL T14_;
		T14_ = (NIM_BOOL)0;
		T14_ = (i < (s ? s->Sup.len : 0));
		if (!(T14_)) goto LA15_;
		if (i < 0 || i >= (s ? s->Sup.len : 0)){ raiseIndexError2(i,(s ? s->Sup.len : 0)-1); }
		T14_ = (((NU8)(s->data[i])) >= ((NU8)(48)) && ((NU8)(s->data[i])) <= ((NU8)(57)));
		LA15_: ;
		if (!T14_) goto LA16_;
		nimln_(442, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/parseutils.nim");
		(*b) = IL64(0);
		{
			nimln_(443, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/parseutils.nim");
			while (1) {
				NIM_BOOL T20_;
				NI c;
				NI TM__vI9aZNKIcImom6dDyKXW1ZA_4;
				NI TM__vI9aZNKIcImom6dDyKXW1ZA_9;
				T20_ = (NIM_BOOL)0;
				T20_ = (i < (s ? s->Sup.len : 0));
				if (!(T20_)) goto LA21_;
				if (i < 0 || i >= (s ? s->Sup.len : 0)){ raiseIndexError2(i,(s ? s->Sup.len : 0)-1); }
				T20_ = (((NU8)(s->data[i])) >= ((NU8)(48)) && ((NU8)(s->data[i])) <= ((NU8)(57)));
				LA21_: ;
				if (!T20_) goto LA19;
				nimln_(444, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/parseutils.nim");
				if (i < 0 || i >= (s ? s->Sup.len : 0)){ raiseIndexError2(i,(s ? s->Sup.len : 0)-1); }
				if (nimSubInt(((NU8)(s->data[i])), ((NI) 48), &TM__vI9aZNKIcImom6dDyKXW1ZA_4)) { raiseOverflow(); };
				c = (NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_4);
				nimln_(445, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/parseutils.nim");
				{
					NI64 TM__vI9aZNKIcImom6dDyKXW1ZA_5;
					NI64 TM__vI9aZNKIcImom6dDyKXW1ZA_6;
					NI64 TM__vI9aZNKIcImom6dDyKXW1ZA_7;
					if (nimAddInt64((IL64(-9223372036854775807) - IL64(1)), ((NI64) (c)), &TM__vI9aZNKIcImom6dDyKXW1ZA_5)) { raiseOverflow(); };
					if (!((NI64)((NI64)(TM__vI9aZNKIcImom6dDyKXW1ZA_5) / IL64(10)) <= (*b))) goto LA24_;
					nimln_(446, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/parseutils.nim");
					if (nimMulInt64((*b), IL64(10), &TM__vI9aZNKIcImom6dDyKXW1ZA_6)) { raiseOverflow(); };
					if (nimSubInt64((NI64)(TM__vI9aZNKIcImom6dDyKXW1ZA_6), ((NI64) (c)), &TM__vI9aZNKIcImom6dDyKXW1ZA_7)) { raiseOverflow(); };
					(*b) = (NI64)(TM__vI9aZNKIcImom6dDyKXW1ZA_7);
				}
				goto LA22_;
				LA24_: ;
				{
					nimln_(448, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/parseutils.nim");
					integerOutOfRangeError__pureZparseutils_248();
				}
				LA22_: ;
				nimln_(449, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/parseutils.nim");
				if (nimAddInt(i, ((NI) 1), &TM__vI9aZNKIcImom6dDyKXW1ZA_9)) { raiseOverflow(); };
				i = (NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_9);
				{
					nimln_(450, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/parseutils.nim");
					while (1) {
						NIM_BOOL T29_;
						NI TM__vI9aZNKIcImom6dDyKXW1ZA_10;
						T29_ = (NIM_BOOL)0;
						T29_ = (i < (s ? s->Sup.len : 0));
						if (!(T29_)) goto LA30_;
						if (i < 0 || i >= (s ? s->Sup.len : 0)){ raiseIndexError2(i,(s ? s->Sup.len : 0)-1); }
						T29_ = ((NU8)(s->data[i]) == (NU8)(95));
						LA30_: ;
						if (!T29_) goto LA28;
						if (nimAddInt(i, ((NI) 1), &TM__vI9aZNKIcImom6dDyKXW1ZA_10)) { raiseOverflow(); };
						i = (NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_10);
					} LA28: ;
				}
			} LA19: ;
		}
		nimln_(451, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/parseutils.nim");
		{
			NIM_BOOL T33_;
			T33_ = (NIM_BOOL)0;
			T33_ = (sign == IL64(-1));
			if (!(T33_)) goto LA34_;
			T33_ = ((*b) == (IL64(-9223372036854775807) - IL64(1)));
			LA34_: ;
			if (!T33_) goto LA35_;
			nimln_(452, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/parseutils.nim");
			integerOutOfRangeError__pureZparseutils_248();
		}
		goto LA31_;
		LA35_: ;
		{
			NI64 TM__vI9aZNKIcImom6dDyKXW1ZA_11;
			NI TM__vI9aZNKIcImom6dDyKXW1ZA_12;
			nimln_(454, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/parseutils.nim");
			if (nimMulInt64((*b), sign, &TM__vI9aZNKIcImom6dDyKXW1ZA_11)) { raiseOverflow(); };
			(*b) = (NI64)(TM__vI9aZNKIcImom6dDyKXW1ZA_11);
			nimln_(455, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/parseutils.nim");
			if (nimSubInt(i, start, &TM__vI9aZNKIcImom6dDyKXW1ZA_12)) { raiseOverflow(); };
			result = (NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_12);
		}
		LA31_: ;
	}
	LA16_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, npuParseBiggestInt)(NimStringDesc* s, NI64* number, NI start) {
	NI result;
	NI64 res;
	nimfr_("parseBiggestInt", "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/parseutils.nim");
	result = (NI)0;
	nimln_(469, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/parseutils.nim");
	res = IL64(0);
	nimln_(472, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/parseutils.nim");
	result = rawParseInt__pureZparseutils_268(s, (&res), start);
	nimln_(473, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/parseutils.nim");
	{
		if (!!((result == ((NI) 0)))) goto LA3_;
		nimln_(474, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/parseutils.nim");
		(*number) = res;
	}
	LA3_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, npuParseInt)(NimStringDesc* s, NI* number, NI start) {
	NI result;
	NI64 res;
	nimfr_("parseInt", "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/parseutils.nim");
	result = (NI)0;
	nimln_(487, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/parseutils.nim");
	res = IL64(0);
	nimln_(488, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/parseutils.nim");
	result = npuParseBiggestInt(s, (&res), start);
	nimln_(492, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/parseutils.nim");
	{
		if (!!((result == ((NI) 0)))) goto LA3_;
		nimln_(493, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/pure/parseutils.nim");
		(*number) = ((NI) (res));
	}
	LA3_: ;
	popFrame();
	return result;
}
