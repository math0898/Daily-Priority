#include "arraylist.h"

/**
 * Iterates through a few lists before accessing the array where this index is stored. The object stored there is 
 * then returned.
 * 
 * @param i The index of the item to retrieve.
 */
template <class T>
T ArrayList<class T>::get (int i) {
    if (i > size || i < 0) throw "ArrayList<>::get(): Index out of bounds.";
    return data[i];
}

/**
 * Adds the given object to the ArrayList. This may take O(n) occasionally but usually takes O(c).
 * 
 * @param t The object to add to the arraylist.
 */
template <class T>
void ArrayList<class T>::add (T t) {
    if (size == allocated) {
        T* temp = new T[size];
        for (int i = 0; i < size; i++) temp[i] = data[i];
        allocated *= 2;
        data = new T[allocated];
        for (int i = 0; i < size; i++) data[i] = temp[i];
        delete(temp);
    }
    data[size] = t;
    size++;
}

/**
 * Returns the current size of the ArrayList.
 * 
 * @return The size of the ArrayList.
 */
int ArrayList<class T>::getSize () {
    return size;
}
