#include <iostream>
#include "classVector.hpp"

int main()
{
    ts::Vect array;

    //пример заполнения
    std::cout << "Before:" << std::endl;

    for (int i = 0; i < 10; ++i)
    {
        array.Add(i*3);
    }
    std::cout << "Mas size = " << array.Size() << std::endl;
    for(int i = 0; i < array.Size(); i++)
        std::cout << array.GetFrom(i) << " "; std::cout << std::endl;

    std::cout << "After paste:" << std::endl;
    array.AddTo(999,4);
    std::cout << "Mas size = " << array.Size() << std::endl;
    for(int i = 0; i < array.Size(); i++)
        std::cout << array.GetFrom(i) << " "; std::cout << std::endl;

    std::cout << "After reduce:" << std::endl;
    array.DeleteLast();
    std::cout << "Mas size = " << array.Size() << std::endl;
    for(int i = 0; i < array.Size(); i++)
        std::cout << array.GetFrom(i) << " "; std::cout << std::endl;

    std::cout << "Maximum value:" << std::endl;
    std::cout << array.GetMax() << std::endl;

    std::cout << "Minimum value:" << std::endl;
    std::cout << array.GetMin() << std::endl;

    std::cout << "After deleting in center:" << std::endl;
    array.DeleteCenter(6);
    std::cout << "Mas size = " << array.Size() << std::endl;
    for(int i = 0; i < array.Size(); i++)
        std::cout << array.GetFrom(i) << " "; std::cout << std::endl;

    std::cout << "Last element is:" << std::endl;
    std::cout << array.GetLast() << std::endl;

    std::cout << "After deleting at the beginning:" << std::endl;
    array.DeleteFirst();
    std::cout << "Mas size = " << array.Size() << std::endl;
    for(int i = 0; i < array.Size(); i++)
        std::cout << array.GetFrom(i) << " "; std::cout << std::endl;

    std::cout << "First element is:" << std::endl;
    std::cout << array.GetFirst() << std::endl;
    return 0;


}