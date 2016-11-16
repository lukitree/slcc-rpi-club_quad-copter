#include <stdio.h>
#include <linux/i2c-dev.h>

int main()
{
	char filename[20];
	sprintf(filename, "/dev/i2c-%d", 1);
	FILE file;
	file = open(filename, O_RDWR);


	return 0;
}
