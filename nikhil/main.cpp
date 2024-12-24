#include<iostream>
#include<vector>
using namespace std;

vector<int> indices(int a[], vector<int>& store, int size, int curr_index, int key) {
    if (curr_index == size) { // Base case: when curr_index reaches size
        return store;
    }
    if (a[curr_index] == key) {
        store.push_back(curr_index); // Add index to store if key is found
    }
    return indices(a, store, size, curr_index + 1, key); // Recursive call
}

int main() {
    int no;
    cin >> no; // Input size of the array
    int key;
    cin >> key; // Input the key to search
    int a[no];
    for (int i = 0; i < no; i++) {
        cin >> a[i]; // Input array elements
    }
    vector<int> store;
    vector<int> output = indices(a, store, no, 0, key); // Get indices of key

    // Print the output
    for (int idx : output) {
        cout << idx << " ";
    }

    return 0;
}
