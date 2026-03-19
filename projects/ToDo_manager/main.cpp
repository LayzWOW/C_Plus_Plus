#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

struct Task {
      string description;
      bool isDone;
};

class TodoManager {
private:
      vector<Task> tasks;
      const string filename = "tasks.txt";

public:
      void addTask(string desc) {
            tasks.push_back({desc, false});
      }

      void showTasks() {
            for (int i = 0; i < tasks.size(); i++) {
                  cout << i + 1 << ". [" << (tasks[i].isDone ? "X" : " ") << "] " << tasks[i].description << endl;
            }
      }

      void saveToFile() {
            ofstream file(filename);
            for (const auto& t : tasks) {
                  file << t.description << "," << t.isDone << endl;
            }
            file.close();
      }
};

int main() {
      TodoManager myTodo;
      // Add your menu loop here
      return 0;
}
