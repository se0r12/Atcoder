/* Generated by Nim Compiler v1.6.10 */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -fmax-errors=3   -I/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib -I/home/se0r12/Atcoder/AtCoder_Beginners_Selection/ABC088B/tests/nim -o /home/se0r12/Atcoder/AtCoder_Beginners_Selection/ABC088B/nimcache/tests/nim/test2.nim_4a8a08f09d37b73795649038408b5f33/@m..@s..@s..@s..@s..@s.choosenim@stoolchains@snim-1.6.10@slib@ssystem@sdollars.nim.c.o /home/se0r12/Atcoder/AtCoder_Beginners_Selection/ABC088B/nimcache/tests/nim/test2.nim_4a8a08f09d37b73795649038408b5f33/@m..@s..@s..@s..@s..@s.choosenim@stoolchains@snim-1.6.10@slib@ssystem@sdollars.nim.c */
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
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(void, addInt__stdZprivateZdigitsutils_167)(NimStringDesc** result, NI64 x);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_2997)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, addInt__stdZprivateZdigitsutils_189)(NimStringDesc** result, NI x);
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
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar___systemZdollars_6)(NI64 x) {
	NimStringDesc* result;
	nimfr_("$", "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/system/dollars.nim");
	result = NIM_NIL;
	nimln_(16, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/system/dollars.nim");
	addInt__stdZprivateZdigitsutils_167((&result), x);
	popFrame();
	return result;
}
static N_INLINE(void, addInt__stdZprivateZdigitsutils_189)(NimStringDesc** result, NI x) {
	nimfr_("addInt", "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/std/private/digitsutils.nim");
	nimln_(117, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/std/private/digitsutils.nim");
	addInt__stdZprivateZdigitsutils_167(result, ((NI64) (x)));
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar___systemZdollars_3)(NI x) {
	NimStringDesc* result;
	nimfr_("$", "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/system/dollars.nim");
	result = NIM_NIL;
	nimln_(12, "/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib/system/dollars.nim");
	addInt__stdZprivateZdigitsutils_189((&result), x);
	popFrame();
	return result;
}
