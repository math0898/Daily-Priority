#ifndef USER_INTERFACE_H
#define USER_INTERFACE_H

#include <iostream>

#define UI_ERROR -1
#define UI_MAIN 0

/**
 * An abstract class to handle the UI situation. I can hopefully eventually upgrade the UI a few times throughout the project and
 * having this will allow me to change less code during upgrades.
 * 
 * @author Sugaku
 */
class UserInterface {

    private:

        /**
         * The current state of the user interface.
         */
        short state;

    public:

        /**
         * Draws the current state of the UI to the screen.
         */
        void draw ();

        /**
         * Gets the requested operation from the user. The form this takes will likely need to be changed in the future but for
         * now it is a string.
         * 
         * @param store The string pointer to store the user input in.
         */
        void getAction (std::string* store);

        /**
         * Returns the current state of the user interface.
         *
         * @return The current state of this interface.
         */
        short getState ();
};

#endif /* USER_INTERFACE_H */
