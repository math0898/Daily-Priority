#include <fstream>
#include <iostream>
#include "task.h"
#include "list.h"

using namespace std;

/**
 * Creates a new task by importing it from the given file.
 * 
 * TODO: Binary?
 * 
 * @param filename The relative path to the file to import.
 */
Task::Task (std::string filename) {
    ifstream* output = new ifstream(filename);
    *output >> this->name;
    string t;
    *output >> t;
    this->priority = atoi(t.c_str());
    if (!output->eof()) {
        // TODO implement.
    }
}

/**
 * Adds a line to the descrption of the task.
 * 
 * @param line The line to add to the task description.
 */
void Task::addDescLine (std::string line) {
    // TODO implement.
}

/**
 * Saves the task to the given relative path. This method will overwrite and create new files if necessary.
 * 
 * TODO: Binary?
 * 
 * @param filename The relative path to the save location.
 */
void Task::save (std::string filename) {
    // TODO implement.
}
