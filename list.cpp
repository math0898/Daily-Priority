#include <iostream>
#include "list.h"

using namespace std;

/**
 * The default constructor for a list object. Sets the head/tail pointers to a nullptr so everything is ready to go.
 */
List::List () {
    this->head = nullptr;
    this->tail = nullptr;
    this->iterator = nullptr;
}

/**
 * Checks if there is another node inside of the list.
 * 
 * @return True if and only if there is another node in the list.
 */
bool List::hasNext () {
    return this->iterator == nullptr;
}

/**
 * Gets the data inside of the next node in the list.
 * 
 * @return The string in the next node.
 */
string List::next () {
    if (this->iterator == nullptr) return NULL;
    else {
        string r = this->iterator->data;
        this->iterator = this->iterator->next;
        return r;
    }
}

/**
 * Resets the iterator to the head. Does not visit the first node in the list.
 */
void List::resetIterator () {
    this->iterator = this->head;
}

/**
 * Adds the given string to the list. This will create a new node on the stack and update appropriate pointers.
 * 
 * @param s The string to add in a new node.
 */
void List::add (string s) {
    Node* node = new Node(s, nullptr);
    if (this->tail == nullptr) { // Empty list
        this->tail = node;
        this->head = node;
    } else this->tail->next = node;
}
