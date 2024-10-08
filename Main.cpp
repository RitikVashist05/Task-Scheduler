
#include <iostream>
#include "TaskScheduler.h"
#include "utils.h"
using namespace std;

int main() {
    TaskScheduler scheduler;

    int numTasks;
    cout << "Enter number of tasks: ";
    cin >> numTasks;

    for (int i = 0; i < numTasks; ++i) {
        int taskId, priority, numDependencies;
        cout << "Enter task ID: ";
        cin >> taskId;
        cout << "Enter task priority: ";
        cin >> priority;
        cout << "Enter number of dependencies: ";
        cin >> numDependencies;

        vector<int> dependencies;
        for (int j = 0; j < numDependencies; ++j) {
            int depId;
            cout << "Enter dependency task ID: ";
            cin >> depId;
            dependencies.push_back(depId);
        }

        scheduler.addTask(taskId, priority, dependencies);
        printTaskDetails(taskId, priority, dependencies);
    }

    vector<int> scheduledOrder = scheduler.scheduleTasks();
    printScheduledOrder(scheduledOrder);

    return 0;
}
