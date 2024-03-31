## Priority Queue in C++

#### Introduction:
- A priority queue is a type of queue where elements are stored based on their priority.
- Elements with higher priority are dequeued before elements with lower priority.
- In C++, you can use the `std::priority_queue` container adapter, which is part of the Standard Template Library (STL) and is defined in the `<queue>` header.

#### 1. Declaration and Initialization:
```cpp
#include <queue>

// Declaration of a priority queue of integers
std::priority_queue<int> myPriorityQueue;

// Initializing a priority queue with values
std::priority_queue<int> myPriorityQueue({1, 2, 3, 4, 5});
```

#### 2. Insertion:
```cpp
// Inserting elements into the priority queue
myPriorityQueue.push(6);
myPriorityQueue.push(7);
```

#### 3. Deletion (Top Element):
```cpp
// Removing the top element from the priority queue
myPriorityQueue.pop();
```

#### 4. Accessing Elements:
```cpp
// Accessing the top (highest priority) element of the priority queue
int topElement = myPriorityQueue.top();
```

#### 5. Checking if Priority Queue is Empty:
```cpp
// Checking if the priority queue is empty
bool isEmpty = myPriorityQueue.empty();
```

#### Time Complexities:

| Operation         | Time Complexity |
|-------------------|-----------------|
| Insertion         | O(log n)        |
| Deletion (pop)    | O(log n)        |
| Access (top)      | O(1)            |
| Empty             | O(1)            |

#### Conclusion:
- Priority queue is a fundamental data structure where elements are dequeued based on their priority.
- In C++, you can use the `std::priority_queue` container adapter provided by the STL for priority queue operations.
- Insertion and deletion operations have a time complexity of O(log n), where n is the number of elements in the priority queue.
- Accessing the top element and checking if the priority queue is empty have constant time complexity.
- Understanding the time complexities of priority queue operations is essential for writing efficient code, especially when dealing with large datasets or implementing algorithms that use priority queues.