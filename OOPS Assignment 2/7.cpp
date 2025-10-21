#include <iostream>
#include <vector>
using namespace std;

class Sorter {
    vector<int> arr;
public:
    void input() {
        int n, val;
        cout << "Enter number of elements: ";
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> val;
            arr.push_back(val);
        }
    }

    void bubbleSort() {
        for (int i = 0; i < arr.size()-1; i++)
            for (int j = 0; j < arr.size()-i-1; j++)
                if (arr[j] > arr[j+1])
                    swap(arr[j], arr[j+1]);
    }

    void display() {
        for (int x : arr)
            cout << x << " ";
        cout << endl;
    }
};

int main() {
    Sorter s;
    s.input();
    s.bubbleSort();
    cout << "Sorted: ";
    s.display();
    return 0;
}
