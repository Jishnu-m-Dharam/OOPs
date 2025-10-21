#include <iostream>
#include <vector>
using namespace std;

class SimpleList {
    vector<int> data;
public:
    SimpleList() {}

    void add(int value) {
        data.push_back(value);
    }

    void remove(int value) {
        for (auto it = data.begin(); it != data.end(); ++it) {
            if (*it == value) {
                data.erase(it);
                break;
            }
        }
    }

    void display() const {
        cout << "List: ";
        for (int x : data)
            cout << x << " ";
        cout << endl;
    }

    int size() const {
        return data.size();
    }
};

int main() {
    SimpleList lst;
    lst.add(10);
    lst.add(20);
    lst.add(30);
    lst.display();
    lst.remove(20);
    lst.display();
    cout << "Size: " << lst.size() << endl;
    return 0;
}
