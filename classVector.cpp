//
// Created by eternalxijaderod on 23.12.2021.
//
#include <iostream>
#include "classVector.hpp"
namespace ts
{
    void Vect::Reduce1Array()
    {
        if(size>0) {
            int *tempArray = new int[size - 1];
            for (int i = 0; i < size - 1; ++i) {
                tempArray[i] = array[i];
            }
            delete[] array;
            array = tempArray;
        }
        else
            std::cout << "ERROR! Array = 0! You can not do it!" << std::endl;
    }

    void Vect::Expand1Array()
    {
        int *tempArray = new int[size+1];
        for (int i = 0; i < size; ++i)
        {
            tempArray[i] = array[i];
        }
        delete[] array;
        array = tempArray;
    }

    void Vect::Add(int number)
    {
        Expand1Array();
        array[size] = number;
        size++;
    }

    void Vect::AddTo(int number, int wherePaste)
    {
        if(wherePaste <= size && wherePaste >= 0)
        {
            Expand1Array();
            for (int i = size - 1; i > wherePaste - 1; --i)
            {
                array[i + 1] = array[i];
            }
            array[wherePaste] = number;
            size++;
        }
    }

    void Vect::DeleteLast()
    {
        if(size>0)
        {
            Reduce1Array();
            size--;
        }
        else
            std::cout << "ERROR! Array = 0! You can not do it!" << std::endl;
    }

    void Vect::DeleteFirst()
    {
        if(size>0)
        {
            for (int i = 0; i < size - 1; ++i) {
                array[i] = array[i + 1];
            }
            Reduce1Array();
            size--;
        }
        else
            std::cout << "ERROR! Array = 0! You can not do it!" << std::endl;
    }

    void Vect::DeleteCenter(int numberElement)
    {
        if(size>0)
        {
            if(numberElement >= 0 && numberElement <= size)
            {
                for (int i = numberElement; i < size - 1; ++i) {
                    array[i] = array[i + 1];
                }
                Reduce1Array();
                size--;
            }
            else
                std::cout << "ERROR! numberElement is incorrect!" << std::endl;
        }
        else
            std::cout << "ERROR! Array = 0! You can not do it!" << std::endl;
    }

    int Vect::GetLast() {if(size>0) return array[size-1]; else{ std::cout << "ERROR! Array is empty" << std::endl; return -1;}}

    int Vect::GetFirst() {if(size>0) return array[0]; else{ std::cout << "ERROR! Array is empty" << std::endl; return -1;}}

    int Vect::Size() {return size;}


    int Vect::GetMax()
    {
        if(size>0)
        {
            int max = INT_MIN;
            for (int i = 0; i < size; i++)
                if (array[i] > max)
                    max = array[i];
            return max;
        }
        else
        {
            std::cout << "ERROR! Array is empty" << std::endl;
            return -1;
        }
    }

    int Vect::GetMin()
    {
        if(size>0)
        {
            int min = INT_MAX;
            for (int i = 0; i < size; i++)
                if (array[i] < min)
                    min = array[i];
            return min;
        }
        else
        {
            std::cout << "ERROR! Array is empty" << std::endl;
            return -1;
        }
    }

    int Vect::GetFrom(int numberElement)
    {
        if(numberElement >= 0 && numberElement < size)
        return array[numberElement];
    }

}