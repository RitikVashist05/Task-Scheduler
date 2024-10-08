
#include "utils.h"
#include <iostream>
#include <vector>

using namespace std;

void printTaskDetails(int taskId, int priority, const vector<int>& dependencies) {
    cout << "Task ID: " << taskId << ", Priority: " << priority << ", Dependencies: ";
    for (int dep : dependencies) {
        cout << dep << " ";
    }
    cout << endl;
}

void printScheduledOrder(const vector<int>& order) {
    cout << "Scheduled Task Order: ";
    for (int taskId : order) {
        cout << taskId << " ";
    }
    cout << endl;
}
