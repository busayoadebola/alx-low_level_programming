#define _GNU_SOURCE
#include <dlfcn.h>
#include <stdio.h>
#include <stdlib.h>

int rand(void)
{
	/* Replace the random number generation with your chosen numbers */
	static int numbers[] = {9, 8, 10, 24, 75, 9};
	static int index;
	int chosen_number;
	
	if (index >= sizeof(numbers) / sizeof(numbers[0]))
	{
		/* Reset index to start over with the numbers */
		index = 0;
	}
	chosen_number = numbers[index];
	index++;
	
	return chosen_number;
}
