#ifndef TERMINAL_INTERFACE_H
#define TERMINAL_INTERFACE_H

#include "userInterface.h"

/**
 * The terminal interace simply defines a simple interface that works in the terminal by clearing it at the start of every draw()
 * call.
 * 
 * @author Sugaku
 */
class TerminalInterface : public UserInterface {

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

#endif /* TERMINAL_INTERFACE_H */
