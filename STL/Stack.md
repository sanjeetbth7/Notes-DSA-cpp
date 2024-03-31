## Stack in C++

#### Introduction:
- A stack is a linear data structure that follows the Last In, First Out (LIFO) principle.
- It is typically implemented using arrays or linked lists.
- In C++, you can use the `std::stack` container adapter, which is part of the Standard Template Library (STL) and is defined in the `<stack>` header.

#### 1. Declaration and Initialization:
```cpp
#include <stack>

// Declaration of a stack of integers
std::stack<int> myStack;

// Initializing a stack with values
std::stack<int> myStack({1, 2, 3, 4, 5});
```

#### 2. Push and Pop Operations:
```cpp
// Pushing elements onto the stack
myStack.push(6);
myStack.push(7);

// Popping elements from the stack
myStack.pop();
```

#### 3. Accessing Elements:
```cpp
// Accessing the top element of the stack
int topElement = myStack.top();
```

#### 4. Checking if Stack is Empty:
```cpp
// Checking if the stack is empty
bool isEmpty = myStack.empty();
```

#### Time Complexities:

| Operation         | Time Complexity |
|-------------------|-----------------|
| Push              | O(1)            |
| Pop               | O(1)            |
| Top               | O(1)            |
| Empty             | O(1)            |

#### Conclusion:
- Stack is a fundamental data structure with operations that follow the Last In, First Out (LIFO) principle.
- In C++, you can use the `std::stack` container adapter provided by the STL for stack operations.
- Pushing, popping, accessing the top element, and checking if the stack is empty all have constant time complexity.
- Understanding the time complexities of stack operations is essential for writing efficient code, especially when dealing with large datasets or implementing algorithms that use stacks.