#include<bits/stdc++.h>
using namespace std;

class VectorManipulation {
    vector<int> vec;
  public:
    void createVector(int n) {
        vec = vector<int>(n);
        cout << "Enter " << n << " elements:" << endl;
        for (int i = 0; i < n; ++i) {
            int element;
            cin >> element;
            vec[i]=element;
        }
    }

    void updateElement(int index, int newValue) {
        if (index >= 0 && index < vec.size()) {
            vec[index] = newValue;
        } else {
            cout << "Index out of bounds!" << endl;
        }
    }

    void multiplyByScalar(int scalar) {
        for (int &element : vec) {
            element *= scalar;
        }
    }

    void displayVector() {
        cout << "Vector elements: ";
        for (int element : vec) {
            cout << element << " ";
        }
        cout << endl;
    }   

};

int main() {
    VectorManipulation vm;
    int n;
    cout << "Enter number of elements in vector: ";
    cin >> n;
    vm.createVector(n);
    
    cout << "Original ";
    vm.displayVector();
    
    int index, newValue;
    cout << "Enter index to update and new value: ";
    cin >> index >> newValue;
    vm.updateElement(index, newValue);
    
    cout << "After update ";
    vm.displayVector();
    
    int scalar;
    cout << "Enter scalar to multiply: ";
    cin >> scalar;
    vm.multiplyByScalar(scalar);
    
    cout << "After multiplication ";
    vm.displayVector();
    
    return 0;
}

