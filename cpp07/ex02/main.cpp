#include "Array.hpp"
#include "Array.tpp"

#include <iostream>
#include <cstdlib>

#define MAX_VAL 10

template <typename T>

void arr_print(Array<T> array, int size)
{
	for (int i = 0; i < size; i++)
		std::cout << array[i] << std::endl;
}

void int_print(int *array, int size)
{
	for (int i = 0; i < size; i++)
		std::cout << array[i] << std::endl;
}

int main(void)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    
	for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand() % 10;
        numbers[i] = value;
        mirror[i] = value;
    }


	std::cout << "Array:" << std::endl; 
	arr_print(numbers, MAX_VAL);
	std::cout << std::endl;
	std::cout << "Int *:" << std::endl; 
	int_print(mirror, MAX_VAL);


    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "Something went wrong, the elements aren't the same" << std::endl;
            return 1;
        }
	}

	std::cout << "The arrays are exactly the same!" << std::endl;

    delete [] mirror;
}