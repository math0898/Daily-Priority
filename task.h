#ifndef TASK_H
#define TASK_H

#include <iostream>
#include "list.h"

/**
 * The task class describes how tasks are saved, loaded, and used during runtime.
 * 
 * @author Sugaku
 */
class Task {

    private:

        /**
         * The given name of the task.
         */
        std::string name;

        /**
         * The given description of the task. Can be an array of strings, each representing a single line.
         */
        List description;

        /**
         * The priority of this task.
         */
        int priority;

    public:

        /**
         * The default constructor for a new task. Requires a name and priority.
         * 
         * @param name The name that the task will go by.
         * @param priority The priority of the task will be set at.
         */
        Task (std::string name, int priority) : name(name), priority(priority), description(List()) {}

        /**
         * Creates a new task by importing it from the given file.
         * 
         * TODO: Binary?
         * 
         * @param filename The relative path to the file to import.
         */
        Task (std::string filename);

        /**
         * Destroys the task by properly deconstructing the pointers.
         */
        ~Task ();

        /**
         * Adds a line to the descrption of the task.
         * 
         * @param line The line to add to the task description.
         */
        void addDescLine (std::string line);

        /**
         * Saves the task to the given relative path. This method will overwrite and create new files if necessary.
         * 
         * @param filename The relative path to the save location.
         */
        void save (std::string filename);
};

#endif /* TASK_H */
