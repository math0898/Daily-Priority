#ifndef LIST_H
#define LIST_H

template <class T>

/**
 * A singly linked list with a pointer to the head node and another at the end for adding. Access to the middle is not needed 
 * unless the previous members are needed too. Adding to the end should be O(c).
 * 
 * @author Sugaku
 */
class List {

    private:

        /**
         * The inner node class just needs the data in the node and a pointer to the next node in the list.
         * 
         * @author Sugaku
         */
        class Node {

            public:
                    /**
                     * The actual data stored in the node.
                     */
                    T data;

                    /**
                     * A pointer to the next node in a list.
                     */
                    Node* next;

                    /**
                     * Creates a new node with the given data and pointer.
                     * 
                     * @param data The data to store in this node.
                     * @param next The pointer to store as 'next'.
                     */
                    Node (T data, Node* next) : data(data), next(next) {}
        };

        /**
         * A pointer to the current node. This is used for iterating the list.
         */
        Node* iterator;

        /**
         * Pointer to the head of the list. Used for restarting the iterator.
         */
        Node* head;

        /**
         * Since we would like to add things in O(c) there should be a pointer to the end.
         */
        Node* tail;

    public: //TODO add deconstructor. Nodes shouldn't need anything but the default.

        /**
         * The default constructor for a list object. Sets the head/tail pointers to a nullptr so everything is ready to go.
         */
        List ();

        /**
         * Checks if there is another node inside of the list.
         * 
         * @return True if and only if there is another node in the list.
         */
        bool hasNext ();

        /**
         * Gets the data inside of the next node in the list.
         * 
         * @return The string in the next node.
         */
        T next ();

        /**
         * Resets the iterator to the head. Does not visit the first node in the list.
         */
        void resetIterator ();

        /**
         * Adds the given string to the list. This will create a new node on the stack and update appropriate pointers.
         * 
         * @param s The string to add in a new node.
         */
        void add (T s);
};

#endif /* LIST_H */
