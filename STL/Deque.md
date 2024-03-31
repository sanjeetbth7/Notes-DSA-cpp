## Deque in C++

#### Introduction:
- Deque, short for double-ended queue, is a linear data structure that allows insertion and deletion at both ends.
- It provides a more flexible alternative to vectors and lists in certain scenarios.
- In C++, you can use the `std::deque` container, which is part of the Standard Template Library (STL) and is defined in the `<deque>` header.

#### 1. Declaration and Initialization:
```cpp
#include <deque>

// Declaration of a deque of integers
std::deque<int> myDeque;

// Initializing a deque with values
std::deque<int> myDeque = {1, 2, 3, 4, 5};
```

#### 2. Insertion and Deletion:
```cpp
// Inserting elements at the front
myDeque.push_front(0);

// Inserting elements at the back
myDeque.push_back(6);

// Deleting elements from the front
myDeque.pop_front();

// Deleting elements from the back
myDeque.pop_back();
```

#### 3. Accessing Elements:
```cpp
// Accessing the first element
int firstElement = myDeque.front();

// Accessing the last element
int lastElement = myDeque.back();

// Accessing elements by index (random access)
int thirdElement = myDeque[2];
```

#### 4. Size:
```cpp
// Getting the size of the deque (number of elements)
size_t size = myDeque.size();
```

#### Time Complexities:

| Operation         | Time Complexity |
|-------------------|-----------------|
| Insertion (front) | O(1)            |
| Insertion (back)  | O(1)            |
| Deletion (front)  | O(1)            |
| Deletion (back)   | O(1)            |
| Access (front)    | O(1)            |
| Access (back)     | O(1)            |
| Access (random)   | O(1)            |
| Size              | O(1)            |

#### Conclusion:
- Deque is a versatile data structure that allows insertion and deletion at both ends.
- It provides constant time complexity for insertion, deletion, and access operations at both ends, as well as random access.
- In C++, `std::deque` is a useful container provided by the STL for implementing double-ended queues efficiently.
- Understanding the time complexities of deque operations is essential for choosing the right data structure and writing efficient code.