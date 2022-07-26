#include "test.h"

void pwm_in::assign_neg_out()
{
	neg_out = pwm_rising_edge ? (sc_biguint<127>)0x100000000000001F : neg_out;

};

