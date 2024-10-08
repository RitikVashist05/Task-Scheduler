
#include "TaskScheduler.h"
#include <queue>
#include <iostream>
#include <unordered_map>

using namespace std;

void TaskScheduler::addTask(int taskId, int priority, const vector<int>& dependencies) {
    Task task(taskId, priority, dependencies);
    tasks[taskId] = task;
    adjacencyList[taskId] = dependencies;
}

vector<int> TaskScheduler::topologicalSort() {
    unordered_map<int, int> inDegree;
    for (const auto& entry : adjacencyList) {
        for (int dep : entry.second) {
            inDegree[dep]++;
        }
    }

    priority_queue<pair<int, int>> pq; // max heap (priority, taskId)
    for (const auto& task : tasks) {
        if (inDegree[task.first] == 0) {
            pq.push({task.second.priority, task.first});
        }
    }

    vector<int> sortedOrder;
    while (!pq.empty()) {
        int taskId = pq.top().second;
        pq.pop();
        sortedOrder.push_back(taskId);

        for (int dep : adjacencyList[taskId]) {
            inDegree[dep]--;
            if (inDegree[dep] == 0) {
                pq.push({tasks[dep].priority, dep});
            }
        }
    }

    return sortedOrder;
}

vector<int> TaskScheduler::scheduleTasks() {
    return topologicalSort();
}
