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

    friend VectorManipulation addVectors(VectorManipulation v1, VectorManipulation v2);
};

VectorManipulation addVectors(VectorManipulation v1, VectorManipulation v2){
        if (v1.vec.size() != v2.vec.size()) {
            cout << "Vectors must be of the same size to add!" << endl;
            throw runtime_error("Vector size mismatch");
        }
        VectorManipulation result;      
        result.vec = vector<int>(v1.vec.size());
        for (size_t i = 0; i < v1.vec.size(); ++i) {
            result.vec[i] = v1.vec[i] + v2.vec[i];
        }
        return result;
    }


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

    VectorManipulation vm2;
    cout << "Enter number of elements in second vector: ";
    int n2;
    cin >> n2;
    vm2.createVector(n2);
    cout << "\nSecond Vector \n";
    vm2.displayVector();

    cout<<"Sum of two vectors as new vector as : \n";
    VectorManipulation sumVec = addVectors(vm, vm2);
    sumVec.displayVector();
    
    return 0;
}

