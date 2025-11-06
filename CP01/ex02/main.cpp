#include <iostream>
int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *ptr = &str;
    std::string ref = str;

    std::cout << "this is the original str: " << str << std::endl;
    std::cout << "this is the ptr addr: " << ptr << std::endl;
    std::cout << "this is the dereferenced ptr: " << *ptr << std::endl;
    std::cout << "this is the reference: " << ref << std::endl;
}