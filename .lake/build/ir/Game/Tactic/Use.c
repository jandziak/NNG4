// Lean compiler output
// Module: Game.Tactic.Use
// Imports: Init Mathlib.Tactic.Use
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
static lean_object* l___aux__Game__Tactic__Use______elabRules__MyNat__useSyntax__1___closed__4;
static lean_object* l___aux__Game__Tactic__Use______elabRules__MyNat__useSyntax__1___closed__2;
static lean_object* l_MyNat_useSyntax___closed__1;
static lean_object* l_MyNat_useSyntax___closed__13;
static lean_object* l_MyNat_useSyntax___closed__23;
static lean_object* l_MyNat_useSyntax___closed__11;
static lean_object* l_MyNat_useSyntax___closed__14;
static lean_object* l_MyNat_useSyntax___closed__12;
static lean_object* l_MyNat_useSyntax___closed__6;
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_Syntax_TSepArray_getElems___rarg(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Std_Tactic___aux__Std__Tactic__ShowTerm______elabRules__Std__Tactic__showTermTac__1___spec__1___rarg(lean_object*);
static lean_object* l_MyNat_useSyntax___closed__19;
static lean_object* l_MyNat_useSyntax___closed__21;
static lean_object* l_MyNat_useSyntax___closed__7;
static lean_object* l___aux__Game__Tactic__Use______elabRules__MyNat__useSyntax__1___closed__1;
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
static lean_object* l_MyNat_useSyntax___closed__17;
static lean_object* l_MyNat_useSyntax___closed__16;
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Game__Tactic__Use______elabRules__MyNat__useSyntax__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
static lean_object* l_MyNat_useSyntax___closed__18;
static lean_object* l_MyNat_useSyntax___closed__8;
static lean_object* l_MyNat_useSyntax___closed__9;
static lean_object* l_MyNat_useSyntax___closed__20;
lean_object* l_Mathlib_Tactic_runUse(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___aux__Game__Tactic__Use______elabRules__MyNat__useSyntax__1___closed__3;
static lean_object* l_MyNat_useSyntax___closed__5;
static lean_object* l___aux__Game__Tactic__Use______elabRules__MyNat__useSyntax__1___closed__5;
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MyNat_useSyntax;
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
static lean_object* l_MyNat_useSyntax___closed__15;
static lean_object* l_MyNat_useSyntax___closed__2;
static lean_object* l_MyNat_useSyntax___closed__4;
static lean_object* l_MyNat_useSyntax___closed__22;
static lean_object* l_MyNat_useSyntax___closed__3;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_evalTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_MyNat_useSyntax___closed__10;
static lean_object* _init_l_MyNat_useSyntax___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("MyNat", 5);
return x_1;
}
}
static lean_object* _init_l_MyNat_useSyntax___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("useSyntax", 9);
return x_1;
}
}
static lean_object* _init_l_MyNat_useSyntax___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_MyNat_useSyntax___closed__1;
x_2 = l_MyNat_useSyntax___closed__2;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_MyNat_useSyntax___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("andthen", 7);
return x_1;
}
}
static lean_object* _init_l_MyNat_useSyntax___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_MyNat_useSyntax___closed__4;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_MyNat_useSyntax___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("use", 3);
return x_1;
}
}
static lean_object* _init_l_MyNat_useSyntax___closed__7() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_MyNat_useSyntax___closed__6;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_MyNat_useSyntax___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("group", 5);
return x_1;
}
}
static lean_object* _init_l_MyNat_useSyntax___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_MyNat_useSyntax___closed__8;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_MyNat_useSyntax___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("ppSpace", 7);
return x_1;
}
}
static lean_object* _init_l_MyNat_useSyntax___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_MyNat_useSyntax___closed__10;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_MyNat_useSyntax___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_MyNat_useSyntax___closed__11;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_MyNat_useSyntax___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_MyNat_useSyntax___closed__9;
x_2 = l_MyNat_useSyntax___closed__12;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_MyNat_useSyntax___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_MyNat_useSyntax___closed__5;
x_2 = l_MyNat_useSyntax___closed__7;
x_3 = l_MyNat_useSyntax___closed__13;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_MyNat_useSyntax___closed__15() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("term", 4);
return x_1;
}
}
static lean_object* _init_l_MyNat_useSyntax___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_MyNat_useSyntax___closed__15;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_MyNat_useSyntax___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_MyNat_useSyntax___closed__16;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_MyNat_useSyntax___closed__18() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes(", ", 2);
return x_1;
}
}
static lean_object* _init_l_MyNat_useSyntax___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_MyNat_useSyntax___closed__18;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_MyNat_useSyntax___closed__20() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes(",", 1);
return x_1;
}
}
static lean_object* _init_l_MyNat_useSyntax___closed__21() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; 
x_1 = l_MyNat_useSyntax___closed__17;
x_2 = l_MyNat_useSyntax___closed__20;
x_3 = l_MyNat_useSyntax___closed__19;
x_4 = 0;
x_5 = lean_alloc_ctor(11, 3, 1);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set_uint8(x_5, sizeof(void*)*3, x_4);
return x_5;
}
}
static lean_object* _init_l_MyNat_useSyntax___closed__22() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_MyNat_useSyntax___closed__5;
x_2 = l_MyNat_useSyntax___closed__14;
x_3 = l_MyNat_useSyntax___closed__21;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_MyNat_useSyntax___closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_MyNat_useSyntax___closed__3;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_MyNat_useSyntax___closed__22;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_MyNat_useSyntax() {
_start:
{
lean_object* x_1; 
x_1 = l_MyNat_useSyntax___closed__23;
return x_1;
}
}
static lean_object* _init_l___aux__Game__Tactic__Use______elabRules__MyNat__useSyntax__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Lean", 4);
return x_1;
}
}
static lean_object* _init_l___aux__Game__Tactic__Use______elabRules__MyNat__useSyntax__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Parser", 6);
return x_1;
}
}
static lean_object* _init_l___aux__Game__Tactic__Use______elabRules__MyNat__useSyntax__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Tactic", 6);
return x_1;
}
}
static lean_object* _init_l___aux__Game__Tactic__Use______elabRules__MyNat__useSyntax__1___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("skip", 4);
return x_1;
}
}
static lean_object* _init_l___aux__Game__Tactic__Use______elabRules__MyNat__useSyntax__1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___aux__Game__Tactic__Use______elabRules__MyNat__useSyntax__1___closed__1;
x_2 = l___aux__Game__Tactic__Use______elabRules__MyNat__useSyntax__1___closed__2;
x_3 = l___aux__Game__Tactic__Use______elabRules__MyNat__useSyntax__1___closed__3;
x_4 = l___aux__Game__Tactic__Use______elabRules__MyNat__useSyntax__1___closed__4;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l___aux__Game__Tactic__Use______elabRules__MyNat__useSyntax__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = l_MyNat_useSyntax___closed__3;
lean_inc(x_1);
x_12 = l_Lean_Syntax_isOfKind(x_1, x_11);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_13 = l_Lean_Elab_throwUnsupportedSyntax___at_Std_Tactic___aux__Std__Tactic__ShowTerm______elabRules__Std__Tactic__showTermTac__1___spec__1___rarg(x_10);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_14 = lean_unsigned_to_nat(2u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
lean_dec(x_1);
x_16 = l_Lean_Syntax_getArgs(x_15);
lean_dec(x_15);
x_17 = lean_ctor_get(x_8, 5);
lean_inc(x_17);
x_18 = 0;
x_19 = l_Lean_SourceInfo_fromRef(x_17, x_18);
x_20 = lean_st_ref_get(x_9, x_10);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_22 = l___aux__Game__Tactic__Use______elabRules__MyNat__useSyntax__1___closed__4;
lean_inc(x_19);
x_23 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_23, 0, x_19);
lean_ctor_set(x_23, 1, x_22);
x_24 = l___aux__Game__Tactic__Use______elabRules__MyNat__useSyntax__1___closed__5;
x_25 = l_Lean_Syntax_node1(x_19, x_24, x_23);
x_26 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalTactic), 10, 1);
lean_closure_set(x_26, 0, x_25);
x_27 = l_Lean_Syntax_TSepArray_getElems___rarg(x_16);
lean_dec(x_16);
x_28 = lean_array_to_list(lean_box(0), x_27);
x_29 = l_Mathlib_Tactic_runUse(x_18, x_26, x_28, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_21);
return x_29;
}
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Use(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Game_Tactic_Use(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Use(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_MyNat_useSyntax___closed__1 = _init_l_MyNat_useSyntax___closed__1();
lean_mark_persistent(l_MyNat_useSyntax___closed__1);
l_MyNat_useSyntax___closed__2 = _init_l_MyNat_useSyntax___closed__2();
lean_mark_persistent(l_MyNat_useSyntax___closed__2);
l_MyNat_useSyntax___closed__3 = _init_l_MyNat_useSyntax___closed__3();
lean_mark_persistent(l_MyNat_useSyntax___closed__3);
l_MyNat_useSyntax___closed__4 = _init_l_MyNat_useSyntax___closed__4();
lean_mark_persistent(l_MyNat_useSyntax___closed__4);
l_MyNat_useSyntax___closed__5 = _init_l_MyNat_useSyntax___closed__5();
lean_mark_persistent(l_MyNat_useSyntax___closed__5);
l_MyNat_useSyntax___closed__6 = _init_l_MyNat_useSyntax___closed__6();
lean_mark_persistent(l_MyNat_useSyntax___closed__6);
l_MyNat_useSyntax___closed__7 = _init_l_MyNat_useSyntax___closed__7();
lean_mark_persistent(l_MyNat_useSyntax___closed__7);
l_MyNat_useSyntax___closed__8 = _init_l_MyNat_useSyntax___closed__8();
lean_mark_persistent(l_MyNat_useSyntax___closed__8);
l_MyNat_useSyntax___closed__9 = _init_l_MyNat_useSyntax___closed__9();
lean_mark_persistent(l_MyNat_useSyntax___closed__9);
l_MyNat_useSyntax___closed__10 = _init_l_MyNat_useSyntax___closed__10();
lean_mark_persistent(l_MyNat_useSyntax___closed__10);
l_MyNat_useSyntax___closed__11 = _init_l_MyNat_useSyntax___closed__11();
lean_mark_persistent(l_MyNat_useSyntax___closed__11);
l_MyNat_useSyntax___closed__12 = _init_l_MyNat_useSyntax___closed__12();
lean_mark_persistent(l_MyNat_useSyntax___closed__12);
l_MyNat_useSyntax___closed__13 = _init_l_MyNat_useSyntax___closed__13();
lean_mark_persistent(l_MyNat_useSyntax___closed__13);
l_MyNat_useSyntax___closed__14 = _init_l_MyNat_useSyntax___closed__14();
lean_mark_persistent(l_MyNat_useSyntax___closed__14);
l_MyNat_useSyntax___closed__15 = _init_l_MyNat_useSyntax___closed__15();
lean_mark_persistent(l_MyNat_useSyntax___closed__15);
l_MyNat_useSyntax___closed__16 = _init_l_MyNat_useSyntax___closed__16();
lean_mark_persistent(l_MyNat_useSyntax___closed__16);
l_MyNat_useSyntax___closed__17 = _init_l_MyNat_useSyntax___closed__17();
lean_mark_persistent(l_MyNat_useSyntax___closed__17);
l_MyNat_useSyntax___closed__18 = _init_l_MyNat_useSyntax___closed__18();
lean_mark_persistent(l_MyNat_useSyntax___closed__18);
l_MyNat_useSyntax___closed__19 = _init_l_MyNat_useSyntax___closed__19();
lean_mark_persistent(l_MyNat_useSyntax___closed__19);
l_MyNat_useSyntax___closed__20 = _init_l_MyNat_useSyntax___closed__20();
lean_mark_persistent(l_MyNat_useSyntax___closed__20);
l_MyNat_useSyntax___closed__21 = _init_l_MyNat_useSyntax___closed__21();
lean_mark_persistent(l_MyNat_useSyntax___closed__21);
l_MyNat_useSyntax___closed__22 = _init_l_MyNat_useSyntax___closed__22();
lean_mark_persistent(l_MyNat_useSyntax___closed__22);
l_MyNat_useSyntax___closed__23 = _init_l_MyNat_useSyntax___closed__23();
lean_mark_persistent(l_MyNat_useSyntax___closed__23);
l_MyNat_useSyntax = _init_l_MyNat_useSyntax();
lean_mark_persistent(l_MyNat_useSyntax);
l___aux__Game__Tactic__Use______elabRules__MyNat__useSyntax__1___closed__1 = _init_l___aux__Game__Tactic__Use______elabRules__MyNat__useSyntax__1___closed__1();
lean_mark_persistent(l___aux__Game__Tactic__Use______elabRules__MyNat__useSyntax__1___closed__1);
l___aux__Game__Tactic__Use______elabRules__MyNat__useSyntax__1___closed__2 = _init_l___aux__Game__Tactic__Use______elabRules__MyNat__useSyntax__1___closed__2();
lean_mark_persistent(l___aux__Game__Tactic__Use______elabRules__MyNat__useSyntax__1___closed__2);
l___aux__Game__Tactic__Use______elabRules__MyNat__useSyntax__1___closed__3 = _init_l___aux__Game__Tactic__Use______elabRules__MyNat__useSyntax__1___closed__3();
lean_mark_persistent(l___aux__Game__Tactic__Use______elabRules__MyNat__useSyntax__1___closed__3);
l___aux__Game__Tactic__Use______elabRules__MyNat__useSyntax__1___closed__4 = _init_l___aux__Game__Tactic__Use______elabRules__MyNat__useSyntax__1___closed__4();
lean_mark_persistent(l___aux__Game__Tactic__Use______elabRules__MyNat__useSyntax__1___closed__4);
l___aux__Game__Tactic__Use______elabRules__MyNat__useSyntax__1___closed__5 = _init_l___aux__Game__Tactic__Use______elabRules__MyNat__useSyntax__1___closed__5();
lean_mark_persistent(l___aux__Game__Tactic__Use______elabRules__MyNat__useSyntax__1___closed__5);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
