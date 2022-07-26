#pragma once
#include "systemc.h"

SC_MODULE(pwm_in)
{
	//sc_in<bool> clk;
	//sc_uint<32> 1;
	sc_out<sc_biguint<127> > neg_out;
	//sc_signal<bool> pos_out;
	sc_in<bool> pwm_rising_edge;

	void assign_neg_out();

	SC_CTOR(pwm_in)
	{
		SC_METHOD(assign_neg_out);
		sensitive << pwm_rising_edge << neg_out;
	}

};


