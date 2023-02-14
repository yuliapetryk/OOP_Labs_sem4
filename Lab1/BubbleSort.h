
#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include "..\Lab1\Sort.h"

/**
 * @brief
 * Class implements Sort interface. It sort arrays by Bubble sort.
 * @tparam  T   Class or primitive with override relational operators or have it own Comparator.
 */
template<class T>
class BubbleSort : public Sort<T> {
public:
    /**
     * @brief
     * Method for sort arrays by Bubble sort by Comparator or relational operators(if point on Comparator == nullptr);
     * @param   arr         Array which we want to sort.
     * @param   size        Size of our array.
     * @param   comparator  Functional interface for compare 2 objects. DefaultComparator if not init.
     */
    void sort(T* arr, int size, Comparator<T>* comparator = new DefaultComparator<T>) override {
        T temp;

        for (int i = 1; i < size; i++) {
            for (int j = 0; j < size - i; j++) {
                if (comparator->compare(arr[j], arr[j + 1]) == 1) {
                    temp = arr[j + 1];
                    arr[j + 1] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
};


#endif
