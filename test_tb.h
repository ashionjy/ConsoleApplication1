#pragma once
#include <systemc.h>

SC_MODULE(tb)
{
	sc_in<sc_biguint<127> > neg_out;
	sc_out<bool> pwm_rising_edge;

	void test();

	SC_CTOR(tb) 
	{
		SC_THREAD(test);
	}

};