#include <iostream>

using namespace std;

int main() {
    int n; 
    cout << "Enter the number of terms you want to generate: ";
    cin >> n;


    int current = 2;
    int prev = 2; 

    // Print the first terms
    cout << current <<" ";

    //printing the remaining terms
    for (int i = 2; i < n; i++) {
        int next = prev * 2 + 2;
        prev = next;
        cout << next << " ";
    }

    cout << endl;

    return 0;
}
