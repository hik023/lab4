//
// Created by Александр Балаев on 16.12.16.
//

#include <iostream>
using namespace std;

template <typename T, int max = 1000>
class Stek {
    private:
        T *arr;
        int index;
        int count;
    public:
        Stek(int number) {
            index = 0;
            if (number <= max) {
                arr = new T[number];
                count = number;
            } else cout << "Превышено допустимое количество элементов в стеке!!";
        }

        ~Stek() {
            delete[] arr;
        }

        bool Push(T n) {
            if (index == count)
                return false;
            else {
                arr[index] = n;
                index++;
                return true;
            }
        }

        T Pop() {
            if (index < 0)
                return 0;
            else
                return arr[--index];
        }

        bool Is_empty() {
            if (index <= 0)
                return true;
            else
                return false;
        }

        bool Is_full() {
            if (index == count)
                return true;
            else
                return false;
        }
    };
