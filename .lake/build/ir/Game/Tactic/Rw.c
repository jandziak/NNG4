// Lean compiler output
// Module: Game.Tactic.Rw
// Imports: Init Mathlib.Lean.Expr.Basic Lean.Elab.Tactic.Basic Lean.Elab.Tactic.Rewrite
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
lean_object* l_Lean_Elab_Tactic_withRWRulesSeq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwTacticEx___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Tactic_location;
lean_object* l_Lean_Elab_Tactic_expandOptLocation(lean_object*);
static lean_object* l_MyNat_rewriteSeq___closed__10;
static lean_object* l_MyNat_rewriteSeq___closed__7;
static lean_object* l_MyNat_rewriteSeq___closed__5;
static lean_object* l_MyNat_rewriteSeq___closed__12;
static lean_object* l_MyNat_evalRewriteSeq___lambda__2___closed__1;
static lean_object* l_MyNat_rewriteSeq___closed__15;
static lean_object* l_MyNat_rewriteSeq___closed__11;
lean_object* l_Lean_Elab_Tactic_withLocation(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_rewriteLocalDecl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_MyNat_rewriteSeq___closed__1;
static lean_object* l_MyNat_evalRewriteSeq___lambda__2___closed__4;
extern lean_object* l_Lean_Parser_Tactic_rwRuleSeq;
LEAN_EXPORT lean_object* l_MyNat_evalRewriteSeq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MyNat_evalRewriteSeq___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MyNat_evalRewriteSeq___lambda__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_MyNat_rewriteSeq___closed__6;
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MyNat_evalRewriteSeq___lambda__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MyNat_evalRewriteSeq___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MyNat_evalRewriteSeq___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_rewriteTarget___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_MyNat_rewriteSeq___closed__14;
static lean_object* l_MyNat_rewriteSeq___closed__9;
static lean_object* l_MyNat_rewriteSeq___closed__2;
static lean_object* l_MyNat_evalRewriteSeq___lambda__2___closed__5;
static lean_object* l_MyNat_rewriteSeq___closed__4;
LEAN_EXPORT lean_object* l_MyNat_evalRewriteSeq___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_MyNat_evalRewriteSeq___lambda__3___closed__1;
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_elabRewriteConfig(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_MyNat_rewriteSeq___closed__3;
static lean_object* l_MyNat_rewriteSeq___closed__13;
LEAN_EXPORT lean_object* l_MyNat_evalRewriteSeq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_MyNat_rewriteSeq___closed__8;
extern lean_object* l_Lean_Parser_Tactic_config;
LEAN_EXPORT lean_object* l_MyNat_rewriteSeq;
static lean_object* l_MyNat_evalRewriteSeq___lambda__2___closed__3;
static lean_object* l_MyNat_evalRewriteSeq___lambda__2___closed__2;
static lean_object* _init_l_MyNat_rewriteSeq___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("MyNat", 5);
return x_1;
}
}
static lean_object* _init_l_MyNat_rewriteSeq___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("rewriteSeq", 10);
return x_1;
}
}
static lean_object* _init_l_MyNat_rewriteSeq___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_MyNat_rewriteSeq___closed__1;
x_2 = l_MyNat_rewriteSeq___closed__2;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_MyNat_rewriteSeq___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("andthen", 7);
return x_1;
}
}
static lean_object* _init_l_MyNat_rewriteSeq___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_MyNat_rewriteSeq___closed__4;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_MyNat_rewriteSeq___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("rw", 2);
return x_1;
}
}
static lean_object* _init_l_MyNat_rewriteSeq___closed__7() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_MyNat_rewriteSeq___closed__6;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_MyNat_rewriteSeq___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("optional", 8);
return x_1;
}
}
static lean_object* _init_l_MyNat_rewriteSeq___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_MyNat_rewriteSeq___closed__8;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_MyNat_rewriteSeq___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_MyNat_rewriteSeq___closed__9;
x_2 = l_Lean_Parser_Tactic_config;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_MyNat_rewriteSeq___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_MyNat_rewriteSeq___closed__5;
x_2 = l_MyNat_rewriteSeq___closed__7;
x_3 = l_MyNat_rewriteSeq___closed__10;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_MyNat_rewriteSeq___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_MyNat_rewriteSeq___closed__5;
x_2 = l_MyNat_rewriteSeq___closed__11;
x_3 = l_Lean_Parser_Tactic_rwRuleSeq;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_MyNat_rewriteSeq___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_MyNat_rewriteSeq___closed__9;
x_2 = l_Lean_Parser_Tactic_location;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_MyNat_rewriteSeq___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_MyNat_rewriteSeq___closed__5;
x_2 = l_MyNat_rewriteSeq___closed__12;
x_3 = l_MyNat_rewriteSeq___closed__13;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_MyNat_rewriteSeq___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_MyNat_rewriteSeq___closed__3;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_MyNat_rewriteSeq___closed__14;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_MyNat_rewriteSeq() {
_start:
{
lean_object* x_1; 
x_1 = l_MyNat_rewriteSeq___closed__15;
return x_1;
}
}
LEAN_EXPORT lean_object* l_MyNat_evalRewriteSeq___lambda__1(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Lean_Elab_Tactic_rewriteLocalDecl(x_1, x_2, x_4, x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_14;
}
}
static lean_object* _init_l_MyNat_evalRewriteSeq___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("rewrite", 7);
return x_1;
}
}
static lean_object* _init_l_MyNat_evalRewriteSeq___lambda__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_MyNat_evalRewriteSeq___lambda__2___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_MyNat_evalRewriteSeq___lambda__2___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("did not find instance of the pattern in the current goal", 56);
return x_1;
}
}
static lean_object* _init_l_MyNat_evalRewriteSeq___lambda__2___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_MyNat_evalRewriteSeq___lambda__2___closed__3;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_MyNat_evalRewriteSeq___lambda__2___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_MyNat_evalRewriteSeq___lambda__2___closed__4;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MyNat_evalRewriteSeq___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = l_MyNat_evalRewriteSeq___lambda__2___closed__2;
x_12 = l_MyNat_evalRewriteSeq___lambda__2___closed__5;
x_13 = l_Lean_Meta_throwTacticEx___rarg(x_11, x_1, x_12, x_6, x_7, x_8, x_9, x_10);
return x_13;
}
}
static lean_object* _init_l_MyNat_evalRewriteSeq___lambda__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_MyNat_evalRewriteSeq___lambda__2___boxed), 10, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_MyNat_evalRewriteSeq___lambda__3(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_14 = lean_box(x_3);
lean_inc(x_1);
lean_inc(x_4);
x_15 = lean_alloc_closure((void*)(l_MyNat_evalRewriteSeq___lambda__1___boxed), 13, 3);
lean_closure_set(x_15, 0, x_4);
lean_closure_set(x_15, 1, x_14);
lean_closure_set(x_15, 2, x_1);
x_16 = lean_box(x_3);
x_17 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_rewriteTarget___boxed), 12, 3);
lean_closure_set(x_17, 0, x_4);
lean_closure_set(x_17, 1, x_16);
lean_closure_set(x_17, 2, x_1);
x_18 = l_MyNat_evalRewriteSeq___lambda__3___closed__1;
x_19 = l_Lean_Elab_Tactic_withLocation(x_2, x_15, x_17, x_18, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_19;
}
}
LEAN_EXPORT lean_object* l_MyNat_evalRewriteSeq(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = l_Lean_Syntax_getArg(x_1, x_11);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_13 = l_Lean_Elab_Tactic_elabRewriteConfig(x_12, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_unsigned_to_nat(3u);
x_17 = l_Lean_Syntax_getArg(x_1, x_16);
x_18 = l_Lean_Elab_Tactic_expandOptLocation(x_17);
lean_dec(x_17);
x_19 = lean_unsigned_to_nat(0u);
x_20 = l_Lean_Syntax_getArg(x_1, x_19);
x_21 = lean_unsigned_to_nat(2u);
x_22 = l_Lean_Syntax_getArg(x_1, x_21);
x_23 = lean_alloc_closure((void*)(l_MyNat_evalRewriteSeq___lambda__3___boxed), 13, 2);
lean_closure_set(x_23, 0, x_14);
lean_closure_set(x_23, 1, x_18);
x_24 = l_Lean_Elab_Tactic_withRWRulesSeq(x_20, x_22, x_23, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_15);
lean_dec(x_22);
return x_24;
}
else
{
uint8_t x_25; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_25 = !lean_is_exclusive(x_13);
if (x_25 == 0)
{
return x_13;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_13, 0);
x_27 = lean_ctor_get(x_13, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_13);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
LEAN_EXPORT lean_object* l_MyNat_evalRewriteSeq___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; lean_object* x_15; 
x_14 = lean_unbox(x_2);
lean_dec(x_2);
x_15 = l_MyNat_evalRewriteSeq___lambda__1(x_1, x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_15;
}
}
LEAN_EXPORT lean_object* l_MyNat_evalRewriteSeq___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_MyNat_evalRewriteSeq___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_MyNat_evalRewriteSeq___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; lean_object* x_15; 
x_14 = lean_unbox(x_3);
lean_dec(x_3);
x_15 = l_MyNat_evalRewriteSeq___lambda__3(x_1, x_2, x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_15;
}
}
LEAN_EXPORT lean_object* l_MyNat_evalRewriteSeq___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_MyNat_evalRewriteSeq(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_1);
return x_11;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Lean_Expr_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Elab_Tactic_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Elab_Tactic_Rewrite(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Game_Tactic_Rw(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Lean_Expr_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Rewrite(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_MyNat_rewriteSeq___closed__1 = _init_l_MyNat_rewriteSeq___closed__1();
lean_mark_persistent(l_MyNat_rewriteSeq___closed__1);
l_MyNat_rewriteSeq___closed__2 = _init_l_MyNat_rewriteSeq___closed__2();
lean_mark_persistent(l_MyNat_rewriteSeq___closed__2);
l_MyNat_rewriteSeq___closed__3 = _init_l_MyNat_rewriteSeq___closed__3();
lean_mark_persistent(l_MyNat_rewriteSeq___closed__3);
l_MyNat_rewriteSeq___closed__4 = _init_l_MyNat_rewriteSeq___closed__4();
lean_mark_persistent(l_MyNat_rewriteSeq___closed__4);
l_MyNat_rewriteSeq___closed__5 = _init_l_MyNat_rewriteSeq___closed__5();
lean_mark_persistent(l_MyNat_rewriteSeq___closed__5);
l_MyNat_rewriteSeq___closed__6 = _init_l_MyNat_rewriteSeq___closed__6();
lean_mark_persistent(l_MyNat_rewriteSeq___closed__6);
l_MyNat_rewriteSeq___closed__7 = _init_l_MyNat_rewriteSeq___closed__7();
lean_mark_persistent(l_MyNat_rewriteSeq___closed__7);
l_MyNat_rewriteSeq___closed__8 = _init_l_MyNat_rewriteSeq___closed__8();
lean_mark_persistent(l_MyNat_rewriteSeq___closed__8);
l_MyNat_rewriteSeq___closed__9 = _init_l_MyNat_rewriteSeq___closed__9();
lean_mark_persistent(l_MyNat_rewriteSeq___closed__9);
l_MyNat_rewriteSeq___closed__10 = _init_l_MyNat_rewriteSeq___closed__10();
lean_mark_persistent(l_MyNat_rewriteSeq___closed__10);
l_MyNat_rewriteSeq___closed__11 = _init_l_MyNat_rewriteSeq___closed__11();
lean_mark_persistent(l_MyNat_rewriteSeq___closed__11);
l_MyNat_rewriteSeq___closed__12 = _init_l_MyNat_rewriteSeq___closed__12();
lean_mark_persistent(l_MyNat_rewriteSeq___closed__12);
l_MyNat_rewriteSeq___closed__13 = _init_l_MyNat_rewriteSeq___closed__13();
lean_mark_persistent(l_MyNat_rewriteSeq___closed__13);
l_MyNat_rewriteSeq___closed__14 = _init_l_MyNat_rewriteSeq___closed__14();
lean_mark_persistent(l_MyNat_rewriteSeq___closed__14);
l_MyNat_rewriteSeq___closed__15 = _init_l_MyNat_rewriteSeq___closed__15();
lean_mark_persistent(l_MyNat_rewriteSeq___closed__15);
l_MyNat_rewriteSeq = _init_l_MyNat_rewriteSeq();
lean_mark_persistent(l_MyNat_rewriteSeq);
l_MyNat_evalRewriteSeq___lambda__2___closed__1 = _init_l_MyNat_evalRewriteSeq___lambda__2___closed__1();
lean_mark_persistent(l_MyNat_evalRewriteSeq___lambda__2___closed__1);
l_MyNat_evalRewriteSeq___lambda__2___closed__2 = _init_l_MyNat_evalRewriteSeq___lambda__2___closed__2();
lean_mark_persistent(l_MyNat_evalRewriteSeq___lambda__2___closed__2);
l_MyNat_evalRewriteSeq___lambda__2___closed__3 = _init_l_MyNat_evalRewriteSeq___lambda__2___closed__3();
lean_mark_persistent(l_MyNat_evalRewriteSeq___lambda__2___closed__3);
l_MyNat_evalRewriteSeq___lambda__2___closed__4 = _init_l_MyNat_evalRewriteSeq___lambda__2___closed__4();
lean_mark_persistent(l_MyNat_evalRewriteSeq___lambda__2___closed__4);
l_MyNat_evalRewriteSeq___lambda__2___closed__5 = _init_l_MyNat_evalRewriteSeq___lambda__2___closed__5();
lean_mark_persistent(l_MyNat_evalRewriteSeq___lambda__2___closed__5);
l_MyNat_evalRewriteSeq___lambda__3___closed__1 = _init_l_MyNat_evalRewriteSeq___lambda__3___closed__1();
lean_mark_persistent(l_MyNat_evalRewriteSeq___lambda__3___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
