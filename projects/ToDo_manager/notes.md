# Core requirements

      - C++ compiler:
            - Clang
      - Data structures:
            - std::vector for storage
            - std::string for task
      - File I/O:
            - fstream to save/load task to .txt or .dat file
              so data isn't lost
      - Logic:
            - ==Task== class or struct to hold the description
              and completion status

# Implementation steps

      - define a Task struct:
            - create a structure with a string for the name and
              a bool for the status
      - create a menu loop:
            - use a while loop with a switch state cases for user
              input (Add, View, Delete, Save, Exit)
      - handle input:
            - use getline(cin, variable) to capture task with spaces
      - file management:
            - a function to loop through your vector and print each
              task to a file

# Structure example

| Feature     | Implementation                  |
| ----------- | ------------------------------- |
| Storage     | std::vector<Task> todoList;     |
| Persistence | ofstream outFile("task.txt");   |
| UI          | simple _cout_ console interface |
