## Queue in C++

#### Introduction:
- A queue is a linear data structure that follows the First In, First Out (FIFO) principle.
- It is typically implemented using arrays or linked lists.
- In C++, you can use the `std::queue` container adapter, which is part of the Standard Template Library (STL) and is defined in the `<queue>` header.

#### 1. Declaration and Initialization:
```cpp
#include <queue>

// Declaration of a queue of integers
std::queue<int> myQueue;

// Initializing a queue with values
std::queue<int> myQueue({1, 2, 3, 4, 5});
```

#### 2. Enqueue and Dequeue Operations:
```cpp
// Enqueuing elements into the queue
myQueue.push(6);
myQueue.push(7);

// Dequeuing elements from the queue
myQueue.pop();
```

#### 3. Accessing Elements:
```cpp
// Accessing the front element of the queue
int frontElement = myQueue.front();

// Accessing the back element of the queue
int backElement = myQueue.back();
```

#### 4. Checking if Queue is Empty:
```cpp
// Checking if the queue is empty
bool isEmpty = myQueue.empty();
```

#### Time Complexities:

| Operation         | Time Complexity |
|-------------------|-----------------|
| Enqueue (push)    | O(1)            |
| Dequeue (pop)     | O(1)            |
| Front             | O(1)            |
| Back              | O(1)            |
| Empty             | O(1)            |

#### Conclusion:
- Queue is a fundamental data structure with operations that follow the First In, First Out (FIFO) principle.
- In C++, you can use the `std::queue` container adapter provided by the STL for queue operations.
- Enqueuing, dequeuing, accessing the front and back elements, and checking if the queue is empty all have constant time complexity.
- Understanding the time complexities of queue operations is essential for writing efficient code, especially when dealing with large datasets or implementing algorithms that use queues.