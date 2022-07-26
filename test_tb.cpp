#include "test_tb.h"

void tb::test() 
{
	while (true) 
	{
		pwm_rising_edge = 1;
		wait(10, SC_NS);
		
	}
}