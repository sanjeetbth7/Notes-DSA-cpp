## Pair in C++

#### Introduction:
- `pair` is a simple data structure in C++ that holds two values of potentially different types.
- It is part of the Standard Template Library (STL) and is defined in the `<utility>` header.

#### 1. Declaration and Initialization:
```cpp
#include <utility>

// Declaration of a pair with integer values
std::pair<int, int> myPair;

// Initializing a pair with values
std::pair<int, std::string> myPair = std::make_pair(42, "Hello");
```

#### 2. Accessing Elements:
```cpp
// Accessing first and second elements of the pair
int first = myPair.first;
std::string second = myPair.second;
```

#### 3. Comparison:
```cpp
// Comparing pairs
std::pair<int, int> pair1 = std::make_pair(10, 20);
std::pair<int, int> pair2 = std::make_pair(10, 20);

if (pair1 == pair2) {
    // Pairs are equal
} else {
    // Pairs are not equal
}
```

#### 4. Swapping:
```cpp
// Swapping pairs
std::pair<int, int> pair1 = std::make_pair(10, 20);
std::pair<int, int> pair2 = std::make_pair(30, 40);

pair1.swap(pair2);
// Now pair1 contains (30, 40) and pair2 contains (10, 20)
```

#### Time Complexities:

| Operation         | Time Complexity |
|-------------------|-----------------|
| Accessing         | O(1)            |
| Comparison        | O(1)            |
| Swapping          | O(1)            |

#### Conclusion:
- `pair` provides a convenient way to store two values of potentially different types together.
- Operations like accessing elements, comparing pairs, and swapping pairs have constant time complexity.
- It's commonly used in various scenarios, such as returning multiple values from a function or storing key-value pairs temporarily.
- Understanding the time complexities of operations on `pair` can help in writing efficient code when dealing with pairs in C++.