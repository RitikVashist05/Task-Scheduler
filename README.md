# Task Scheduler

## Overview

A C++ Task Scheduler application that implements a priority-based topological sorting algorithm for efficient task scheduling with dependency management.

## Features

- Priority-based task scheduling
- Dependency resolution
- Interactive task input
- Topological sorting algorithm

## Prerequisites

- C++ Compiler (C++11 or later)
- Standard C++ libraries

## Project Structure

```
project-root/
│
├── src/
│   ├── main.cpp
│   ├── Task.h
│   ├── TaskScheduler.h
│   ├── TaskScheduler.cpp
│   ├── utils.h
│   └── utils.cpp
│
├── README.md
└── Makefile
```

## Installation

### Clone the Repository

```bash
git clone https://github.com/yourusername/task-scheduler.git
cd task-scheduler
```

### Compile the Project

```bash
g++ -std=c++11 src/main.cpp src/TaskScheduler.cpp src/utils.cpp -o task_scheduler
```

## Usage

### Run the Application

```bash
./task_scheduler
```

### Example Input

```
Enter number of tasks: 3
Enter task ID: 1
Enter task priority: 5
Enter number of dependencies: 0
Enter task ID: 2
Enter task priority: 3
Enter number of dependencies: 1
Enter dependency task ID: 1
Enter task ID: 3
Enter task priority: 4
Enter number of dependencies: 1
Enter dependency task ID: 2
```

## How It Works

The Task Scheduler uses a modified topological sorting algorithm with a priority queue to:
- Manage task dependencies
- Prioritize tasks based on their assigned priority
- Ensure dependencies are resolved before task execution

### Key Components

1. **Task Class**: Represents individual tasks with ID, priority, and dependencies
2. **TaskScheduler**: Manages task addition and scheduling
3. **Topological Sort**: Determines optimal task execution order

## Algorithmic Approach

- Tracks dependencies using an adjacency list
- Uses a max-heap to prioritize tasks
- Ensures all dependencies are resolved before scheduling

## Potential Improvements

- [ ] Add error handling for circular dependencies
- [ ] Implement persistent task storage
- [ ] Create more sophisticated priority calculation
- [ ] Add task duration tracking
- [ ] Develop dependency visualization

## Limitations

- Does not handle cyclic dependencies
- Requires unique task IDs
- In-memory task management only

## Code Explanation

### Task Representation

```cpp
struct Task {
    int id;
    int priority;
    vector<int> dependencies;
};
```

### Scheduling Algorithm

The `topologicalSort()` method in `TaskScheduler` uses a priority queue to:
1. Track task in-degrees
2. Start with tasks having no dependencies
3. Prioritize tasks based on their priority
4. Resolve dependencies incrementally

## Contributing

1. Fork the repository
2. Create a feature branch
3. Commit your changes
4. Push to the branch
5. Create a pull request

## Build and Test

### Compile

```bash
make
```

### Run Tests

```bash
make test
```

## Performance

- Time Complexity: O(V + E log V)
- Space Complexity: O(V + E)

Where V = number of vertices (tasks), E = number of edges (dependencies)
`

