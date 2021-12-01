#include <iostream>
#include "dataStructures/task.h"
#include "dataStructures/arraylist.h"
#include "commandInterfaces/userInterface.h"
#include "commandInterfaces/terminalInterface.h"

using namespace std;

namespace framework { // TODO: Consider moving to another file.

    /**
     * Takes a user input, along with the current state of the tasks, and interface from which actions are executed. It 
     * returns a short value depending on how the execution went or if terminating is desired.
     * 
     * @param action The input the user sent and the action that should be taken.
     * @param tasks A pointer to the currently loaded tasks.
     * @param UI The current state of the user interface. Used for updating the interface.
     * 
     * @return 1 - Request handled.
     * @return 0 - User requested that the program should terminate.
     * @return -1 - Unknown request. Perhaps the user should look at help.
     */
    short handle (string* action, ArrayList<Task>* tasks, UserInterface* UI) {
        short state = UI->getState();
        if (state == UI_ERROR) return 0;
        else if (*action == "EXIT") return 0; // TODO case insensitive.
        else if (state == UI_MAIN) {
            // TODO implement.
        }
    }
}

using namespace framework;

int main () {
    bool exit = false;
    string* action;
    UserInterface* UI = new TerminalInterface();
    ArrayList<Task>* tasks = new ArrayList<Task>(); // TODO add loading section.
    while (!exit) {
        UI->draw();
        UI->getAction(action);
        exit = handle(action, tasks, UI);
    }
    // TODO add saving section.
}
