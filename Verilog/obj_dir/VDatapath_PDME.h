// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VDATAPATH_PDME_H_
#define _VDATAPATH_PDME_H_  // guard

#include "verilated.h"

//==========

class VDatapath_PDME__Syms;

//----------

VL_MODULE(VDatapath_PDME) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(input_valid,0,0);
    VL_OUT8(output_valid,0,0);
    VL_IN64(input_data,63,0);
    VL_OUT64(output_data,63,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ Datapath_PDME__DOT__next_to_decrypt;
    CData/*0:0*/ Datapath_PDME__DOT__n_next_to_decrypt;
    CData/*0:0*/ Datapath_PDME__DOT__input_counter;
    CData/*0:0*/ Datapath_PDME__DOT__n_input_counter;
    CData/*1:0*/ Datapath_PDME__DOT__output_counter;
    CData/*1:0*/ Datapath_PDME__DOT__n_output_counter;
    CData/*0:0*/ Datapath_PDME__DOT__neg_intput_counter;
    CData/*0:0*/ Datapath_PDME__DOT__n_neg_intput_counter;
    CData/*0:0*/ Datapath_PDME__DOT__neg_output_counter;
    CData/*0:0*/ Datapath_PDME__DOT__n_neg_output_counter;
    CData/*0:0*/ Datapath_PDME__DOT__input_valid_buffer;
    CData/*0:0*/ Datapath_PDME__DOT__n_input_valid_buffer;
    CData/*0:0*/ Datapath_PDME__DOT__output_valid_buffer;
    CData/*0:0*/ Datapath_PDME__DOT__n_output_valid_buffer;
    CData/*3:0*/ Datapath_PDME__DOT__simulatedAESDecryptEngin__DOT__valid;
    CData/*3:0*/ Datapath_PDME__DOT__simulatedAESDecryptEngin__DOT__n_valid;
    CData/*3:0*/ Datapath_PDME__DOT__SimulatedAESEncryptEngin__DOT__valid;
    CData/*3:0*/ Datapath_PDME__DOT__SimulatedAESEncryptEngin__DOT__n_valid;
    CData/*1:0*/ Datapath_PDME__DOT__pipelinedDecoupledNegator__DOT__valid;
    CData/*1:0*/ Datapath_PDME__DOT__pipelinedDecoupledNegator__DOT__n_valid;
    CData/*2:0*/ Datapath_PDME__DOT__pipelinedDecoupledNegator__DOT__fifobuffer_for_data__DOT__Count;
    CData/*2:0*/ Datapath_PDME__DOT__pipelinedDecoupledNegator__DOT__fifobuffer_for_data__DOT__readCounter;
    CData/*2:0*/ Datapath_PDME__DOT__pipelinedDecoupledNegator__DOT__fifobuffer_for_data__DOT__writeCounter;
    CData/*2:0*/ Datapath_PDME__DOT__pipelinedDecoupledNegator__DOT__fifobuffer_for_data__DOT__n_readCounter;
    CData/*2:0*/ Datapath_PDME__DOT__pipelinedDecoupledNegator__DOT__fifobuffer_for_data__DOT__n_writeCounter;
    CData/*2:0*/ Datapath_PDME__DOT__pipelinedDecoupledNegator__DOT__fifobuffer_for_validity__DOT__Count;
    CData/*4:0*/ Datapath_PDME__DOT__pipelinedDecoupledNegator__DOT__fifobuffer_for_validity__DOT__FIFO;
    CData/*2:0*/ Datapath_PDME__DOT__pipelinedDecoupledNegator__DOT__fifobuffer_for_validity__DOT__readCounter;
    CData/*2:0*/ Datapath_PDME__DOT__pipelinedDecoupledNegator__DOT__fifobuffer_for_validity__DOT__writeCounter;
    CData/*2:0*/ Datapath_PDME__DOT__pipelinedDecoupledNegator__DOT__fifobuffer_for_validity__DOT__n_readCounter;
    CData/*2:0*/ Datapath_PDME__DOT__pipelinedDecoupledNegator__DOT__fifobuffer_for_validity__DOT__n_writeCounter;
    WData/*127:0*/ Datapath_PDME__DOT__input_buffer[4];
    WData/*127:0*/ Datapath_PDME__DOT__n_input_buffer[4];
    WData/*127:0*/ Datapath_PDME__DOT__output_buffer[4];
    WData/*127:0*/ Datapath_PDME__DOT__n_output_buffer[4];
    WData/*127:0*/ Datapath_PDME__DOT__dec_to_neg_buffer[4];
    WData/*127:0*/ Datapath_PDME__DOT__n_dec_to_neg_buffer[4];
    WData/*127:0*/ Datapath_PDME__DOT__neg_to_enc_buffer[4];
    WData/*127:0*/ Datapath_PDME__DOT__n_neg_to_enc_buffer[4];
    WData/*511:0*/ Datapath_PDME__DOT__simulatedAESDecryptEngin__DOT__buffer[16];
    WData/*511:0*/ Datapath_PDME__DOT__simulatedAESDecryptEngin__DOT__n_buffer[16];
    WData/*511:0*/ Datapath_PDME__DOT__SimulatedAESEncryptEngin__DOT__buffer[16];
    WData/*511:0*/ Datapath_PDME__DOT__SimulatedAESEncryptEngin__DOT__n_buffer[16];
    QData/*63:0*/ Datapath_PDME__DOT__pipelinedDecoupledNegator__DOT__input_buffer;
    QData/*63:0*/ Datapath_PDME__DOT__pipelinedDecoupledNegator__DOT__negated_data;
    WData/*319:0*/ Datapath_PDME__DOT__pipelinedDecoupledNegator__DOT__fifobuffer_for_data__DOT__FIFO[10];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ Datapath_PDME__DOT__pipelinedDecoupledNegator__DOT__fifobuffer_for_validity__DOT____Vlvbound1;
    CData/*0:0*/ __Vclklast__TOP__clock;
    QData/*63:0*/ Datapath_PDME__DOT__pipelinedDecoupledNegator__DOT__fifobuffer_for_data__DOT____Vlvbound1;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VDatapath_PDME__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VDatapath_PDME);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VDatapath_PDME(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VDatapath_PDME();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VDatapath_PDME__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VDatapath_PDME__Syms* symsp, bool first);
  private:
    static QData _change_request(VDatapath_PDME__Syms* __restrict vlSymsp);
    static QData _change_request_1(VDatapath_PDME__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__3(VDatapath_PDME__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VDatapath_PDME__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VDatapath_PDME__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VDatapath_PDME__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VDatapath_PDME__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VDatapath_PDME__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
