#include <iostream>
#include <vector>

int main() {
    // Create a vector and initialize it with some values
    std::vector<int> myVector = {1, 2, 3, 4, 5};

    // Display the elements of the vector
    std::cout << "Elements in the vector are: ";
    for (const auto& element : myVector) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Add elements to the vector
    myVector.push_back(6);
    myVector.push_back(7);

    std::cout << "After adding elements: ";
    for (const auto& element : myVector) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Remove the last element
    myVector.pop_back();
    std::cout << "After removing the last element: ";
    for (const auto& element : myVector) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Access and modify an element
    myVector[0] = 10;
    std::cout << "After modifying the first element: ";
    for (const auto& element : myVector) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Size of the vector
    std::cout << "The size of the vector is: " << myVector.size() << std::endl;

    return 0;
}
