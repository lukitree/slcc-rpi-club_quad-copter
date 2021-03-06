#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <linux/i2c-dev.h>
#include "LSM9DS0.h"
#include <stdint.h>

#define ACC_ADDRESS 0x1E

void init();
void selectDevice(int file, int addr);
void enableAccelerometer();
void enableGyro();
void readACC(int* a);

int file;
