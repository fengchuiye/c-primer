#include<stdio.h>
#include<iostream>

std::string global_str;
int global_int;
int main()
{
    int local_int;
    std::string local_str;
    
    std::cout << " glstr " << global_str << " glint " << global_int << std::endl;
    
    std::cout << " lostr " << local_str << " loint " << local_int << std::endl;
}
