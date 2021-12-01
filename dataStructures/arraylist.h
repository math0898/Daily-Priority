#ifndef ARRAYLIST_H
#define ARRAYLIST_H

template <class T>

/**
 * To hold all of the tasks I would like a dynamically allocated datastructure where I can access the middle at near O(c). For
 * this I am willing to sacrafice adding in O(c). Hence the need to create an ArrayList.
 * 
 * @author Sugaku
 */
class ArrayList { // TODO add deconstructor, add operator =, copy constructor, remove(int) + remove(obj) <-- deletes object
    
    private:

        /**
         * The actual array behind the scenes that makes things function.
         */
        T* data;

        /**
         * This is the current size of the ArrayList.
         */
        int size;

        /**
         * The number of 'slots' allocated in memory for the current data array.
         */
        int allocated;

    public:

        /**
         * Creates a new ArrayList that does not have any data.
         */
        ArrayList ();

        /**
         * Iterates through a few lists before accessing the array where this index is stored. The object stored there is 
         * then returned.
         * 
         * @param i The index of the item to retrieve.
         */
        T get (int i);

        /**
         * Adds the given object to the ArrayList. This may take O(n) occasionally but usually takes O(c).
         * 
         * @param t The object to add to the arraylist.
         */
        void add (T t);

        /**
         * Returns the current size of the ArrayList.
         * 
         * @return The size of the ArrayList.
         */
        int getSize ();
};

#endif /* ARRAYLIST_H */
