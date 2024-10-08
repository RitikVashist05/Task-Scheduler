
#ifndef TASKSCHEDULER_H
#define TASKSCHEDULER_H

#include "Task.h"
#include <vector>
#include <unordered_map>
using namespace std;

class TaskScheduler {
public:
    void addTask(int taskId, int priority, const vector<int>& dependencies);
    vector<int> scheduleTasks();

private:
    unordered_map<int, Task> tasks;
    unordered_map<int, vector<int>> adjacencyList;
    vector<int> topologicalSort();
};

#endif
