#pragma once
#include <systemc.h>

SC_MODULE(code_83) {
	
	sc_in <sc_uint<8> > din;
	sc_signal <sc_uint<3> > dout, out;
	sc_signal <sc_uint<3> > code;

	sc_uint<3> function2_code(sc_uint<8> func_din);
	void assign_out();

	SC_CTOR(code_83) {
		SC_THREAD(assign_out);

	}

};

