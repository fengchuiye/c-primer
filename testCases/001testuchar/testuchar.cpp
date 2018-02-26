#include<stdio.h>
#include<iostream>

int main()
{
    unsigned char c = 111;
    char d = 111;
    signed char e = 111;
    
    std::cout << (int) c << " " << c << " size " << sizeof(c) << std::endl;
    std::cout << (int) d << " " << d << " size " << sizeof(d) << std::endl;
    std::cout << (int) e << " " << e << " size " << sizeof(e) << std::endl;
}
