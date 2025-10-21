#include <iostream>
#include <vector>
using namespace std;

class SimpleDict {
private:
    vector<string> keys;
    vector<int> values;

public:
 
    void add(string key, int value) {
        for (size_t i = 0; i < keys.size(); i++) {
            if (keys[i] == key) {
                values[i] = value; 
                return;
            }
        }
      
        keys.push_back(key);
        values.push_back(value);
    }


    void search(string key) {
        for (size_t i = 0; i < keys.size(); i++) {
            if (keys[i] == key) {
                cout << "Found: " << key << " = " << values[i] << endl;
                return;
            }
        }
        cout << "Key not found!" << endl;
    }


    void display() {
        cout << "\n--- Dictionary Contents ---\n";
        for (size_t i = 0; i < keys.size(); i++) {
            cout << keys[i] << " : " << values[i] << endl;
        }
    }
};

int main() {
    SimpleDict d;
    d.add("Alice", 90);
    d.add("Bob", 85);
    d.add("Alice", 95);
    d.search("Alice");
    d.search("Charlie");
    d.display();
    return 0;
}
