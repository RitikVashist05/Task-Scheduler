
#ifndef TASK_H
#define TASK_H

#include <vector>
using namespace std;

struct Task {
    int id;
    int priority;
    vector<int> dependencies;

    Task(int taskId, int taskPriority, vector<int> deps)
        : id(taskId), priority(taskPriority), dependencies(deps) {}
};

#endif
