#include <stdio.h>
#include <stdlib.h>

#include "berryimu.h"


int main()
{
	init();

	selectDevice(file, ACC_ADDRESS);

	return 0;
}
