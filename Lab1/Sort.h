
#ifndef SORT_H
#define SORT_H

#include "..\Lab1\Comparator.h"
#include "..\Lab1\DefaultComparator.h"

/**
 * @brief
 * Functional interface for sort arrays.
 * @tparam  T   Class or primitive with override relational operators or have it own Comparator.
 */
template <class T>
class Sort {
public:
    /**
     * @brief
     * Virtual method for sort arrays by Comparator or relational operators(if point on Comparator == nullptr);
     * @param   arr         Array which we want to sort.
     * @param   size        Size of our array.
     * @param   comparator  Functional interface for compare 2 objects. DefaultComparator if not init.
     */
    virtual void sort(T* arr, int size, Comparator<T>* comparator = new DefaultComparator<T>) = 0;
};


#endif
