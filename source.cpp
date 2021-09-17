#include <iostream>
#include <fstream>

int main()
{
    std::ifstream f("file.txt");

    if (f.is_open())
        std::cout << f.rdbuf();
    else
        std::cout << "File not in buildsystem" << std::endl;
}