#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <linux/i2c-dev.h>

int main()
{
	char filename[20];
	sprintf(filename, "/dev/i2c-%d", 1);
	int file = open(filename, O_RDWR);
	if(file < 0)
	{
		print("Unable to open I2C bus!");
		exit(1);
	}

	return 0;
}
