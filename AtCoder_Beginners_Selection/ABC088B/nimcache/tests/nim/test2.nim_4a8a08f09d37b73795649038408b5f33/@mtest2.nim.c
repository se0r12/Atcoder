/* Generated by Nim Compiler v1.6.10 */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -fmax-errors=3   -I/home/se0r12/.choosenim/toolchains/nim-1.6.10/lib -I/home/se0r12/Atcoder/AtCoder_Beginners_Selection/ABC088B/tests/nim -o /home/se0r12/Atcoder/AtCoder_Beginners_Selection/ABC088B/nimcache/tests/nim/test2.nim_4a8a08f09d37b73795649038408b5f33/@mtest2.nim.c.o /home/se0r12/Atcoder/AtCoder_Beginners_Selection/ABC088B/nimcache/tests/nim/test2.nim_4a8a08f09d37b73795649038408b5f33/@mtest2.nim.c */
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
  N_LIB_PRIVATE N_NIMCALL(void, test01__test50_2)(void);
N_LIB_PRIVATE N_NIMCALL(void, main__OOZOOZmain_4)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_2997)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, initStackBottomWith)(void* locals);
N_LIB_PRIVATE N_NOINLINE(void, nimGC_setStackBottom)(void* theStackBottom);
N_LIB_PRIVATE N_NIMCALL(void, atmdotdotatsdotdotatsdotdotatsdotdotatsdotdotatsdotchoosenimatstoolchainsatsnimminus1dot6dot10atslibatssystemdotnim_DatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, atmdotdotatsdotdotatsdotdotatsdotdotatsdotdotatsdotchoosenimatstoolchainsatsnimminus1dot6dot10atslibatssystemdotnim_Init000)(void);
N_LIB_PRIVATE N_NIMCALL(void, atmdotdotatsdotdotatsdotdotatsdotdotatsdotdotatsdotchoosenimatstoolchainsatsnimminus1dot6dot10atslibatspureatsstrutilsdotnim_DatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, atmdotdotatsdotdotatsmaindotnim_DatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, NimMainModule)(void);
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
N_LIB_PRIVATE N_NIMCALL(void, test01__test50_2)(void) {
	nimfr_("test01", "/home/se0r12/Atcoder/AtCoder_Beginners_Selection/ABC088B/tests/nim/test2.nim");
	nimln_(7, "/home/se0r12/Atcoder/AtCoder_Beginners_Selection/ABC088B/tests/nim/test2.nim");
	main__OOZOOZmain_4();
	popFrame();
}
static N_INLINE(void, initStackBottomWith)(void* locals) {
	nimGC_setStackBottom(locals);
}

N_LIB_PRIVATE void PreMainInner(void) {
}

N_LIB_PRIVATE int cmdCount;
N_LIB_PRIVATE char** cmdLine;
N_LIB_PRIVATE char** gEnv;
N_LIB_PRIVATE void PreMain(void) {
	void (*volatile inner)(void);
	inner = PreMainInner;
	atmdotdotatsdotdotatsdotdotatsdotdotatsdotdotatsdotchoosenimatstoolchainsatsnimminus1dot6dot10atslibatssystemdotnim_DatInit000();
	initStackBottomWith((void *)&inner);
	atmdotdotatsdotdotatsdotdotatsdotdotatsdotdotatsdotchoosenimatstoolchainsatsnimminus1dot6dot10atslibatssystemdotnim_Init000();
	atmdotdotatsdotdotatsdotdotatsdotdotatsdotdotatsdotchoosenimatstoolchainsatsnimminus1dot6dot10atslibatspureatsstrutilsdotnim_DatInit000();
	atmdotdotatsdotdotatsmaindotnim_DatInit000();
	(*inner)();
}

N_LIB_PRIVATE N_CDECL(void, NimMainInner)(void) {
	NimMainModule();
}

N_CDECL(void, NimMain)(void) {
	void (*volatile inner)(void);
	PreMain();
	inner = NimMainInner;
	initStackBottomWith((void *)&inner);
	(*inner)();
}

int main(int argc, char** args, char** env) {
	cmdLine = args;
	cmdCount = argc;
	gEnv = env;
	NimMain();
	return nim_program_result;
}

N_LIB_PRIVATE N_NIMCALL(void, NimMainModule)(void) {
{
	nimfr_("test2", "/home/se0r12/Atcoder/AtCoder_Beginners_Selection/ABC088B/tests/nim/test2.nim");
	nimln_(10, "/home/se0r12/Atcoder/AtCoder_Beginners_Selection/ABC088B/tests/nim/test2.nim");
	test01__test50_2();
	popFrame();
}
}

