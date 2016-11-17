#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <linux/i2c-dev.h>

#define ACC_ADDRESS 0x1E

void selectDevice(int file, int addr);
void enableAccelerometer();
void enableGyro();

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
	//char device[3];

	if(ioctl(file, I2C_SLAVE, addr) < 0)
	{
		printf("Failed to select I2C device.");
	}
}

void enableAccelerometer()
{
	//writeAccReg(CTRL_REG1_XM, 0b01100111);
	//writeAccReg(CTRL_REG2_XM, 0b00100000);
}

void enableGyro()
{
	//writeGyrReg(CTRL_REG1_G, 0b00001111);
	//writeGyrReg(CTRL_REG2_G, 0b00110000);
}
