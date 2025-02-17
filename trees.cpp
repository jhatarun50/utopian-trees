#include <iostream>
using namespace std;

int utopianTree(int n) {
    int height = 1;  // Initial height of the tree
    
    // Simulate the growth cycles
    for (int i = 1; i <= n; ++i) {
        if (i % 2 != 0) {
            // Spring (odd cycles): Double the height
            height *= 2;
        } else {
            // Summer (even cycles): Increase the height by 1
            height += 1;
        }
    }
    
    return height;
}

int main() {
    int t;
    cin >> t;  // Number of test cases
    
    // Process each test case
    while (t--) {
        int n;
        cin >> n;  // Number of growth cycles for this test case
        cout << utopianTree(n) << endl;  // Output the result for each test case
    }
    
    return 0;
}
