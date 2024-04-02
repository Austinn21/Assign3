#include <iostream>
#include <vector>
#include "Queue.h"

using namespace std;

 // Question 1

int main() {
    Queue<int> q;
    for (int i = 1; i <= 10; ++i) {
        q.push(i);
    }

    cout << "Elements in the queue: ";
    q.display();

    q.move_to_rear();
    cout << "After moving front element to rear: ";
    q.display();

    return 0;
}


// Question 2
/*
// Function definition for linear_search_last
template<typename Item_Type>
int linear_search_last(const vector<Item_Type>& items, const Item_Type& target, int pos_last) {
    if (pos_last < 0)
        return -1;
    if (target == items[pos_last])
        return pos_last;
    else
        return linear_search_last(items, target, pos_last - 1);
}

// Overloaded function to call linear_search_last with initial parameters
template<typename Item_Type>
int linear_search_last(const vector<Item_Type>& items, const Item_Type& target) {
    return linear_search_last(items, target, items.size() - 1);
}

int main() {
    vector<int> vec = { 1, 2, 3, 4, 2, 5, 6, 2 };
    int target = 2;
    int last_occurrence = linear_search_last(vec, target);
    if (last_occurrence != -1) {
        cout << "Last occurrence of " << target << " is at index: " << last_occurrence << endl;
    }
    else {
        cout << "Target not found." << endl;
    }
    return 0;
}
*/

// Question 3
/*
// Function to perform insertion sort on a vector of integers
void insertion_sort(vector<int>& num) {
    for (size_t j = 1; j < num.size(); j++) {
        int key = num[j];
        int i = j - 1;
        while (i >= 0 && num[i] > key) {
            num[i + 1] = num[i];
            i = i - 1;
        }
        num[i + 1] = key;
    }
}

int main() {
    vector<int> numbers = { 9, 4, 8, 3, 1, 2, 5, 6, 7, 0 };

    cout << "Original list: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << "\n";

    // Sort the numbers
    insertion_sort(numbers);

    cout << "Sorted list:   ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << "\n";

    return 0;
}
*/
