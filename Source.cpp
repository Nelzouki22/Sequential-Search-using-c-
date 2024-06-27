#include <iostream>
#include <vector>

int sequentialSearch(const std::vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == target) {
            return i; // Return the index if the target is found
        }
    }
    return -1; // Return -1 if the target is not found
}

int main() {
    std::vector<int> arr = { 5, 3, 7, 1, 9, 4 };
    int target = 7;

    int result = sequentialSearch(arr, target);

    if (result != -1) {
        std::cout << "Element found at index " << result << std::endl;
    }
    else {
        std::cout << "Element not found in the list" << std::endl;
    }

    return 0;
}
