## Map in C++
- [map](#map)
- [unordered map](#unordered-map)
### Map
#### Introduction:
- `map` is an associative container that stores key-value pairs where each key is unique.
- It is part of the Standard Template Library (STL) and is defined in the `<map>` header.

#### 1. Declaration and Initialization:
```cpp
#include <map>

// Declaring a map with key of type int and value of type string
std::map<int, std::string> myMap;

// Initializing with values
std::map<int, std::string> myMap = {{1, "apple"}, {2, "banana"}, {3, "orange"}};
```

#### 2. Insertion and Deletion:
```cpp
// Inserting a key-value pair
myMap[key] = value;

// Inserting using insert function
myMap.insert(std::make_pair(key, value));

// Deleting a key-value pair
myMap.erase(key);
```

#### 3. Accessing Elements:
```cpp
// Accessing value using key
std::string value = myMap[key];

// Checking if key exists
if (myMap.find(key) != myMap.end()) {
    // Key exists
}
```

#### 4. Size:
```cpp
// Size of the map (number of key-value pairs)
int size = myMap.size();
```

#### 5. Iterating Over Elements:
```cpp
// Iterating over key-value pairs
for (const auto& pair : myMap) {
    int key = pair.first;
    std::string value = pair.second;
    // Do something with key and value
}
```

#### Time Complexities and Return Types:

| Operation         | Time Complexity | Return Type        |
|--------------------|-----------------|--------------------|
| Accessing          | O(log n)            | Reference to value (modifiable) |
| Insertion         | O(log n)        | Pair of iterator and boolean indicating success or failure |
| Deletion          | O(log n)        | Number of elements erased |
| Size              | O(1)            | `size_t`           |

#### Conclusion:
- `map` provides efficient key-value pair storage with logarithmic time complexity for most operations.
- It's useful for scenarios where fast lookups and insertions based on keys are required.
- Understanding its time complexities aids in writing efficient code, especially for large datasets.


**Key Points**

- **Representation:** Maps are typically implemented using self-balancing search trees (e.g., red-black trees) for efficient key lookup and insertion.
- **Operations:** Common map operations include:
    - **`map(key_type, value_type)`:** Constructs an empty map where keys are of type `key_type` and values are of type `value_type`.
    - **`insert(pair<key_type, value_type>)`:** Inserts a key-value pair into the map. If the key already exists, the value is updated. Time complexity: O(log n) on average. Return type: An iterator pointing to the newly inserted or updated element.
    - **`[]` operator (indexing):** Looks up a value associated with a key. If the key doesn't exist, a new key-value pair is inserted with a default value for the value type (often `value_type()`) and an iterator pointing to this new element is returned. Time complexity: O(log n) on average. Return type: Reference to the value associated with the key.
    - **`at(key)`:** Similar to indexing, but throws an exception if the key doesn't exist. Use with caution. Time complexity: O(log n) on average. Return type: Reference to the value associated with the key.
    - **`find(key)`:** Searches for a key in the map. Time complexity: O(log n) on average. Return type: An iterator pointing to the element with the key, or `map::end()` if the key is not found.
    - **`erase(iterator)`:** Removes an element from the map based on an iterator pointing to it. Time complexity: O(log n) on average. Return type: An iterator pointing to the element after the erased one (or `map::end()` if it was the last element).
    - **`erase(key)`:** Erases the element with the specified key from the map. Time complexity: O(log n) on average. Return type: The number of elements erased (either 0 or 1).
    - **`size()`:** Returns the number of elements in the map. Time complexity: O(1). Return type: `size_t`.
    - **`empty()`:** Checks if the map is empty. Time complexity: O(1). Return type: `bool`.
    - **`clear()`:** Removes all elements from the map. Time complexity: O(n) (deallocates memory, but elements remain accessible until overwritten). Return type: `void`.
- **Applications:** Maps are widely used in various domains, such as:
    - Implementing phone books with names as keys and phone numbers as values.
    - Representing symbol tables in compilers with identifiers as keys and their attributes (e.g., data types) as values.
    - Storing configuration settings with keys corresponding to settings names and values containing the actual settings.

**Code Example**

```c++
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    // Create a map of strings to integers
    map<string, int> fruits;
    fruits["apple"] = 10;
    fruits["banana"] = 20;

    // Access and modify elements using indexing
    fruits["orange"] = 30; // Inserts a new key-value pair
    cout << "Price of apple: " << fruits["apple"] << endl; // Output: Price of apple: 10

    // Check if a key exists
    if (fruits.find("grape") != fruits.end()) {
        cout << "Grapes exist in the map" << endl;
    } else {
        cout << "Grapes do not exist in the map" << endl;
    }

    // Loop through elements using a range-based for loop
    for (auto fruit : fruits) {
        cout << fruit.first << ": " << fruit.second << endl; // Output: apple: 10, banana: 20, orange: 30
    }

    // Remove an element by key
    fruits.erase("banana");

    return 0;
}
```

**Additional Notes**

- Maps in C++ are designed for efficient retrieval of elements based on unique keys.
- For unordered access

---

## Unordered Map

#### Introduction:
- `unordered_map` is an associative container that stores key-value pairs where each key is unique.
- It is part of the Standard Template Library (STL) and is defined in the `<unordered_map>` header.
- Unlike `map`, `unordered_map` does not sort its keys, providing faster access times at the expense of ordered traversal.

#### 1. Declaration and Initialization:
```cpp
#include <unordered_map>

// Declaring an unordered_map with key of type int and value of type string
std::unordered_map<int, std::string> myUnorderedMap;

// Initializing with values
std::unordered_map<int, std::string> myUnorderedMap = {{1, "apple"}, {2, "banana"}, {3, "orange"}};
```

#### 2. Insertion and Deletion:
```cpp
// Inserting a key-value pair
myUnorderedMap[key] = value;

// Inserting using insert function
myUnorderedMap.insert(std::make_pair(key, value));

// Deleting a key-value pair
myUnorderedMap.erase(key);
```

#### 3. Accessing Elements:
```cpp
// Accessing value using key
std::string value = myUnorderedMap[key];

// Checking if key exists
if (myUnorderedMap.find(key) != myUnorderedMap.end()) {
    // Key exists
}
```

#### 4. Size:
```cpp
// Size of the unordered_map (number of key-value pairs)
int size = myUnorderedMap.size();
```

#### 5. Iterating Over Elements:
```cpp
// Iterating over key-value pairs
for (const auto& pair : myUnorderedMap) {
    int key = pair.first;
    std::string value = pair.second;
    // Do something with key and value
}
```

#### Time Complexities and Return Types:

| Operation         | Average Time Complexity | Worst Case Time Complexity | Return Type        |
|--------------------|-------------------------|---------------------------|--------------------|
| Accessing          | O(1)                    | O(n)                      | Reference to value (modifiable) |
| Insertion         | O(1)                    | O(n)                      | Pair of iterator and boolean indicating success or failure |
| Deletion          | O(1)                    | O(n)                      | Number of elements erased |
| Size              | O(1)                    | O(1)                      | `size_t`           |

#### Conclusion:
- `unordered_map` provides fast key-value pair storage with constant time complexity for most operations on average.
- It's suitable for scenarios where fast lookups and insertions based on keys are crucial, and the order of elements doesn't matter.
- The worst-case time complexity for some operations occurs when there's a collision, which results in linear probing.
- Understanding its time complexities helps in writing efficient code, especially for large datasets.

---
### Key Points

- **Representation:** Unordered maps are typically implemented using hash tables. A hash function is used to map keys to bucket indices, where key-value pairs with the same hash collide and are stored in a linked list or other collision resolution mechanism within the bucket.
- **Operations:** Common unordered map operations include:
    - **`unordered_map(key_type, value_type)`:** Constructs an empty unordered map where keys are of type `key_type` and values are of type `value_type`.
    - **`insert(pair<key_type, value_type>)`:** Inserts a key-value pair into the map. If the key already exists, the value is updated. Time complexity: O(1) on average, but can be O(n) in the worst case (due to hash collisions). Return type: An iterator pointing to the newly inserted or updated element.
    - **`[]` operator (indexing):** Looks up a value associated with a key. If the key doesn't exist, a new key-value pair is inserted with a default value for the value type (often `value_type()`) and an iterator pointing to this new element is returned. Time complexity: O(1) on average, but can be O(n) in the worst case (due to hash collisions). Return type: Reference to the value associated with the key.
    - **`at(key)`:** Similar to indexing, but throws an exception if the key doesn't exist. Use with caution. Time complexity: O(1) on average, but can be O(n) in the worst case. Return type: Reference to the value associated with the key.
    - **`find(key)`:** Searches for a key in the map. Time complexity: O(1) on average, but can be O(n) in the worst case (due to hash collisions). Return type: An iterator pointing to the element with the key, or `unordered_map::end()` if the key is not found.
    - **`erase(iterator)`:** Removes an element from the map based on an iterator pointing to it. Time complexity: O(1) on average, but can be O(n) in the worst case (due to rehashing). Return type: An iterator pointing to the element after the erased one (or `unordered_map::end()` if it was the last element).
    - **`erase(key)`:** Erases the element with the specified key from the map. Time complexity: O(1) on average, but can be O(n) in the worst case (due to rehashing). Return type: The number of elements erased (either 0 or 1).
    - **`size()`:** Returns the number of elements in the map. Time complexity: O(1). Return type: `size_t`.
    - **`empty()`:** Checks if the map is empty. Time complexity: O(1). Return type: `bool`.
    - **`clear()`:** Removes all elements from the map. Time complexity: O(n) (deallocates memory, but elements remain accessible until overwritten). Return type: `void`.
- **Applications:** Unordered maps are suitable for scenarios where:
    - Fast access to elements by key is critical.
    - The order of elements is irrelevant.
    - You expect a moderate number of hash collisions (careful selection of a hash function is important).
- **Trade-offs:** Compared to maps, unordered maps offer faster average-case lookup but may have:
    - Slower worst-case lookup due to hash collisions.
    - No guaranteed order for iterating through elements.
