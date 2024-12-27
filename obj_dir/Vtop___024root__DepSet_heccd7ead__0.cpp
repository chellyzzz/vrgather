// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    vlSelf->vrgather__DOT__lut[0U] = (0xffffU & vlSelf->table_data[0U]);
    vlSelf->vrgather__DOT__lut[1U] = (vlSelf->table_data[0U] 
                                      >> 0x10U);
    vlSelf->vrgather__DOT__lut[2U] = (0xffffU & vlSelf->table_data[1U]);
    vlSelf->vrgather__DOT__lut[3U] = (vlSelf->table_data[1U] 
                                      >> 0x10U);
    vlSelf->vrgather__DOT__lut[4U] = (0xffffU & vlSelf->table_data[2U]);
    vlSelf->vrgather__DOT__lut[5U] = (vlSelf->table_data[2U] 
                                      >> 0x10U);
    vlSelf->vrgather__DOT__lut[6U] = (0xffffU & vlSelf->table_data[3U]);
    vlSelf->vrgather__DOT__lut[7U] = (vlSelf->table_data[3U] 
                                      >> 0x10U);
    vlSelf->vrgather__DOT__lut[8U] = (0xffffU & vlSelf->table_data[4U]);
    vlSelf->vrgather__DOT__lut[9U] = (vlSelf->table_data[4U] 
                                      >> 0x10U);
    vlSelf->vrgather__DOT__lut[0xaU] = (0xffffU & vlSelf->table_data[5U]);
    vlSelf->vrgather__DOT__lut[0xbU] = (vlSelf->table_data[5U] 
                                        >> 0x10U);
    vlSelf->vrgather__DOT__lut[0xcU] = (0xffffU & vlSelf->table_data[6U]);
    vlSelf->vrgather__DOT__lut[0xdU] = (vlSelf->table_data[6U] 
                                        >> 0x10U);
    vlSelf->vrgather__DOT__lut[0xeU] = (0xffffU & vlSelf->table_data[7U]);
    vlSelf->vrgather__DOT__lut[0xfU] = (vlSelf->table_data[7U] 
                                        >> 0x10U);
    vlSelf->vrgather__DOT__lut[0x10U] = (0xffffU & 
                                         vlSelf->table_data[8U]);
    vlSelf->vrgather__DOT__lut[0x11U] = (vlSelf->table_data[8U] 
                                         >> 0x10U);
    vlSelf->vrgather__DOT__lut[0x12U] = (0xffffU & 
                                         vlSelf->table_data[9U]);
    vlSelf->vrgather__DOT__lut[0x13U] = (vlSelf->table_data[9U] 
                                         >> 0x10U);
    vlSelf->vrgather__DOT__lut[0x14U] = (0xffffU & 
                                         vlSelf->table_data[0xaU]);
    vlSelf->vrgather__DOT__lut[0x15U] = (vlSelf->table_data[0xaU] 
                                         >> 0x10U);
    vlSelf->vrgather__DOT__lut[0x16U] = (0xffffU & 
                                         vlSelf->table_data[0xbU]);
    vlSelf->vrgather__DOT__lut[0x17U] = (vlSelf->table_data[0xbU] 
                                         >> 0x10U);
    vlSelf->vrgather__DOT__lut[0x18U] = (0xffffU & 
                                         vlSelf->table_data[0xcU]);
    vlSelf->vrgather__DOT__lut[0x19U] = (vlSelf->table_data[0xcU] 
                                         >> 0x10U);
    vlSelf->vrgather__DOT__lut[0x1aU] = (0xffffU & 
                                         vlSelf->table_data[0xdU]);
    vlSelf->vrgather__DOT__lut[0x1bU] = (vlSelf->table_data[0xdU] 
                                         >> 0x10U);
    vlSelf->vrgather__DOT__lut[0x1cU] = (0xffffU & 
                                         vlSelf->table_data[0xeU]);
    vlSelf->vrgather__DOT__lut[0x1dU] = (vlSelf->table_data[0xeU] 
                                         >> 0x10U);
    vlSelf->vrgather__DOT__lut[0x1eU] = (0xffffU & 
                                         vlSelf->table_data[0xfU]);
    vlSelf->vrgather__DOT__lut[0x1fU] = (vlSelf->table_data[0xfU] 
                                         >> 0x10U);
    vlSelf->vrgather__DOT__lut[0x20U] = (0xffffU & 
                                         vlSelf->table_data[0x10U]);
    vlSelf->vrgather__DOT__lut[0x21U] = (vlSelf->table_data[0x10U] 
                                         >> 0x10U);
    vlSelf->vrgather__DOT__lut[0x22U] = (0xffffU & 
                                         vlSelf->table_data[0x11U]);
    vlSelf->vrgather__DOT__lut[0x23U] = (vlSelf->table_data[0x11U] 
                                         >> 0x10U);
    vlSelf->vrgather__DOT__lut[0x24U] = (0xffffU & 
                                         vlSelf->table_data[0x12U]);
    vlSelf->vrgather__DOT__lut[0x25U] = (vlSelf->table_data[0x12U] 
                                         >> 0x10U);
    vlSelf->vrgather__DOT__lut[0x26U] = (0xffffU & 
                                         vlSelf->table_data[0x13U]);
    vlSelf->vrgather__DOT__lut[0x27U] = (vlSelf->table_data[0x13U] 
                                         >> 0x10U);
    vlSelf->vrgather__DOT__lut[0x28U] = (0xffffU & 
                                         vlSelf->table_data[0x14U]);
    vlSelf->vrgather__DOT__lut[0x29U] = (vlSelf->table_data[0x14U] 
                                         >> 0x10U);
    vlSelf->vrgather__DOT__lut[0x2aU] = (0xffffU & 
                                         vlSelf->table_data[0x15U]);
    vlSelf->vrgather__DOT__lut[0x2bU] = (vlSelf->table_data[0x15U] 
                                         >> 0x10U);
    vlSelf->vrgather__DOT__lut[0x2cU] = (0xffffU & 
                                         vlSelf->table_data[0x16U]);
    vlSelf->vrgather__DOT__lut[0x2dU] = (vlSelf->table_data[0x16U] 
                                         >> 0x10U);
    vlSelf->vrgather__DOT__lut[0x2eU] = (0xffffU & 
                                         vlSelf->table_data[0x17U]);
    vlSelf->vrgather__DOT__lut[0x2fU] = (vlSelf->table_data[0x17U] 
                                         >> 0x10U);
    vlSelf->vrgather__DOT__lut[0x30U] = (0xffffU & 
                                         vlSelf->table_data[0x18U]);
    vlSelf->vrgather__DOT__lut[0x31U] = (vlSelf->table_data[0x18U] 
                                         >> 0x10U);
    vlSelf->vrgather__DOT__lut[0x32U] = (0xffffU & 
                                         vlSelf->table_data[0x19U]);
    vlSelf->vrgather__DOT__lut[0x33U] = (vlSelf->table_data[0x19U] 
                                         >> 0x10U);
    vlSelf->vrgather__DOT__lut[0x34U] = (0xffffU & 
                                         vlSelf->table_data[0x1aU]);
    vlSelf->vrgather__DOT__lut[0x35U] = (vlSelf->table_data[0x1aU] 
                                         >> 0x10U);
    vlSelf->vrgather__DOT__lut[0x36U] = (0xffffU & 
                                         vlSelf->table_data[0x1bU]);
    vlSelf->vrgather__DOT__lut[0x37U] = (vlSelf->table_data[0x1bU] 
                                         >> 0x10U);
    vlSelf->vrgather__DOT__lut[0x38U] = (0xffffU & 
                                         vlSelf->table_data[0x1cU]);
    vlSelf->vrgather__DOT__lut[0x39U] = (vlSelf->table_data[0x1cU] 
                                         >> 0x10U);
    vlSelf->vrgather__DOT__lut[0x3aU] = (0xffffU & 
                                         vlSelf->table_data[0x1dU]);
    vlSelf->vrgather__DOT__lut[0x3bU] = (vlSelf->table_data[0x1dU] 
                                         >> 0x10U);
    vlSelf->vrgather__DOT__lut[0x3cU] = (0xffffU & 
                                         vlSelf->table_data[0x1eU]);
    vlSelf->vrgather__DOT__lut[0x3dU] = (vlSelf->table_data[0x1eU] 
                                         >> 0x10U);
    vlSelf->vrgather__DOT__lut[0x3eU] = (0xffffU & 
                                         vlSelf->table_data[0x1fU]);
    vlSelf->vrgather__DOT__lut[0x3fU] = (vlSelf->table_data[0x1fU] 
                                         >> 0x10U);
    vlSelf->vrgather__DOT__lut[0x40U] = (0xffffU & 
                                         vlSelf->table_data[0x20U]);
    vlSelf->vrgather__DOT__lut[0x41U] = (vlSelf->table_data[0x20U] 
                                         >> 0x10U);
    vlSelf->vrgather__DOT__lut[0x42U] = (0xffffU & 
                                         vlSelf->table_data[0x21U]);
    vlSelf->vrgather__DOT__lut[0x43U] = (vlSelf->table_data[0x21U] 
                                         >> 0x10U);
    vlSelf->vrgather__DOT__lut[0x44U] = (0xffffU & 
                                         vlSelf->table_data[0x22U]);
    vlSelf->vrgather__DOT__lut[0x45U] = (vlSelf->table_data[0x22U] 
                                         >> 0x10U);
    vlSelf->vrgather__DOT__lut[0x46U] = (0xffffU & 
                                         vlSelf->table_data[0x23U]);
    vlSelf->vrgather__DOT__lut[0x47U] = (vlSelf->table_data[0x23U] 
                                         >> 0x10U);
    vlSelf->vrgather__DOT__lut[0x48U] = (0xffffU & 
                                         vlSelf->table_data[0x24U]);
    vlSelf->vrgather__DOT__lut[0x49U] = (vlSelf->table_data[0x24U] 
                                         >> 0x10U);
    vlSelf->vrgather__DOT__lut[0x4aU] = (0xffffU & 
                                         vlSelf->table_data[0x25U]);
    vlSelf->vrgather__DOT__lut[0x4bU] = (vlSelf->table_data[0x25U] 
                                         >> 0x10U);
    vlSelf->vrgather__DOT__lut[0x4cU] = (0xffffU & 
                                         vlSelf->table_data[0x26U]);
    vlSelf->vrgather__DOT__lut[0x4dU] = (vlSelf->table_data[0x26U] 
                                         >> 0x10U);
    vlSelf->vrgather__DOT__lut[0x4eU] = (0xffffU & 
                                         vlSelf->table_data[0x27U]);
    vlSelf->vrgather__DOT__lut[0x4fU] = (vlSelf->table_data[0x27U] 
                                         >> 0x10U);
    vlSelf->vrgather__DOT__lut[0x50U] = (0xffffU & 
                                         vlSelf->table_data[0x28U]);
    vlSelf->vrgather__DOT__lut[0x51U] = (vlSelf->table_data[0x28U] 
                                         >> 0x10U);
    vlSelf->vrgather__DOT__lut[0x52U] = (0xffffU & 
                                         vlSelf->table_data[0x29U]);
    vlSelf->vrgather__DOT__lut[0x53U] = (vlSelf->table_data[0x29U] 
                                         >> 0x10U);
    vlSelf->vrgather__DOT__lut[0x54U] = (0xffffU & 
                                         vlSelf->table_data[0x2aU]);
    vlSelf->vrgather__DOT__lut[0x55U] = (vlSelf->table_data[0x2aU] 
                                         >> 0x10U);
    vlSelf->vrgather__DOT__lut[0x56U] = (0xffffU & 
                                         vlSelf->table_data[0x2bU]);
    vlSelf->vrgather__DOT__lut[0x57U] = (vlSelf->table_data[0x2bU] 
                                         >> 0x10U);
    vlSelf->vrgather__DOT__lut[0x58U] = (0xffffU & 
                                         vlSelf->table_data[0x2cU]);
    vlSelf->vrgather__DOT__lut[0x59U] = (vlSelf->table_data[0x2cU] 
                                         >> 0x10U);
    vlSelf->vrgather__DOT__lut[0x5aU] = (0xffffU & 
                                         vlSelf->table_data[0x2dU]);
    vlSelf->vrgather__DOT__lut[0x5bU] = (vlSelf->table_data[0x2dU] 
                                         >> 0x10U);
    vlSelf->vrgather__DOT__lut[0x5cU] = (0xffffU & 
                                         vlSelf->table_data[0x2eU]);
    vlSelf->vrgather__DOT__lut[0x5dU] = (vlSelf->table_data[0x2eU] 
                                         >> 0x10U);
    vlSelf->vrgather__DOT__lut[0x5eU] = (0xffffU & 
                                         vlSelf->table_data[0x2fU]);
    vlSelf->vrgather__DOT__lut[0x5fU] = (vlSelf->table_data[0x2fU] 
                                         >> 0x10U);
    vlSelf->vrgather__DOT__lut[0x60U] = (0xffffU & 
                                         vlSelf->table_data[0x30U]);
    vlSelf->vrgather__DOT__lut[0x61U] = (vlSelf->table_data[0x30U] 
                                         >> 0x10U);
    vlSelf->vrgather__DOT__lut[0x62U] = (0xffffU & 
                                         vlSelf->table_data[0x31U]);
    vlSelf->vrgather__DOT__lut[0x63U] = (vlSelf->table_data[0x31U] 
                                         >> 0x10U);
    vlSelf->vrgather__DOT__lut[0x64U] = (0xffffU & 
                                         vlSelf->table_data[0x32U]);
    vlSelf->vrgather__DOT__lut[0x65U] = (vlSelf->table_data[0x32U] 
                                         >> 0x10U);
    vlSelf->vrgather__DOT__lut[0x66U] = (0xffffU & 
                                         vlSelf->table_data[0x33U]);
    vlSelf->vrgather__DOT__lut[0x67U] = (vlSelf->table_data[0x33U] 
                                         >> 0x10U);
    vlSelf->vrgather__DOT__lut[0x68U] = (0xffffU & 
                                         vlSelf->table_data[0x34U]);
    vlSelf->vrgather__DOT__lut[0x69U] = (vlSelf->table_data[0x34U] 
                                         >> 0x10U);
    vlSelf->vrgather__DOT__lut[0x6aU] = (0xffffU & 
                                         vlSelf->table_data[0x35U]);
    vlSelf->vrgather__DOT__lut[0x6bU] = (vlSelf->table_data[0x35U] 
                                         >> 0x10U);
    vlSelf->vrgather__DOT__lut[0x6cU] = (0xffffU & 
                                         vlSelf->table_data[0x36U]);
    vlSelf->vrgather__DOT__lut[0x6dU] = (vlSelf->table_data[0x36U] 
                                         >> 0x10U);
    vlSelf->vrgather__DOT__lut[0x6eU] = (0xffffU & 
                                         vlSelf->table_data[0x37U]);
    vlSelf->vrgather__DOT__lut[0x6fU] = (vlSelf->table_data[0x37U] 
                                         >> 0x10U);
    vlSelf->vrgather__DOT__lut[0x70U] = (0xffffU & 
                                         vlSelf->table_data[0x38U]);
    vlSelf->vrgather__DOT__lut[0x71U] = (vlSelf->table_data[0x38U] 
                                         >> 0x10U);
    vlSelf->vrgather__DOT__lut[0x72U] = (0xffffU & 
                                         vlSelf->table_data[0x39U]);
    vlSelf->vrgather__DOT__lut[0x73U] = (vlSelf->table_data[0x39U] 
                                         >> 0x10U);
    vlSelf->vrgather__DOT__lut[0x74U] = (0xffffU & 
                                         vlSelf->table_data[0x3aU]);
    vlSelf->vrgather__DOT__lut[0x75U] = (vlSelf->table_data[0x3aU] 
                                         >> 0x10U);
    vlSelf->vrgather__DOT__lut[0x76U] = (0xffffU & 
                                         vlSelf->table_data[0x3bU]);
    vlSelf->vrgather__DOT__lut[0x77U] = (vlSelf->table_data[0x3bU] 
                                         >> 0x10U);
    vlSelf->vrgather__DOT__lut[0x78U] = (0xffffU & 
                                         vlSelf->table_data[0x3cU]);
    vlSelf->vrgather__DOT__lut[0x79U] = (vlSelf->table_data[0x3cU] 
                                         >> 0x10U);
    vlSelf->vrgather__DOT__lut[0x7aU] = (0xffffU & 
                                         vlSelf->table_data[0x3dU]);
    vlSelf->vrgather__DOT__lut[0x7bU] = (vlSelf->table_data[0x3dU] 
                                         >> 0x10U);
    vlSelf->vrgather__DOT__lut[0x7cU] = (0xffffU & 
                                         vlSelf->table_data[0x3eU]);
    vlSelf->vrgather__DOT__lut[0x7dU] = (vlSelf->table_data[0x3eU] 
                                         >> 0x10U);
    vlSelf->vrgather__DOT__lut[0x7eU] = (0xffffU & 
                                         vlSelf->table_data[0x3fU]);
    vlSelf->vrgather__DOT__lut[0x7fU] = (vlSelf->table_data[0x3fU] 
                                         >> 0x10U);
    __Vtemp_1[1U] = (IData)((((QData)((IData)(((((0x7fU 
                                                  <= 
                                                  (0xffffU 
                                                   & vlSelf->index_data[0x3fU]))
                                                  ? 0U
                                                  : 
                                                 vlSelf->vrgather__DOT__lut
                                                 [(0x7fU 
                                                   & vlSelf->index_data[0x3fU])]) 
                                                << 0x10U) 
                                               | ((0x7fU 
                                                   <= 
                                                   (vlSelf->index_data[0x3eU] 
                                                    >> 0x10U))
                                                   ? 0U
                                                   : 
                                                  vlSelf->vrgather__DOT__lut
                                                  [
                                                  (0x7fU 
                                                   & (vlSelf->index_data[0x3eU] 
                                                      >> 0x10U))])))) 
                              << 0x20U) | (QData)((IData)(
                                                          ((((0x7fU 
                                                              <= 
                                                              (0xffffU 
                                                               & vlSelf->index_data[0x3eU]))
                                                              ? 0U
                                                              : 
                                                             vlSelf->vrgather__DOT__lut
                                                             [
                                                             (0x7fU 
                                                              & vlSelf->index_data[0x3eU])]) 
                                                            << 0x10U) 
                                                           | ((0x7fU 
                                                               <= 
                                                               (vlSelf->index_data[0x3dU] 
                                                                >> 0x10U))
                                                               ? 0U
                                                               : 
                                                              vlSelf->vrgather__DOT__lut
                                                              [
                                                              (0x7fU 
                                                               & (vlSelf->index_data[0x3dU] 
                                                                  >> 0x10U))]))))));
    __Vtemp_1[2U] = (IData)(((((QData)((IData)(((((0x7fU 
                                                   <= 
                                                   (0xffffU 
                                                    & vlSelf->index_data[0x3fU]))
                                                   ? 0U
                                                   : 
                                                  vlSelf->vrgather__DOT__lut
                                                  [
                                                  (0x7fU 
                                                   & vlSelf->index_data[0x3fU])]) 
                                                 << 0x10U) 
                                                | ((0x7fU 
                                                    <= 
                                                    (vlSelf->index_data[0x3eU] 
                                                     >> 0x10U))
                                                    ? 0U
                                                    : 
                                                   vlSelf->vrgather__DOT__lut
                                                   [
                                                   (0x7fU 
                                                    & (vlSelf->index_data[0x3eU] 
                                                       >> 0x10U))])))) 
                               << 0x20U) | (QData)((IData)(
                                                           ((((0x7fU 
                                                               <= 
                                                               (0xffffU 
                                                                & vlSelf->index_data[0x3eU]))
                                                               ? 0U
                                                               : 
                                                              vlSelf->vrgather__DOT__lut
                                                              [
                                                              (0x7fU 
                                                               & vlSelf->index_data[0x3eU])]) 
                                                             << 0x10U) 
                                                            | ((0x7fU 
                                                                <= 
                                                                (vlSelf->index_data[0x3dU] 
                                                                 >> 0x10U))
                                                                ? 0U
                                                                : 
                                                               vlSelf->vrgather__DOT__lut
                                                               [
                                                               (0x7fU 
                                                                & (vlSelf->index_data[0x3dU] 
                                                                   >> 0x10U))]))))) 
                             >> 0x20U));
    vlSelf->res_data[0U] = ((((0x7fU <= (vlSelf->index_data[0U] 
                                         >> 0x10U))
                               ? 0U : vlSelf->vrgather__DOT__lut
                              [(0x7fU & (vlSelf->index_data[0U] 
                                         >> 0x10U))]) 
                             << 0x10U) | ((0x7fU <= 
                                           (0xffffU 
                                            & vlSelf->index_data[0U]))
                                           ? 0U : vlSelf->vrgather__DOT__lut
                                          [(0x7fU & 
                                            vlSelf->index_data[0U])]));
    vlSelf->res_data[1U] = ((((0x7fU <= (0xffffU & 
                                         vlSelf->index_data[1U]))
                               ? 0U : (0xffffU & vlSelf->vrgather__DOT__lut
                                       [(0x7fU & vlSelf->index_data[1U])])) 
                             | (((0x7fU <= (vlSelf->index_data[0U] 
                                            >> 0x10U))
                                  ? 0U : vlSelf->vrgather__DOT__lut
                                 [(0x7fU & (vlSelf->index_data[0U] 
                                            >> 0x10U))]) 
                                >> 0x10U)) | (((0x7fU 
                                                <= 
                                                (vlSelf->index_data[1U] 
                                                 >> 0x10U))
                                                ? 0U
                                                : vlSelf->vrgather__DOT__lut
                                               [(0x7fU 
                                                 & (vlSelf->index_data[1U] 
                                                    >> 0x10U))]) 
                                              << 0x10U));
    vlSelf->res_data[2U] = ((((0x7fU <= (0xffffU & 
                                         vlSelf->index_data[2U]))
                               ? 0U : (0xffffU & vlSelf->vrgather__DOT__lut
                                       [(0x7fU & vlSelf->index_data[2U])])) 
                             | (((0x7fU <= (vlSelf->index_data[1U] 
                                            >> 0x10U))
                                  ? 0U : vlSelf->vrgather__DOT__lut
                                 [(0x7fU & (vlSelf->index_data[1U] 
                                            >> 0x10U))]) 
                                >> 0x10U)) | (((0x7fU 
                                                <= 
                                                (vlSelf->index_data[2U] 
                                                 >> 0x10U))
                                                ? 0U
                                                : vlSelf->vrgather__DOT__lut
                                               [(0x7fU 
                                                 & (vlSelf->index_data[2U] 
                                                    >> 0x10U))]) 
                                              << 0x10U));
    vlSelf->res_data[3U] = ((((0x7fU <= (0xffffU & 
                                         vlSelf->index_data[3U]))
                               ? 0U : (0xffffU & vlSelf->vrgather__DOT__lut
                                       [(0x7fU & vlSelf->index_data[3U])])) 
                             | (((0x7fU <= (vlSelf->index_data[2U] 
                                            >> 0x10U))
                                  ? 0U : vlSelf->vrgather__DOT__lut
                                 [(0x7fU & (vlSelf->index_data[2U] 
                                            >> 0x10U))]) 
                                >> 0x10U)) | (((0x7fU 
                                                <= 
                                                (vlSelf->index_data[3U] 
                                                 >> 0x10U))
                                                ? 0U
                                                : vlSelf->vrgather__DOT__lut
                                               [(0x7fU 
                                                 & (vlSelf->index_data[3U] 
                                                    >> 0x10U))]) 
                                              << 0x10U));
    vlSelf->res_data[4U] = ((((0x7fU <= (0xffffU & 
                                         vlSelf->index_data[4U]))
                               ? 0U : (0xffffU & vlSelf->vrgather__DOT__lut
                                       [(0x7fU & vlSelf->index_data[4U])])) 
                             | (((0x7fU <= (vlSelf->index_data[3U] 
                                            >> 0x10U))
                                  ? 0U : vlSelf->vrgather__DOT__lut
                                 [(0x7fU & (vlSelf->index_data[3U] 
                                            >> 0x10U))]) 
                                >> 0x10U)) | (((0x7fU 
                                                <= 
                                                (vlSelf->index_data[4U] 
                                                 >> 0x10U))
                                                ? 0U
                                                : vlSelf->vrgather__DOT__lut
                                               [(0x7fU 
                                                 & (vlSelf->index_data[4U] 
                                                    >> 0x10U))]) 
                                              << 0x10U));
    vlSelf->res_data[5U] = ((((0x7fU <= (0xffffU & 
                                         vlSelf->index_data[5U]))
                               ? 0U : (0xffffU & vlSelf->vrgather__DOT__lut
                                       [(0x7fU & vlSelf->index_data[5U])])) 
                             | (((0x7fU <= (vlSelf->index_data[4U] 
                                            >> 0x10U))
                                  ? 0U : vlSelf->vrgather__DOT__lut
                                 [(0x7fU & (vlSelf->index_data[4U] 
                                            >> 0x10U))]) 
                                >> 0x10U)) | (((0x7fU 
                                                <= 
                                                (vlSelf->index_data[5U] 
                                                 >> 0x10U))
                                                ? 0U
                                                : vlSelf->vrgather__DOT__lut
                                               [(0x7fU 
                                                 & (vlSelf->index_data[5U] 
                                                    >> 0x10U))]) 
                                              << 0x10U));
    vlSelf->res_data[6U] = ((((0x7fU <= (0xffffU & 
                                         vlSelf->index_data[6U]))
                               ? 0U : (0xffffU & vlSelf->vrgather__DOT__lut
                                       [(0x7fU & vlSelf->index_data[6U])])) 
                             | (((0x7fU <= (vlSelf->index_data[5U] 
                                            >> 0x10U))
                                  ? 0U : vlSelf->vrgather__DOT__lut
                                 [(0x7fU & (vlSelf->index_data[5U] 
                                            >> 0x10U))]) 
                                >> 0x10U)) | (((0x7fU 
                                                <= 
                                                (vlSelf->index_data[6U] 
                                                 >> 0x10U))
                                                ? 0U
                                                : vlSelf->vrgather__DOT__lut
                                               [(0x7fU 
                                                 & (vlSelf->index_data[6U] 
                                                    >> 0x10U))]) 
                                              << 0x10U));
    vlSelf->res_data[7U] = ((((0x7fU <= (0xffffU & 
                                         vlSelf->index_data[7U]))
                               ? 0U : (0xffffU & vlSelf->vrgather__DOT__lut
                                       [(0x7fU & vlSelf->index_data[7U])])) 
                             | (((0x7fU <= (vlSelf->index_data[6U] 
                                            >> 0x10U))
                                  ? 0U : vlSelf->vrgather__DOT__lut
                                 [(0x7fU & (vlSelf->index_data[6U] 
                                            >> 0x10U))]) 
                                >> 0x10U)) | (((0x7fU 
                                                <= 
                                                (vlSelf->index_data[7U] 
                                                 >> 0x10U))
                                                ? 0U
                                                : vlSelf->vrgather__DOT__lut
                                               [(0x7fU 
                                                 & (vlSelf->index_data[7U] 
                                                    >> 0x10U))]) 
                                              << 0x10U));
    vlSelf->res_data[8U] = ((((0x7fU <= (0xffffU & 
                                         vlSelf->index_data[8U]))
                               ? 0U : (0xffffU & vlSelf->vrgather__DOT__lut
                                       [(0x7fU & vlSelf->index_data[8U])])) 
                             | (((0x7fU <= (vlSelf->index_data[7U] 
                                            >> 0x10U))
                                  ? 0U : vlSelf->vrgather__DOT__lut
                                 [(0x7fU & (vlSelf->index_data[7U] 
                                            >> 0x10U))]) 
                                >> 0x10U)) | (((0x7fU 
                                                <= 
                                                (vlSelf->index_data[8U] 
                                                 >> 0x10U))
                                                ? 0U
                                                : vlSelf->vrgather__DOT__lut
                                               [(0x7fU 
                                                 & (vlSelf->index_data[8U] 
                                                    >> 0x10U))]) 
                                              << 0x10U));
    vlSelf->res_data[9U] = ((((0x7fU <= (0xffffU & 
                                         vlSelf->index_data[9U]))
                               ? 0U : (0xffffU & vlSelf->vrgather__DOT__lut
                                       [(0x7fU & vlSelf->index_data[9U])])) 
                             | (((0x7fU <= (vlSelf->index_data[8U] 
                                            >> 0x10U))
                                  ? 0U : vlSelf->vrgather__DOT__lut
                                 [(0x7fU & (vlSelf->index_data[8U] 
                                            >> 0x10U))]) 
                                >> 0x10U)) | (((0x7fU 
                                                <= 
                                                (vlSelf->index_data[9U] 
                                                 >> 0x10U))
                                                ? 0U
                                                : vlSelf->vrgather__DOT__lut
                                               [(0x7fU 
                                                 & (vlSelf->index_data[9U] 
                                                    >> 0x10U))]) 
                                              << 0x10U));
    vlSelf->res_data[0xaU] = ((((0x7fU <= (0xffffU 
                                           & vlSelf->index_data[0xaU]))
                                 ? 0U : (0xffffU & 
                                         vlSelf->vrgather__DOT__lut
                                         [(0x7fU & 
                                           vlSelf->index_data[0xaU])])) 
                               | (((0x7fU <= (vlSelf->index_data[9U] 
                                              >> 0x10U))
                                    ? 0U : vlSelf->vrgather__DOT__lut
                                   [(0x7fU & (vlSelf->index_data[9U] 
                                              >> 0x10U))]) 
                                  >> 0x10U)) | (((0x7fU 
                                                  <= 
                                                  (vlSelf->index_data[0xaU] 
                                                   >> 0x10U))
                                                  ? 0U
                                                  : 
                                                 vlSelf->vrgather__DOT__lut
                                                 [(0x7fU 
                                                   & (vlSelf->index_data[0xaU] 
                                                      >> 0x10U))]) 
                                                << 0x10U));
    vlSelf->res_data[0xbU] = ((((0x7fU <= (0xffffU 
                                           & vlSelf->index_data[0xbU]))
                                 ? 0U : (0xffffU & 
                                         vlSelf->vrgather__DOT__lut
                                         [(0x7fU & 
                                           vlSelf->index_data[0xbU])])) 
                               | (((0x7fU <= (vlSelf->index_data[0xaU] 
                                              >> 0x10U))
                                    ? 0U : vlSelf->vrgather__DOT__lut
                                   [(0x7fU & (vlSelf->index_data[0xaU] 
                                              >> 0x10U))]) 
                                  >> 0x10U)) | (((0x7fU 
                                                  <= 
                                                  (vlSelf->index_data[0xbU] 
                                                   >> 0x10U))
                                                  ? 0U
                                                  : 
                                                 vlSelf->vrgather__DOT__lut
                                                 [(0x7fU 
                                                   & (vlSelf->index_data[0xbU] 
                                                      >> 0x10U))]) 
                                                << 0x10U));
    vlSelf->res_data[0xcU] = ((((0x7fU <= (0xffffU 
                                           & vlSelf->index_data[0xcU]))
                                 ? 0U : (0xffffU & 
                                         vlSelf->vrgather__DOT__lut
                                         [(0x7fU & 
                                           vlSelf->index_data[0xcU])])) 
                               | (((0x7fU <= (vlSelf->index_data[0xbU] 
                                              >> 0x10U))
                                    ? 0U : vlSelf->vrgather__DOT__lut
                                   [(0x7fU & (vlSelf->index_data[0xbU] 
                                              >> 0x10U))]) 
                                  >> 0x10U)) | (((0x7fU 
                                                  <= 
                                                  (vlSelf->index_data[0xcU] 
                                                   >> 0x10U))
                                                  ? 0U
                                                  : 
                                                 vlSelf->vrgather__DOT__lut
                                                 [(0x7fU 
                                                   & (vlSelf->index_data[0xcU] 
                                                      >> 0x10U))]) 
                                                << 0x10U));
    vlSelf->res_data[0xdU] = ((((0x7fU <= (0xffffU 
                                           & vlSelf->index_data[0xdU]))
                                 ? 0U : (0xffffU & 
                                         vlSelf->vrgather__DOT__lut
                                         [(0x7fU & 
                                           vlSelf->index_data[0xdU])])) 
                               | (((0x7fU <= (vlSelf->index_data[0xcU] 
                                              >> 0x10U))
                                    ? 0U : vlSelf->vrgather__DOT__lut
                                   [(0x7fU & (vlSelf->index_data[0xcU] 
                                              >> 0x10U))]) 
                                  >> 0x10U)) | (((0x7fU 
                                                  <= 
                                                  (vlSelf->index_data[0xdU] 
                                                   >> 0x10U))
                                                  ? 0U
                                                  : 
                                                 vlSelf->vrgather__DOT__lut
                                                 [(0x7fU 
                                                   & (vlSelf->index_data[0xdU] 
                                                      >> 0x10U))]) 
                                                << 0x10U));
    vlSelf->res_data[0xeU] = ((((0x7fU <= (0xffffU 
                                           & vlSelf->index_data[0xeU]))
                                 ? 0U : (0xffffU & 
                                         vlSelf->vrgather__DOT__lut
                                         [(0x7fU & 
                                           vlSelf->index_data[0xeU])])) 
                               | (((0x7fU <= (vlSelf->index_data[0xdU] 
                                              >> 0x10U))
                                    ? 0U : vlSelf->vrgather__DOT__lut
                                   [(0x7fU & (vlSelf->index_data[0xdU] 
                                              >> 0x10U))]) 
                                  >> 0x10U)) | (((0x7fU 
                                                  <= 
                                                  (vlSelf->index_data[0xeU] 
                                                   >> 0x10U))
                                                  ? 0U
                                                  : 
                                                 vlSelf->vrgather__DOT__lut
                                                 [(0x7fU 
                                                   & (vlSelf->index_data[0xeU] 
                                                      >> 0x10U))]) 
                                                << 0x10U));
    vlSelf->res_data[0xfU] = ((((0x7fU <= (0xffffU 
                                           & vlSelf->index_data[0xfU]))
                                 ? 0U : (0xffffU & 
                                         vlSelf->vrgather__DOT__lut
                                         [(0x7fU & 
                                           vlSelf->index_data[0xfU])])) 
                               | (((0x7fU <= (vlSelf->index_data[0xeU] 
                                              >> 0x10U))
                                    ? 0U : vlSelf->vrgather__DOT__lut
                                   [(0x7fU & (vlSelf->index_data[0xeU] 
                                              >> 0x10U))]) 
                                  >> 0x10U)) | (((0x7fU 
                                                  <= 
                                                  (vlSelf->index_data[0xfU] 
                                                   >> 0x10U))
                                                  ? 0U
                                                  : 
                                                 vlSelf->vrgather__DOT__lut
                                                 [(0x7fU 
                                                   & (vlSelf->index_data[0xfU] 
                                                      >> 0x10U))]) 
                                                << 0x10U));
    vlSelf->res_data[0x10U] = ((((0x7fU <= (0xffffU 
                                            & vlSelf->index_data[0x10U]))
                                  ? 0U : (0xffffU & 
                                          vlSelf->vrgather__DOT__lut
                                          [(0x7fU & 
                                            vlSelf->index_data[0x10U])])) 
                                | (((0x7fU <= (vlSelf->index_data[0xfU] 
                                               >> 0x10U))
                                     ? 0U : vlSelf->vrgather__DOT__lut
                                    [(0x7fU & (vlSelf->index_data[0xfU] 
                                               >> 0x10U))]) 
                                   >> 0x10U)) | (((0x7fU 
                                                   <= 
                                                   (vlSelf->index_data[0x10U] 
                                                    >> 0x10U))
                                                   ? 0U
                                                   : 
                                                  vlSelf->vrgather__DOT__lut
                                                  [
                                                  (0x7fU 
                                                   & (vlSelf->index_data[0x10U] 
                                                      >> 0x10U))]) 
                                                 << 0x10U));
    vlSelf->res_data[0x11U] = ((((0x7fU <= (0xffffU 
                                            & vlSelf->index_data[0x11U]))
                                  ? 0U : (0xffffU & 
                                          vlSelf->vrgather__DOT__lut
                                          [(0x7fU & 
                                            vlSelf->index_data[0x11U])])) 
                                | (((0x7fU <= (vlSelf->index_data[0x10U] 
                                               >> 0x10U))
                                     ? 0U : vlSelf->vrgather__DOT__lut
                                    [(0x7fU & (vlSelf->index_data[0x10U] 
                                               >> 0x10U))]) 
                                   >> 0x10U)) | (((0x7fU 
                                                   <= 
                                                   (vlSelf->index_data[0x11U] 
                                                    >> 0x10U))
                                                   ? 0U
                                                   : 
                                                  vlSelf->vrgather__DOT__lut
                                                  [
                                                  (0x7fU 
                                                   & (vlSelf->index_data[0x11U] 
                                                      >> 0x10U))]) 
                                                 << 0x10U));
    vlSelf->res_data[0x12U] = ((((0x7fU <= (0xffffU 
                                            & vlSelf->index_data[0x12U]))
                                  ? 0U : (0xffffU & 
                                          vlSelf->vrgather__DOT__lut
                                          [(0x7fU & 
                                            vlSelf->index_data[0x12U])])) 
                                | (((0x7fU <= (vlSelf->index_data[0x11U] 
                                               >> 0x10U))
                                     ? 0U : vlSelf->vrgather__DOT__lut
                                    [(0x7fU & (vlSelf->index_data[0x11U] 
                                               >> 0x10U))]) 
                                   >> 0x10U)) | (((0x7fU 
                                                   <= 
                                                   (vlSelf->index_data[0x12U] 
                                                    >> 0x10U))
                                                   ? 0U
                                                   : 
                                                  vlSelf->vrgather__DOT__lut
                                                  [
                                                  (0x7fU 
                                                   & (vlSelf->index_data[0x12U] 
                                                      >> 0x10U))]) 
                                                 << 0x10U));
    vlSelf->res_data[0x13U] = ((((0x7fU <= (0xffffU 
                                            & vlSelf->index_data[0x13U]))
                                  ? 0U : (0xffffU & 
                                          vlSelf->vrgather__DOT__lut
                                          [(0x7fU & 
                                            vlSelf->index_data[0x13U])])) 
                                | (((0x7fU <= (vlSelf->index_data[0x12U] 
                                               >> 0x10U))
                                     ? 0U : vlSelf->vrgather__DOT__lut
                                    [(0x7fU & (vlSelf->index_data[0x12U] 
                                               >> 0x10U))]) 
                                   >> 0x10U)) | (((0x7fU 
                                                   <= 
                                                   (vlSelf->index_data[0x13U] 
                                                    >> 0x10U))
                                                   ? 0U
                                                   : 
                                                  vlSelf->vrgather__DOT__lut
                                                  [
                                                  (0x7fU 
                                                   & (vlSelf->index_data[0x13U] 
                                                      >> 0x10U))]) 
                                                 << 0x10U));
    vlSelf->res_data[0x14U] = ((((0x7fU <= (0xffffU 
                                            & vlSelf->index_data[0x14U]))
                                  ? 0U : (0xffffU & 
                                          vlSelf->vrgather__DOT__lut
                                          [(0x7fU & 
                                            vlSelf->index_data[0x14U])])) 
                                | (((0x7fU <= (vlSelf->index_data[0x13U] 
                                               >> 0x10U))
                                     ? 0U : vlSelf->vrgather__DOT__lut
                                    [(0x7fU & (vlSelf->index_data[0x13U] 
                                               >> 0x10U))]) 
                                   >> 0x10U)) | (((0x7fU 
                                                   <= 
                                                   (vlSelf->index_data[0x14U] 
                                                    >> 0x10U))
                                                   ? 0U
                                                   : 
                                                  vlSelf->vrgather__DOT__lut
                                                  [
                                                  (0x7fU 
                                                   & (vlSelf->index_data[0x14U] 
                                                      >> 0x10U))]) 
                                                 << 0x10U));
    vlSelf->res_data[0x15U] = ((((0x7fU <= (0xffffU 
                                            & vlSelf->index_data[0x15U]))
                                  ? 0U : (0xffffU & 
                                          vlSelf->vrgather__DOT__lut
                                          [(0x7fU & 
                                            vlSelf->index_data[0x15U])])) 
                                | (((0x7fU <= (vlSelf->index_data[0x14U] 
                                               >> 0x10U))
                                     ? 0U : vlSelf->vrgather__DOT__lut
                                    [(0x7fU & (vlSelf->index_data[0x14U] 
                                               >> 0x10U))]) 
                                   >> 0x10U)) | (((0x7fU 
                                                   <= 
                                                   (vlSelf->index_data[0x15U] 
                                                    >> 0x10U))
                                                   ? 0U
                                                   : 
                                                  vlSelf->vrgather__DOT__lut
                                                  [
                                                  (0x7fU 
                                                   & (vlSelf->index_data[0x15U] 
                                                      >> 0x10U))]) 
                                                 << 0x10U));
    vlSelf->res_data[0x16U] = ((((0x7fU <= (0xffffU 
                                            & vlSelf->index_data[0x16U]))
                                  ? 0U : (0xffffU & 
                                          vlSelf->vrgather__DOT__lut
                                          [(0x7fU & 
                                            vlSelf->index_data[0x16U])])) 
                                | (((0x7fU <= (vlSelf->index_data[0x15U] 
                                               >> 0x10U))
                                     ? 0U : vlSelf->vrgather__DOT__lut
                                    [(0x7fU & (vlSelf->index_data[0x15U] 
                                               >> 0x10U))]) 
                                   >> 0x10U)) | (((0x7fU 
                                                   <= 
                                                   (vlSelf->index_data[0x16U] 
                                                    >> 0x10U))
                                                   ? 0U
                                                   : 
                                                  vlSelf->vrgather__DOT__lut
                                                  [
                                                  (0x7fU 
                                                   & (vlSelf->index_data[0x16U] 
                                                      >> 0x10U))]) 
                                                 << 0x10U));
    vlSelf->res_data[0x17U] = ((((0x7fU <= (0xffffU 
                                            & vlSelf->index_data[0x17U]))
                                  ? 0U : (0xffffU & 
                                          vlSelf->vrgather__DOT__lut
                                          [(0x7fU & 
                                            vlSelf->index_data[0x17U])])) 
                                | (((0x7fU <= (vlSelf->index_data[0x16U] 
                                               >> 0x10U))
                                     ? 0U : vlSelf->vrgather__DOT__lut
                                    [(0x7fU & (vlSelf->index_data[0x16U] 
                                               >> 0x10U))]) 
                                   >> 0x10U)) | (((0x7fU 
                                                   <= 
                                                   (vlSelf->index_data[0x17U] 
                                                    >> 0x10U))
                                                   ? 0U
                                                   : 
                                                  vlSelf->vrgather__DOT__lut
                                                  [
                                                  (0x7fU 
                                                   & (vlSelf->index_data[0x17U] 
                                                      >> 0x10U))]) 
                                                 << 0x10U));
    vlSelf->res_data[0x18U] = ((((0x7fU <= (0xffffU 
                                            & vlSelf->index_data[0x18U]))
                                  ? 0U : (0xffffU & 
                                          vlSelf->vrgather__DOT__lut
                                          [(0x7fU & 
                                            vlSelf->index_data[0x18U])])) 
                                | (((0x7fU <= (vlSelf->index_data[0x17U] 
                                               >> 0x10U))
                                     ? 0U : vlSelf->vrgather__DOT__lut
                                    [(0x7fU & (vlSelf->index_data[0x17U] 
                                               >> 0x10U))]) 
                                   >> 0x10U)) | (((0x7fU 
                                                   <= 
                                                   (vlSelf->index_data[0x18U] 
                                                    >> 0x10U))
                                                   ? 0U
                                                   : 
                                                  vlSelf->vrgather__DOT__lut
                                                  [
                                                  (0x7fU 
                                                   & (vlSelf->index_data[0x18U] 
                                                      >> 0x10U))]) 
                                                 << 0x10U));
    vlSelf->res_data[0x19U] = ((((0x7fU <= (0xffffU 
                                            & vlSelf->index_data[0x19U]))
                                  ? 0U : (0xffffU & 
                                          vlSelf->vrgather__DOT__lut
                                          [(0x7fU & 
                                            vlSelf->index_data[0x19U])])) 
                                | (((0x7fU <= (vlSelf->index_data[0x18U] 
                                               >> 0x10U))
                                     ? 0U : vlSelf->vrgather__DOT__lut
                                    [(0x7fU & (vlSelf->index_data[0x18U] 
                                               >> 0x10U))]) 
                                   >> 0x10U)) | (((0x7fU 
                                                   <= 
                                                   (vlSelf->index_data[0x19U] 
                                                    >> 0x10U))
                                                   ? 0U
                                                   : 
                                                  vlSelf->vrgather__DOT__lut
                                                  [
                                                  (0x7fU 
                                                   & (vlSelf->index_data[0x19U] 
                                                      >> 0x10U))]) 
                                                 << 0x10U));
    vlSelf->res_data[0x1aU] = ((((0x7fU <= (0xffffU 
                                            & vlSelf->index_data[0x1aU]))
                                  ? 0U : (0xffffU & 
                                          vlSelf->vrgather__DOT__lut
                                          [(0x7fU & 
                                            vlSelf->index_data[0x1aU])])) 
                                | (((0x7fU <= (vlSelf->index_data[0x19U] 
                                               >> 0x10U))
                                     ? 0U : vlSelf->vrgather__DOT__lut
                                    [(0x7fU & (vlSelf->index_data[0x19U] 
                                               >> 0x10U))]) 
                                   >> 0x10U)) | (((0x7fU 
                                                   <= 
                                                   (vlSelf->index_data[0x1aU] 
                                                    >> 0x10U))
                                                   ? 0U
                                                   : 
                                                  vlSelf->vrgather__DOT__lut
                                                  [
                                                  (0x7fU 
                                                   & (vlSelf->index_data[0x1aU] 
                                                      >> 0x10U))]) 
                                                 << 0x10U));
    vlSelf->res_data[0x1bU] = ((((0x7fU <= (0xffffU 
                                            & vlSelf->index_data[0x1bU]))
                                  ? 0U : (0xffffU & 
                                          vlSelf->vrgather__DOT__lut
                                          [(0x7fU & 
                                            vlSelf->index_data[0x1bU])])) 
                                | (((0x7fU <= (vlSelf->index_data[0x1aU] 
                                               >> 0x10U))
                                     ? 0U : vlSelf->vrgather__DOT__lut
                                    [(0x7fU & (vlSelf->index_data[0x1aU] 
                                               >> 0x10U))]) 
                                   >> 0x10U)) | (((0x7fU 
                                                   <= 
                                                   (vlSelf->index_data[0x1bU] 
                                                    >> 0x10U))
                                                   ? 0U
                                                   : 
                                                  vlSelf->vrgather__DOT__lut
                                                  [
                                                  (0x7fU 
                                                   & (vlSelf->index_data[0x1bU] 
                                                      >> 0x10U))]) 
                                                 << 0x10U));
    vlSelf->res_data[0x1cU] = ((((0x7fU <= (0xffffU 
                                            & vlSelf->index_data[0x1cU]))
                                  ? 0U : (0xffffU & 
                                          vlSelf->vrgather__DOT__lut
                                          [(0x7fU & 
                                            vlSelf->index_data[0x1cU])])) 
                                | (((0x7fU <= (vlSelf->index_data[0x1bU] 
                                               >> 0x10U))
                                     ? 0U : vlSelf->vrgather__DOT__lut
                                    [(0x7fU & (vlSelf->index_data[0x1bU] 
                                               >> 0x10U))]) 
                                   >> 0x10U)) | (((0x7fU 
                                                   <= 
                                                   (vlSelf->index_data[0x1cU] 
                                                    >> 0x10U))
                                                   ? 0U
                                                   : 
                                                  vlSelf->vrgather__DOT__lut
                                                  [
                                                  (0x7fU 
                                                   & (vlSelf->index_data[0x1cU] 
                                                      >> 0x10U))]) 
                                                 << 0x10U));
    vlSelf->res_data[0x1dU] = ((((0x7fU <= (0xffffU 
                                            & vlSelf->index_data[0x1dU]))
                                  ? 0U : (0xffffU & 
                                          vlSelf->vrgather__DOT__lut
                                          [(0x7fU & 
                                            vlSelf->index_data[0x1dU])])) 
                                | (((0x7fU <= (vlSelf->index_data[0x1cU] 
                                               >> 0x10U))
                                     ? 0U : vlSelf->vrgather__DOT__lut
                                    [(0x7fU & (vlSelf->index_data[0x1cU] 
                                               >> 0x10U))]) 
                                   >> 0x10U)) | (((0x7fU 
                                                   <= 
                                                   (vlSelf->index_data[0x1dU] 
                                                    >> 0x10U))
                                                   ? 0U
                                                   : 
                                                  vlSelf->vrgather__DOT__lut
                                                  [
                                                  (0x7fU 
                                                   & (vlSelf->index_data[0x1dU] 
                                                      >> 0x10U))]) 
                                                 << 0x10U));
    vlSelf->res_data[0x1eU] = ((((0x7fU <= (0xffffU 
                                            & vlSelf->index_data[0x1eU]))
                                  ? 0U : (0xffffU & 
                                          vlSelf->vrgather__DOT__lut
                                          [(0x7fU & 
                                            vlSelf->index_data[0x1eU])])) 
                                | (((0x7fU <= (vlSelf->index_data[0x1dU] 
                                               >> 0x10U))
                                     ? 0U : vlSelf->vrgather__DOT__lut
                                    [(0x7fU & (vlSelf->index_data[0x1dU] 
                                               >> 0x10U))]) 
                                   >> 0x10U)) | (((0x7fU 
                                                   <= 
                                                   (vlSelf->index_data[0x1eU] 
                                                    >> 0x10U))
                                                   ? 0U
                                                   : 
                                                  vlSelf->vrgather__DOT__lut
                                                  [
                                                  (0x7fU 
                                                   & (vlSelf->index_data[0x1eU] 
                                                      >> 0x10U))]) 
                                                 << 0x10U));
    vlSelf->res_data[0x1fU] = ((((0x7fU <= (0xffffU 
                                            & vlSelf->index_data[0x1fU]))
                                  ? 0U : (0xffffU & 
                                          vlSelf->vrgather__DOT__lut
                                          [(0x7fU & 
                                            vlSelf->index_data[0x1fU])])) 
                                | (((0x7fU <= (vlSelf->index_data[0x1eU] 
                                               >> 0x10U))
                                     ? 0U : vlSelf->vrgather__DOT__lut
                                    [(0x7fU & (vlSelf->index_data[0x1eU] 
                                               >> 0x10U))]) 
                                   >> 0x10U)) | (((0x7fU 
                                                   <= 
                                                   (vlSelf->index_data[0x1fU] 
                                                    >> 0x10U))
                                                   ? 0U
                                                   : 
                                                  vlSelf->vrgather__DOT__lut
                                                  [
                                                  (0x7fU 
                                                   & (vlSelf->index_data[0x1fU] 
                                                      >> 0x10U))]) 
                                                 << 0x10U));
    vlSelf->res_data[0x20U] = ((((0x7fU <= (0xffffU 
                                            & vlSelf->index_data[0x20U]))
                                  ? 0U : (0xffffU & 
                                          vlSelf->vrgather__DOT__lut
                                          [(0x7fU & 
                                            vlSelf->index_data[0x20U])])) 
                                | (((0x7fU <= (vlSelf->index_data[0x1fU] 
                                               >> 0x10U))
                                     ? 0U : vlSelf->vrgather__DOT__lut
                                    [(0x7fU & (vlSelf->index_data[0x1fU] 
                                               >> 0x10U))]) 
                                   >> 0x10U)) | (((0x7fU 
                                                   <= 
                                                   (vlSelf->index_data[0x20U] 
                                                    >> 0x10U))
                                                   ? 0U
                                                   : 
                                                  vlSelf->vrgather__DOT__lut
                                                  [
                                                  (0x7fU 
                                                   & (vlSelf->index_data[0x20U] 
                                                      >> 0x10U))]) 
                                                 << 0x10U));
    vlSelf->res_data[0x21U] = ((((0x7fU <= (0xffffU 
                                            & vlSelf->index_data[0x21U]))
                                  ? 0U : (0xffffU & 
                                          vlSelf->vrgather__DOT__lut
                                          [(0x7fU & 
                                            vlSelf->index_data[0x21U])])) 
                                | (((0x7fU <= (vlSelf->index_data[0x20U] 
                                               >> 0x10U))
                                     ? 0U : vlSelf->vrgather__DOT__lut
                                    [(0x7fU & (vlSelf->index_data[0x20U] 
                                               >> 0x10U))]) 
                                   >> 0x10U)) | (((0x7fU 
                                                   <= 
                                                   (vlSelf->index_data[0x21U] 
                                                    >> 0x10U))
                                                   ? 0U
                                                   : 
                                                  vlSelf->vrgather__DOT__lut
                                                  [
                                                  (0x7fU 
                                                   & (vlSelf->index_data[0x21U] 
                                                      >> 0x10U))]) 
                                                 << 0x10U));
    vlSelf->res_data[0x22U] = ((((0x7fU <= (0xffffU 
                                            & vlSelf->index_data[0x22U]))
                                  ? 0U : (0xffffU & 
                                          vlSelf->vrgather__DOT__lut
                                          [(0x7fU & 
                                            vlSelf->index_data[0x22U])])) 
                                | (((0x7fU <= (vlSelf->index_data[0x21U] 
                                               >> 0x10U))
                                     ? 0U : vlSelf->vrgather__DOT__lut
                                    [(0x7fU & (vlSelf->index_data[0x21U] 
                                               >> 0x10U))]) 
                                   >> 0x10U)) | (((0x7fU 
                                                   <= 
                                                   (vlSelf->index_data[0x22U] 
                                                    >> 0x10U))
                                                   ? 0U
                                                   : 
                                                  vlSelf->vrgather__DOT__lut
                                                  [
                                                  (0x7fU 
                                                   & (vlSelf->index_data[0x22U] 
                                                      >> 0x10U))]) 
                                                 << 0x10U));
    vlSelf->res_data[0x23U] = ((((0x7fU <= (0xffffU 
                                            & vlSelf->index_data[0x23U]))
                                  ? 0U : (0xffffU & 
                                          vlSelf->vrgather__DOT__lut
                                          [(0x7fU & 
                                            vlSelf->index_data[0x23U])])) 
                                | (((0x7fU <= (vlSelf->index_data[0x22U] 
                                               >> 0x10U))
                                     ? 0U : vlSelf->vrgather__DOT__lut
                                    [(0x7fU & (vlSelf->index_data[0x22U] 
                                               >> 0x10U))]) 
                                   >> 0x10U)) | (((0x7fU 
                                                   <= 
                                                   (vlSelf->index_data[0x23U] 
                                                    >> 0x10U))
                                                   ? 0U
                                                   : 
                                                  vlSelf->vrgather__DOT__lut
                                                  [
                                                  (0x7fU 
                                                   & (vlSelf->index_data[0x23U] 
                                                      >> 0x10U))]) 
                                                 << 0x10U));
    vlSelf->res_data[0x24U] = ((((0x7fU <= (0xffffU 
                                            & vlSelf->index_data[0x24U]))
                                  ? 0U : (0xffffU & 
                                          vlSelf->vrgather__DOT__lut
                                          [(0x7fU & 
                                            vlSelf->index_data[0x24U])])) 
                                | (((0x7fU <= (vlSelf->index_data[0x23U] 
                                               >> 0x10U))
                                     ? 0U : vlSelf->vrgather__DOT__lut
                                    [(0x7fU & (vlSelf->index_data[0x23U] 
                                               >> 0x10U))]) 
                                   >> 0x10U)) | (((0x7fU 
                                                   <= 
                                                   (vlSelf->index_data[0x24U] 
                                                    >> 0x10U))
                                                   ? 0U
                                                   : 
                                                  vlSelf->vrgather__DOT__lut
                                                  [
                                                  (0x7fU 
                                                   & (vlSelf->index_data[0x24U] 
                                                      >> 0x10U))]) 
                                                 << 0x10U));
    vlSelf->res_data[0x25U] = ((((0x7fU <= (0xffffU 
                                            & vlSelf->index_data[0x25U]))
                                  ? 0U : (0xffffU & 
                                          vlSelf->vrgather__DOT__lut
                                          [(0x7fU & 
                                            vlSelf->index_data[0x25U])])) 
                                | (((0x7fU <= (vlSelf->index_data[0x24U] 
                                               >> 0x10U))
                                     ? 0U : vlSelf->vrgather__DOT__lut
                                    [(0x7fU & (vlSelf->index_data[0x24U] 
                                               >> 0x10U))]) 
                                   >> 0x10U)) | (((0x7fU 
                                                   <= 
                                                   (vlSelf->index_data[0x25U] 
                                                    >> 0x10U))
                                                   ? 0U
                                                   : 
                                                  vlSelf->vrgather__DOT__lut
                                                  [
                                                  (0x7fU 
                                                   & (vlSelf->index_data[0x25U] 
                                                      >> 0x10U))]) 
                                                 << 0x10U));
    vlSelf->res_data[0x26U] = ((((0x7fU <= (0xffffU 
                                            & vlSelf->index_data[0x26U]))
                                  ? 0U : (0xffffU & 
                                          vlSelf->vrgather__DOT__lut
                                          [(0x7fU & 
                                            vlSelf->index_data[0x26U])])) 
                                | (((0x7fU <= (vlSelf->index_data[0x25U] 
                                               >> 0x10U))
                                     ? 0U : vlSelf->vrgather__DOT__lut
                                    [(0x7fU & (vlSelf->index_data[0x25U] 
                                               >> 0x10U))]) 
                                   >> 0x10U)) | (((0x7fU 
                                                   <= 
                                                   (vlSelf->index_data[0x26U] 
                                                    >> 0x10U))
                                                   ? 0U
                                                   : 
                                                  vlSelf->vrgather__DOT__lut
                                                  [
                                                  (0x7fU 
                                                   & (vlSelf->index_data[0x26U] 
                                                      >> 0x10U))]) 
                                                 << 0x10U));
    vlSelf->res_data[0x27U] = ((((0x7fU <= (0xffffU 
                                            & vlSelf->index_data[0x27U]))
                                  ? 0U : (0xffffU & 
                                          vlSelf->vrgather__DOT__lut
                                          [(0x7fU & 
                                            vlSelf->index_data[0x27U])])) 
                                | (((0x7fU <= (vlSelf->index_data[0x26U] 
                                               >> 0x10U))
                                     ? 0U : vlSelf->vrgather__DOT__lut
                                    [(0x7fU & (vlSelf->index_data[0x26U] 
                                               >> 0x10U))]) 
                                   >> 0x10U)) | (((0x7fU 
                                                   <= 
                                                   (vlSelf->index_data[0x27U] 
                                                    >> 0x10U))
                                                   ? 0U
                                                   : 
                                                  vlSelf->vrgather__DOT__lut
                                                  [
                                                  (0x7fU 
                                                   & (vlSelf->index_data[0x27U] 
                                                      >> 0x10U))]) 
                                                 << 0x10U));
    vlSelf->res_data[0x28U] = ((((0x7fU <= (0xffffU 
                                            & vlSelf->index_data[0x28U]))
                                  ? 0U : (0xffffU & 
                                          vlSelf->vrgather__DOT__lut
                                          [(0x7fU & 
                                            vlSelf->index_data[0x28U])])) 
                                | (((0x7fU <= (vlSelf->index_data[0x27U] 
                                               >> 0x10U))
                                     ? 0U : vlSelf->vrgather__DOT__lut
                                    [(0x7fU & (vlSelf->index_data[0x27U] 
                                               >> 0x10U))]) 
                                   >> 0x10U)) | (((0x7fU 
                                                   <= 
                                                   (vlSelf->index_data[0x28U] 
                                                    >> 0x10U))
                                                   ? 0U
                                                   : 
                                                  vlSelf->vrgather__DOT__lut
                                                  [
                                                  (0x7fU 
                                                   & (vlSelf->index_data[0x28U] 
                                                      >> 0x10U))]) 
                                                 << 0x10U));
    vlSelf->res_data[0x29U] = ((((0x7fU <= (0xffffU 
                                            & vlSelf->index_data[0x29U]))
                                  ? 0U : (0xffffU & 
                                          vlSelf->vrgather__DOT__lut
                                          [(0x7fU & 
                                            vlSelf->index_data[0x29U])])) 
                                | (((0x7fU <= (vlSelf->index_data[0x28U] 
                                               >> 0x10U))
                                     ? 0U : vlSelf->vrgather__DOT__lut
                                    [(0x7fU & (vlSelf->index_data[0x28U] 
                                               >> 0x10U))]) 
                                   >> 0x10U)) | (((0x7fU 
                                                   <= 
                                                   (vlSelf->index_data[0x29U] 
                                                    >> 0x10U))
                                                   ? 0U
                                                   : 
                                                  vlSelf->vrgather__DOT__lut
                                                  [
                                                  (0x7fU 
                                                   & (vlSelf->index_data[0x29U] 
                                                      >> 0x10U))]) 
                                                 << 0x10U));
    vlSelf->res_data[0x2aU] = ((((0x7fU <= (0xffffU 
                                            & vlSelf->index_data[0x2aU]))
                                  ? 0U : (0xffffU & 
                                          vlSelf->vrgather__DOT__lut
                                          [(0x7fU & 
                                            vlSelf->index_data[0x2aU])])) 
                                | (((0x7fU <= (vlSelf->index_data[0x29U] 
                                               >> 0x10U))
                                     ? 0U : vlSelf->vrgather__DOT__lut
                                    [(0x7fU & (vlSelf->index_data[0x29U] 
                                               >> 0x10U))]) 
                                   >> 0x10U)) | (((0x7fU 
                                                   <= 
                                                   (vlSelf->index_data[0x2aU] 
                                                    >> 0x10U))
                                                   ? 0U
                                                   : 
                                                  vlSelf->vrgather__DOT__lut
                                                  [
                                                  (0x7fU 
                                                   & (vlSelf->index_data[0x2aU] 
                                                      >> 0x10U))]) 
                                                 << 0x10U));
    vlSelf->res_data[0x2bU] = ((((0x7fU <= (0xffffU 
                                            & vlSelf->index_data[0x2bU]))
                                  ? 0U : (0xffffU & 
                                          vlSelf->vrgather__DOT__lut
                                          [(0x7fU & 
                                            vlSelf->index_data[0x2bU])])) 
                                | (((0x7fU <= (vlSelf->index_data[0x2aU] 
                                               >> 0x10U))
                                     ? 0U : vlSelf->vrgather__DOT__lut
                                    [(0x7fU & (vlSelf->index_data[0x2aU] 
                                               >> 0x10U))]) 
                                   >> 0x10U)) | (((0x7fU 
                                                   <= 
                                                   (vlSelf->index_data[0x2bU] 
                                                    >> 0x10U))
                                                   ? 0U
                                                   : 
                                                  vlSelf->vrgather__DOT__lut
                                                  [
                                                  (0x7fU 
                                                   & (vlSelf->index_data[0x2bU] 
                                                      >> 0x10U))]) 
                                                 << 0x10U));
    vlSelf->res_data[0x2cU] = ((((0x7fU <= (0xffffU 
                                            & vlSelf->index_data[0x2cU]))
                                  ? 0U : (0xffffU & 
                                          vlSelf->vrgather__DOT__lut
                                          [(0x7fU & 
                                            vlSelf->index_data[0x2cU])])) 
                                | (((0x7fU <= (vlSelf->index_data[0x2bU] 
                                               >> 0x10U))
                                     ? 0U : vlSelf->vrgather__DOT__lut
                                    [(0x7fU & (vlSelf->index_data[0x2bU] 
                                               >> 0x10U))]) 
                                   >> 0x10U)) | (((0x7fU 
                                                   <= 
                                                   (vlSelf->index_data[0x2cU] 
                                                    >> 0x10U))
                                                   ? 0U
                                                   : 
                                                  vlSelf->vrgather__DOT__lut
                                                  [
                                                  (0x7fU 
                                                   & (vlSelf->index_data[0x2cU] 
                                                      >> 0x10U))]) 
                                                 << 0x10U));
    vlSelf->res_data[0x2dU] = ((((0x7fU <= (0xffffU 
                                            & vlSelf->index_data[0x2dU]))
                                  ? 0U : (0xffffU & 
                                          vlSelf->vrgather__DOT__lut
                                          [(0x7fU & 
                                            vlSelf->index_data[0x2dU])])) 
                                | (((0x7fU <= (vlSelf->index_data[0x2cU] 
                                               >> 0x10U))
                                     ? 0U : vlSelf->vrgather__DOT__lut
                                    [(0x7fU & (vlSelf->index_data[0x2cU] 
                                               >> 0x10U))]) 
                                   >> 0x10U)) | (((0x7fU 
                                                   <= 
                                                   (vlSelf->index_data[0x2dU] 
                                                    >> 0x10U))
                                                   ? 0U
                                                   : 
                                                  vlSelf->vrgather__DOT__lut
                                                  [
                                                  (0x7fU 
                                                   & (vlSelf->index_data[0x2dU] 
                                                      >> 0x10U))]) 
                                                 << 0x10U));
    vlSelf->res_data[0x2eU] = ((((0x7fU <= (0xffffU 
                                            & vlSelf->index_data[0x2eU]))
                                  ? 0U : (0xffffU & 
                                          vlSelf->vrgather__DOT__lut
                                          [(0x7fU & 
                                            vlSelf->index_data[0x2eU])])) 
                                | (((0x7fU <= (vlSelf->index_data[0x2dU] 
                                               >> 0x10U))
                                     ? 0U : vlSelf->vrgather__DOT__lut
                                    [(0x7fU & (vlSelf->index_data[0x2dU] 
                                               >> 0x10U))]) 
                                   >> 0x10U)) | (((0x7fU 
                                                   <= 
                                                   (vlSelf->index_data[0x2eU] 
                                                    >> 0x10U))
                                                   ? 0U
                                                   : 
                                                  vlSelf->vrgather__DOT__lut
                                                  [
                                                  (0x7fU 
                                                   & (vlSelf->index_data[0x2eU] 
                                                      >> 0x10U))]) 
                                                 << 0x10U));
    vlSelf->res_data[0x2fU] = ((((0x7fU <= (0xffffU 
                                            & vlSelf->index_data[0x2fU]))
                                  ? 0U : (0xffffU & 
                                          vlSelf->vrgather__DOT__lut
                                          [(0x7fU & 
                                            vlSelf->index_data[0x2fU])])) 
                                | (((0x7fU <= (vlSelf->index_data[0x2eU] 
                                               >> 0x10U))
                                     ? 0U : vlSelf->vrgather__DOT__lut
                                    [(0x7fU & (vlSelf->index_data[0x2eU] 
                                               >> 0x10U))]) 
                                   >> 0x10U)) | (((0x7fU 
                                                   <= 
                                                   (vlSelf->index_data[0x2fU] 
                                                    >> 0x10U))
                                                   ? 0U
                                                   : 
                                                  vlSelf->vrgather__DOT__lut
                                                  [
                                                  (0x7fU 
                                                   & (vlSelf->index_data[0x2fU] 
                                                      >> 0x10U))]) 
                                                 << 0x10U));
    vlSelf->res_data[0x30U] = ((((0x7fU <= (0xffffU 
                                            & vlSelf->index_data[0x30U]))
                                  ? 0U : (0xffffU & 
                                          vlSelf->vrgather__DOT__lut
                                          [(0x7fU & 
                                            vlSelf->index_data[0x30U])])) 
                                | (((0x7fU <= (vlSelf->index_data[0x2fU] 
                                               >> 0x10U))
                                     ? 0U : vlSelf->vrgather__DOT__lut
                                    [(0x7fU & (vlSelf->index_data[0x2fU] 
                                               >> 0x10U))]) 
                                   >> 0x10U)) | (((0x7fU 
                                                   <= 
                                                   (vlSelf->index_data[0x30U] 
                                                    >> 0x10U))
                                                   ? 0U
                                                   : 
                                                  vlSelf->vrgather__DOT__lut
                                                  [
                                                  (0x7fU 
                                                   & (vlSelf->index_data[0x30U] 
                                                      >> 0x10U))]) 
                                                 << 0x10U));
    vlSelf->res_data[0x31U] = ((((0x7fU <= (0xffffU 
                                            & vlSelf->index_data[0x31U]))
                                  ? 0U : (0xffffU & 
                                          vlSelf->vrgather__DOT__lut
                                          [(0x7fU & 
                                            vlSelf->index_data[0x31U])])) 
                                | (((0x7fU <= (vlSelf->index_data[0x30U] 
                                               >> 0x10U))
                                     ? 0U : vlSelf->vrgather__DOT__lut
                                    [(0x7fU & (vlSelf->index_data[0x30U] 
                                               >> 0x10U))]) 
                                   >> 0x10U)) | (((0x7fU 
                                                   <= 
                                                   (vlSelf->index_data[0x31U] 
                                                    >> 0x10U))
                                                   ? 0U
                                                   : 
                                                  vlSelf->vrgather__DOT__lut
                                                  [
                                                  (0x7fU 
                                                   & (vlSelf->index_data[0x31U] 
                                                      >> 0x10U))]) 
                                                 << 0x10U));
    vlSelf->res_data[0x32U] = ((((0x7fU <= (0xffffU 
                                            & vlSelf->index_data[0x32U]))
                                  ? 0U : (0xffffU & 
                                          vlSelf->vrgather__DOT__lut
                                          [(0x7fU & 
                                            vlSelf->index_data[0x32U])])) 
                                | (((0x7fU <= (vlSelf->index_data[0x31U] 
                                               >> 0x10U))
                                     ? 0U : vlSelf->vrgather__DOT__lut
                                    [(0x7fU & (vlSelf->index_data[0x31U] 
                                               >> 0x10U))]) 
                                   >> 0x10U)) | (((0x7fU 
                                                   <= 
                                                   (vlSelf->index_data[0x32U] 
                                                    >> 0x10U))
                                                   ? 0U
                                                   : 
                                                  vlSelf->vrgather__DOT__lut
                                                  [
                                                  (0x7fU 
                                                   & (vlSelf->index_data[0x32U] 
                                                      >> 0x10U))]) 
                                                 << 0x10U));
    vlSelf->res_data[0x33U] = ((((0x7fU <= (0xffffU 
                                            & vlSelf->index_data[0x33U]))
                                  ? 0U : (0xffffU & 
                                          vlSelf->vrgather__DOT__lut
                                          [(0x7fU & 
                                            vlSelf->index_data[0x33U])])) 
                                | (((0x7fU <= (vlSelf->index_data[0x32U] 
                                               >> 0x10U))
                                     ? 0U : vlSelf->vrgather__DOT__lut
                                    [(0x7fU & (vlSelf->index_data[0x32U] 
                                               >> 0x10U))]) 
                                   >> 0x10U)) | (((0x7fU 
                                                   <= 
                                                   (vlSelf->index_data[0x33U] 
                                                    >> 0x10U))
                                                   ? 0U
                                                   : 
                                                  vlSelf->vrgather__DOT__lut
                                                  [
                                                  (0x7fU 
                                                   & (vlSelf->index_data[0x33U] 
                                                      >> 0x10U))]) 
                                                 << 0x10U));
    vlSelf->res_data[0x34U] = ((((0x7fU <= (0xffffU 
                                            & vlSelf->index_data[0x34U]))
                                  ? 0U : (0xffffU & 
                                          vlSelf->vrgather__DOT__lut
                                          [(0x7fU & 
                                            vlSelf->index_data[0x34U])])) 
                                | (((0x7fU <= (vlSelf->index_data[0x33U] 
                                               >> 0x10U))
                                     ? 0U : vlSelf->vrgather__DOT__lut
                                    [(0x7fU & (vlSelf->index_data[0x33U] 
                                               >> 0x10U))]) 
                                   >> 0x10U)) | (((0x7fU 
                                                   <= 
                                                   (vlSelf->index_data[0x34U] 
                                                    >> 0x10U))
                                                   ? 0U
                                                   : 
                                                  vlSelf->vrgather__DOT__lut
                                                  [
                                                  (0x7fU 
                                                   & (vlSelf->index_data[0x34U] 
                                                      >> 0x10U))]) 
                                                 << 0x10U));
    vlSelf->res_data[0x35U] = ((((0x7fU <= (0xffffU 
                                            & vlSelf->index_data[0x35U]))
                                  ? 0U : (0xffffU & 
                                          vlSelf->vrgather__DOT__lut
                                          [(0x7fU & 
                                            vlSelf->index_data[0x35U])])) 
                                | (((0x7fU <= (vlSelf->index_data[0x34U] 
                                               >> 0x10U))
                                     ? 0U : vlSelf->vrgather__DOT__lut
                                    [(0x7fU & (vlSelf->index_data[0x34U] 
                                               >> 0x10U))]) 
                                   >> 0x10U)) | (((0x7fU 
                                                   <= 
                                                   (vlSelf->index_data[0x35U] 
                                                    >> 0x10U))
                                                   ? 0U
                                                   : 
                                                  vlSelf->vrgather__DOT__lut
                                                  [
                                                  (0x7fU 
                                                   & (vlSelf->index_data[0x35U] 
                                                      >> 0x10U))]) 
                                                 << 0x10U));
    vlSelf->res_data[0x36U] = ((((0x7fU <= (0xffffU 
                                            & vlSelf->index_data[0x36U]))
                                  ? 0U : (0xffffU & 
                                          vlSelf->vrgather__DOT__lut
                                          [(0x7fU & 
                                            vlSelf->index_data[0x36U])])) 
                                | (((0x7fU <= (vlSelf->index_data[0x35U] 
                                               >> 0x10U))
                                     ? 0U : vlSelf->vrgather__DOT__lut
                                    [(0x7fU & (vlSelf->index_data[0x35U] 
                                               >> 0x10U))]) 
                                   >> 0x10U)) | (((0x7fU 
                                                   <= 
                                                   (vlSelf->index_data[0x36U] 
                                                    >> 0x10U))
                                                   ? 0U
                                                   : 
                                                  vlSelf->vrgather__DOT__lut
                                                  [
                                                  (0x7fU 
                                                   & (vlSelf->index_data[0x36U] 
                                                      >> 0x10U))]) 
                                                 << 0x10U));
    vlSelf->res_data[0x37U] = ((((0x7fU <= (0xffffU 
                                            & vlSelf->index_data[0x37U]))
                                  ? 0U : (0xffffU & 
                                          vlSelf->vrgather__DOT__lut
                                          [(0x7fU & 
                                            vlSelf->index_data[0x37U])])) 
                                | (((0x7fU <= (vlSelf->index_data[0x36U] 
                                               >> 0x10U))
                                     ? 0U : vlSelf->vrgather__DOT__lut
                                    [(0x7fU & (vlSelf->index_data[0x36U] 
                                               >> 0x10U))]) 
                                   >> 0x10U)) | (((0x7fU 
                                                   <= 
                                                   (vlSelf->index_data[0x37U] 
                                                    >> 0x10U))
                                                   ? 0U
                                                   : 
                                                  vlSelf->vrgather__DOT__lut
                                                  [
                                                  (0x7fU 
                                                   & (vlSelf->index_data[0x37U] 
                                                      >> 0x10U))]) 
                                                 << 0x10U));
    vlSelf->res_data[0x38U] = ((((0x7fU <= (0xffffU 
                                            & vlSelf->index_data[0x38U]))
                                  ? 0U : (0xffffU & 
                                          vlSelf->vrgather__DOT__lut
                                          [(0x7fU & 
                                            vlSelf->index_data[0x38U])])) 
                                | (((0x7fU <= (vlSelf->index_data[0x37U] 
                                               >> 0x10U))
                                     ? 0U : vlSelf->vrgather__DOT__lut
                                    [(0x7fU & (vlSelf->index_data[0x37U] 
                                               >> 0x10U))]) 
                                   >> 0x10U)) | (((0x7fU 
                                                   <= 
                                                   (vlSelf->index_data[0x38U] 
                                                    >> 0x10U))
                                                   ? 0U
                                                   : 
                                                  vlSelf->vrgather__DOT__lut
                                                  [
                                                  (0x7fU 
                                                   & (vlSelf->index_data[0x38U] 
                                                      >> 0x10U))]) 
                                                 << 0x10U));
    vlSelf->res_data[0x39U] = ((((0x7fU <= (0xffffU 
                                            & vlSelf->index_data[0x39U]))
                                  ? 0U : (0xffffU & 
                                          vlSelf->vrgather__DOT__lut
                                          [(0x7fU & 
                                            vlSelf->index_data[0x39U])])) 
                                | (((0x7fU <= (vlSelf->index_data[0x38U] 
                                               >> 0x10U))
                                     ? 0U : vlSelf->vrgather__DOT__lut
                                    [(0x7fU & (vlSelf->index_data[0x38U] 
                                               >> 0x10U))]) 
                                   >> 0x10U)) | (((0x7fU 
                                                   <= 
                                                   (vlSelf->index_data[0x39U] 
                                                    >> 0x10U))
                                                   ? 0U
                                                   : 
                                                  vlSelf->vrgather__DOT__lut
                                                  [
                                                  (0x7fU 
                                                   & (vlSelf->index_data[0x39U] 
                                                      >> 0x10U))]) 
                                                 << 0x10U));
    vlSelf->res_data[0x3aU] = ((((0x7fU <= (0xffffU 
                                            & vlSelf->index_data[0x3aU]))
                                  ? 0U : (0xffffU & 
                                          vlSelf->vrgather__DOT__lut
                                          [(0x7fU & 
                                            vlSelf->index_data[0x3aU])])) 
                                | (((0x7fU <= (vlSelf->index_data[0x39U] 
                                               >> 0x10U))
                                     ? 0U : vlSelf->vrgather__DOT__lut
                                    [(0x7fU & (vlSelf->index_data[0x39U] 
                                               >> 0x10U))]) 
                                   >> 0x10U)) | (((0x7fU 
                                                   <= 
                                                   (vlSelf->index_data[0x3aU] 
                                                    >> 0x10U))
                                                   ? 0U
                                                   : 
                                                  vlSelf->vrgather__DOT__lut
                                                  [
                                                  (0x7fU 
                                                   & (vlSelf->index_data[0x3aU] 
                                                      >> 0x10U))]) 
                                                 << 0x10U));
    vlSelf->res_data[0x3bU] = ((((0x7fU <= (0xffffU 
                                            & vlSelf->index_data[0x3bU]))
                                  ? 0U : (0xffffU & 
                                          vlSelf->vrgather__DOT__lut
                                          [(0x7fU & 
                                            vlSelf->index_data[0x3bU])])) 
                                | (((0x7fU <= (vlSelf->index_data[0x3aU] 
                                               >> 0x10U))
                                     ? 0U : vlSelf->vrgather__DOT__lut
                                    [(0x7fU & (vlSelf->index_data[0x3aU] 
                                               >> 0x10U))]) 
                                   >> 0x10U)) | (((0x7fU 
                                                   <= 
                                                   (vlSelf->index_data[0x3bU] 
                                                    >> 0x10U))
                                                   ? 0U
                                                   : 
                                                  vlSelf->vrgather__DOT__lut
                                                  [
                                                  (0x7fU 
                                                   & (vlSelf->index_data[0x3bU] 
                                                      >> 0x10U))]) 
                                                 << 0x10U));
    vlSelf->res_data[0x3cU] = ((((0x7fU <= (0xffffU 
                                            & vlSelf->index_data[0x3cU]))
                                  ? 0U : (0xffffU & 
                                          vlSelf->vrgather__DOT__lut
                                          [(0x7fU & 
                                            vlSelf->index_data[0x3cU])])) 
                                | (((0x7fU <= (vlSelf->index_data[0x3bU] 
                                               >> 0x10U))
                                     ? 0U : vlSelf->vrgather__DOT__lut
                                    [(0x7fU & (vlSelf->index_data[0x3bU] 
                                               >> 0x10U))]) 
                                   >> 0x10U)) | (((0x7fU 
                                                   <= 
                                                   (vlSelf->index_data[0x3cU] 
                                                    >> 0x10U))
                                                   ? 0U
                                                   : 
                                                  vlSelf->vrgather__DOT__lut
                                                  [
                                                  (0x7fU 
                                                   & (vlSelf->index_data[0x3cU] 
                                                      >> 0x10U))]) 
                                                 << 0x10U));
    vlSelf->res_data[0x3dU] = ((((0x7fU <= (0xffffU 
                                            & vlSelf->index_data[0x3dU]))
                                  ? 0U : (0xffffU & 
                                          vlSelf->vrgather__DOT__lut
                                          [(0x7fU & 
                                            vlSelf->index_data[0x3dU])])) 
                                | (((0x7fU <= (vlSelf->index_data[0x3cU] 
                                               >> 0x10U))
                                     ? 0U : vlSelf->vrgather__DOT__lut
                                    [(0x7fU & (vlSelf->index_data[0x3cU] 
                                               >> 0x10U))]) 
                                   >> 0x10U)) | (__Vtemp_1[1U] 
                                                 << 0x10U));
    vlSelf->res_data[0x3eU] = ((__Vtemp_1[1U] >> 0x10U) 
                               | (__Vtemp_1[2U] << 0x10U));
    vlSelf->res_data[0x3fU] = ((((0x7fU <= (vlSelf->index_data[0x3fU] 
                                            >> 0x10U))
                                  ? 0U : vlSelf->vrgather__DOT__lut
                                 [(0x7fU & (vlSelf->index_data[0x3fU] 
                                            >> 0x10U))]) 
                                << 0x10U) | (__Vtemp_1[2U] 
                                             >> 0x10U));
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("src/vsrc/top.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("src/vsrc/top.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("src/vsrc/top.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
