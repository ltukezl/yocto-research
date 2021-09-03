extern "C"{
    #include <linux/i2c-dev.h>
    #include <i2c/smbus.h>
}
#include <sys/ioctl.h>

#include <stdio.h>
#include <iostream>
#include <stdint.h>
#include <fstream>
#include <string>
#include <fcntl.h>

int main(){
    uint8_t devAddr = 0x1E;
    uint8_t devReg = 0xD;
    uint32_t retValue = 0;
    std::string i2cInterface = "/dev/i2c-3";

    auto file = open(i2cInterface.c_str(), I2C_RDWR);
    ioctl(file, I2C_SLAVE, devAddr);
    retValue = i2c_smbus_read_word_data(file, devReg);
    std::cout << "read from i2c " << retValue << std::endl;

}