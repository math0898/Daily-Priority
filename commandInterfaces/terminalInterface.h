#ifndef TERMINAL_INTERFACE_H
#define TERMINAL_INTERFACE_H

#include <sys/ioctl.h> // This might cause issues cross platform, see 'TerminalInterface::draw' for usage
#include <stdio.h> // see 'TerminalInterface::draw' for usage
#include "userInterface.h"
#include "../dataStructures/arraylist.h"
#include "../dataStructures/task.h"

// Linux only
#define BOLD "\x1b[1m"
#define NO_COLOR "\x1b[0m"

using namespace std;

/**
 * The menus namespace is a block of code used to draw different states to the terminal. I've decided to put it into a
 * namespace in hopes of trying to keep it partially seperated from the class definitions also present in this file.
 */
namespace menus {

    /**
     * Draws the main menu to cout.
     * 
     * @param width The number of characters that can be printed horizontally.
     * @param height the number of lines that can be printed.
     */
    void drawMain (int width, int height) {
        cout << BOLD << "Tasks by priority" << NO_COLOR << endl;
        cout << endl; // TODO add the actual tasks.
    }
}

/**
 * The terminal interace simply defines a simple interface that works in the terminal by clearing it at the start of every draw()
 * call.
 * 
 * @author Sugaku
 */
class TerminalInterface : public UserInterface {

    public: 

        /**
         * Creates a new UI using the given pointer to access the current tasks data.
         * 
         * @param tasks A pointer to the ArrayList of tasks.
         */
        TerminalInterface (ArrayList<Task>* tasks) : UserInterface(tasks) {}

        /**
         * Draws the current state of the UI to the screen.
         */
        void draw () {
            /*
             * To print a nicely formatted display to the terminal I would like to know the current width of the terminal. The 
             * height is helpful but less important. 
             * 
             * To accomplish this there is an awnser for C by 4pie0 on stackoverflow. This code snippet is from there.
             * https://stackoverflow.com/questions/23116284/how-to-get-the-terminal-dimensions-in-c-code
             */
            struct winsize w;
            ioctl(0, TIOCGWINSZ, &w);
            /* End snippet */
            switch (state) {
                case 0: menus::drawMain(w.ws_col, w.ws_row); break; // UI_MAIN
            }
            cout << ">";
        }

        /**
         * Gets the requested operation from the user. The form this takes will likely need to be changed in the future but for
         * now it is a string.
         * 
         * @return The action requested by the user in the form of a string.
         */
        std::string getAction () {
            std::string s;
            std::getline(std::cin, s);
            return s;
        }

        /**
         * Returns the current state of the user interface.
         *
         * @return The current state of this interface.
         */
        short getState () {
            return state;
        }

};

#endif /* TERMINAL_INTERFACE_H */
