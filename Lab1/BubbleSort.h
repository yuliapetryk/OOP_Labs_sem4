#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include "..\Lab1\Sort.h"

template<class T>
class BubbleSort : public Sort<T> {
public:
    void sort(T* array , int size) {

        for (int step = 0; step < (size - 1); ++step) {
            int swapped = 0;           
            for (int i = 0; i < (size - step - 1); ++i) {               
                if (array[i] > array[i + 1]) {                    
                    T temp = array[i];
                    array[i] = array[i + 1];
                    array[i + 1] = temp;
                    swapped = 1;
                }
            }
            if (swapped == 0)
                break;
        }
    }
};


#endif
