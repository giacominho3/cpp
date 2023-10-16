#include <iostream>
#include <string>

template<typename T>

void iter(T *array, int size, void(*f)(T const &)) 
{
	int i = 0;
    while (i < size) 
	{
        f(array[i]);
		i++;
    }
}