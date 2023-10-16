#include "iter.hpp"

void minus_one(int const &n) 
{
    std::cout << n - 1 << std::endl;
}

void print(std::string const &s) 
{
    std::cout << s << std::endl;
}

int main(void) 
{
    int array[6] = {1, 2, 3, 4, 5, 6};
    std::string strarr[3] = {"ciao", "come", "va"};

    ::iter(array, 6, minus_one);
    ::iter(strarr, 3, print);
}