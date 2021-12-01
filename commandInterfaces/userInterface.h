#ifndef USER_INTERFACE_H
#define USER_INTERFACE_H

#include <iostream>
#include "../dataStructures/arraylist.h"
#include "../dataStructures/task.h"

#define UI_ERROR -1
#define UI_MAIN 0

/**
 * An abstract class to handle the UI situation. I can hopefully eventually upgrade the UI a few times throughout the project and
 * having this will allow me to change less code during upgrades.
 * 
 * @author Sugaku
 */
class UserInterface {

    protected:

        /**
         * The current state of the user interface.
         */
        short state;

        /**
         * A pointer to the object storing all of the current tasks.
         */
        ArrayList<Task>* tasks;

    public:

        /**
         * Creates a new UI using the given pointer to access the current tasks data.
         * 
         * @param tasks A pointer to the ArrayList of tasks.
         */
        UserInterface (ArrayList<Task>* tasks) : tasks(tasks) {
            state = UI_MAIN;
        }

        /**
         * Draws the current state of the UI to the screen.
         */
        void draw () {}

        /**
         * Gets the requested operation from the user. The form this takes will likely need to be changed in the future but for
         * now it is a string.
         * 
         * @return The action requested by the user in the form of a string.
         */
        std::string getAction () { return ""; }

        /**
         * Returns the current state of the user interface.
         *
         * @return The current state of this interface.
         */
        short getState () { return 0; }
};

#endif /* USER_INTERFACE_H */
