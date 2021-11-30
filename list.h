#ifndef LIST_H
#define LIST_H

/**
 * A singly linked list with a pointer to the head node and another at the end for adding. Access to the middle is not needed 
 * unless the previous members are needed too. Adding to the end should be O(c).
 * 
 * @author Sugaku
 */
class List {

    private:
        class Node {
            // TODO This needs a full generic implementation... I've heard generics are fun in C++. The list will be used to 
            //  access data so the generics will be needed there too. (templates)
        };

    public:
        List ();
};

#endif /* LIST_H */
