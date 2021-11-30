#include "list.h"

using namespace std;

/**
 * The default constructor for a list object. Sets the head/tail pointers to a nullptr so everything is ready to go.
 */
List<class T>::List () {
    this->head = nullptr;
    this->tail = nullptr;
    this->iterator = nullptr;
}

/**
 * Checks if there is another node inside of the list.
 * 
 * @return True if and only if there is another node in the list.
 */
bool List<class T>::hasNext () {
    return this->iterator == nullptr;
}

/**
 * Gets the data inside of the next node in the list.
 * 
 * @return The string in the next node.
 */
template <class T>
T List<class T>::next () {
    if (this->iterator == nullptr) return (T) NULL;
    else {
        T r = this->iterator->data;
        this->iterator = this->iterator->next;
        return r;
    }
}

/**
 * Resets the iterator to the head. Does not visit the first node in the list.
 */
void List<class T>::resetIterator () {
    this->iterator = this->head;
}

/**
 * Adds the given string to the list. This will create a new node on the stack and update appropriate pointers.
 * 
 * @param s The string to add in a new node.
 */
template <class T>
void List<class T>::add (T s) {
    Node* node = new Node<T>(s, nullptr);
    if (this->tail == nullptr) { // Empty list
        this->tail = node;
        this->head = node;
    } else this->tail->next = node;
}
