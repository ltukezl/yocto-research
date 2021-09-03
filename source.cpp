#include <linux/i2c-dev.h>
#include <i2c/smbus.h>
#include <iostream>
#include <stdint.h>

int main(){
    uint8_t devAddr = 0x1E;
    uint8_t devReg = 0xD;
    uint8_t retValue = 0;
    char* i2cInterface = "/dev/i2c-3";

    auto file = open(i2cInterface, O_RDWR);
    ioctl(file, I2C_SLAVE, devAddr);
    s_i2c_read_regs(file, devAddr, devReg, &retValue);
    std::cout << "read from i2c " << retValue << std::endl;

}