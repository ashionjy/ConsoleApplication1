#include "test.h"
#include "test_tb.h"

int sc_main(int argc, char* argv[]) {
	sc_signal<sc_biguint<127> > neg_out;
	sc_signal<bool> pwm_rising_edge;

	pwm_in pw1("pw1");
	pw1.neg_out(neg_out);
	pw1.pwm_rising_edge(pwm_rising_edge);

	tb tb1("tb1");
	tb1.neg_out(neg_out);
	tb1.pwm_rising_edge(pwm_rising_edge);

	sc_trace_file* trace_file = sc_create_vcd_trace_file("test");

	sc_trace<sc_biguint<127> >(trace_file, neg_out, "neg_out");
	sc_trace<bool>(trace_file, pwm_rising_edge, "pwm_rising_edge");

	sc_start(10, SC_US);

	sc_close_vcd_trace_file(trace_file);

	return 0;
}