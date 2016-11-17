extern "C"
{
	#include <stdio.h>
	#include <stdlib.h>
	#include <fcntl.h>
	#include <sys/stat.h>
	#include <linux/i2c-dev.h>
}

void selectDevice(int file, int addr);

int main()
{
	char filename[20];
	sprintf(filename, "/dev/i2c-%d", 1);
	int file = open(filename, O_RDWR);
	if(file < 0)
	{
		printf("Unable to open I2C bus!");
		exit(1);
	}
	printf("Success!\n");

	selectDevice(file, ACC_ADDRESS);

	return 0;
}

void selectDevice(int file, int addr)
{
	char device[3];

	if(ioctl(file, I2C_SLAVE, addr) < 0)
	{
		printf("Failed to select I2C device.");
	}
}
