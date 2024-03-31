
### Set in C++
- [SET](#set)
- [Unordered Set](#unordered-set)
### SET
#### Introduction:
- `set` is an associative container that stores unique elements in sorted order.
- It is part of the Standard Template Library (STL) and is defined in the `<set>` header.

#### 1. Declaration and Initialization:
```cpp
#include <set>

// Declaring a set of integers
std::set<int> mySet;

// Initializing with values
std::set<int> mySet = {3, 1, 4, 1, 5, 9, 2, 6, 5};
```

#### 2. Insertion and Deletion:
```cpp
// Inserting an element
// Returns a pair of iterator to the inserted element and a boolean indicating success or failure
auto result = mySet.insert(value);
// Example usage:
if (result.second) {
    // Insertion was successful
} else {
    // Element already exists
}

// Deleting an element
// Returns the number of elements erased (0 or 1)
int erasedCount = mySet.erase(value);
// Example usage:
if (erasedCount > 0) {
    // Element was erased
} else {
    // Element was not found
}
```

#### 3. Accessing Elements:
```cpp
// Checking if an element exists
// Returns an iterator to the element if found, otherwise returns end()
auto it = mySet.find(value);
if (it != mySet.end()) {
    // Element exists
} else {
    // Element does not exist
}

// Getting the iterator to the first element
auto firstElement = mySet.begin();
```

#### 4. Size:
```cpp
// Size of the set (number of elements)
// Returns the number of elements in the set
size_t size = mySet.size();
```

#### 5. Iterating Over Elements:
```cpp
// Iterating over elements
// Returns each element by value
for (const auto& element : mySet) {
    // Do something with element
}
```

#### Time Complexities and Return Types:

| Operation         | Time Complexity         | Return Type                             |
|-------------------|-------------------------|-----------------------------------------|
| Accessing         | O(log n)                | Iterator to element or `end()`          |
| Insertion         | O(log n)                | Pair of iterator and boolean            |
| Deletion          | O(log n)                | Number of elements erased (0 or 1)      |
| Size              | O(1)                    | `size_t`                                |

#### Conclusion:
- `set` maintains elements in sorted order, allowing efficient lookup and insertion.
- Return types for various operations provide useful information such as success/failure of insertion, existence of elements, and the number of elements erased.
- Operations like insertion, deletion, and search have logarithmic time complexity.
- Understanding both the return values and time complexities is crucial for utilizing the `set` container effectively in C++.
---

### Unordered Set

#### Introduction:
- `unordered_set` is an associative container that stores unique elements in an unordered manner.
- It is part of the Standard Template Library (STL) and is defined in the `<unordered_set>` header.
- Unlike `set`, elements in `unordered_set` are not stored in sorted order. Instead, they are hashed into buckets for quick access.

#### 1. Declaration and Initialization:
```cpp
#include <unordered_set>

// Declaring an unordered_set of integers
std::unordered_set<int> myUnorderedSet;

// Initializing with values
std::unordered_set<int> myUnorderedSet = {3, 1, 4, 1, 5, 9, 2, 6, 5};
```

#### 2. Insertion and Deletion:
```cpp
// Inserting an element
// Returns a pair of iterator to the inserted element and a boolean indicating success or failure
auto result = myUnorderedSet.insert(value);
// Example usage:
if (result.second) {
    // Insertion was successful
} else {
    // Element already exists
}

// Deleting an element
// Returns the number of elements erased (0 or 1)
int erasedCount = myUnorderedSet.erase(value);
// Example usage:
if (erasedCount > 0) {
    // Element was erased
} else {
    // Element was not found
}
```

#### 3. Accessing Elements:
```cpp
// Checking if an element exists
// Returns an iterator to the element if found, otherwise returns end()
auto it = myUnorderedSet.find(value);
if (it != myUnorderedSet.end()) {
    // Element exists
} else {
    // Element does not exist
}
```

#### 4. Size:
```cpp
// Size of the unordered_set (number of elements)
// Returns the number of elements in the set
size_t size = myUnorderedSet.size();
```

#### 5. Iterating Over Elements:
```cpp
// Iterating over elements
// Returns each element by value
for (const auto& element : myUnorderedSet) {
    // Do something with element
}
```

#### Time Complexities and Return Types:

| Operation         | Average Time Complexity | Worst Case Time Complexity | Return Type                             |
|-------------------|-------------------------|---------------------------|-----------------------------------------|
| Accessing         | O(1)                    | O(n)                      | Iterator to element or `end()`          |
| Insertion         | O(1)                    | O(n)                      | Pair of iterator and boolean            |
| Deletion          | O(1)                    | O(n)                      | Number of elements erased (0 or 1)      |
| Size              | O(1)                    | O(1)                      | `size_t`                                |

#### Conclusion:
- `unordered_set` provides fast element insertion, deletion, and lookup with constant time complexity on average.
- However, in the worst case, some operations might degrade to linear time complexity due to collisions.
- Return types for various operations provide useful information such as success/failure of insertion, existence of elements, and the number of elements erased.
- Understanding both the return values and time complexities is crucial for utilizing the `unordered_set` container effectively in C++.