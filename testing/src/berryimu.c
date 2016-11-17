#include "berryimu.h"

void init()
{
	char filename[20];
	sprintf(filename, "/dev/i2c-%d", 1);
	int file = open(filename, O_RDWR);
	if(file < 0)
	{
		printf("Unable to open I2C bus!");
		exit(1);
	}
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
	printf("enableAccelerometer() is not implemented!");
}

void enableGyro()
{
	//writeGyrReg(CTRL_REG1_G, 0b00001111);
	//writeGyrReg(CTRL_REG2_G, 0b00110000);
	printf("enableGyro() is not implemented!");
}

void readACC(int* a)
{
	uint8_t block[6];
	selectDevice(file, ACC_ADDRESS);
	readBlock(0x80 | OUT_X_L_A, sizeof(block), block);

	*a = (int16_t)(block[0] | block[1] << 8);
	*(a+1) = (int16_t)(block[2] | block[3] << 8);
	*(a+2) = (int16_t)(block[4] | block[5] << 8);
}

