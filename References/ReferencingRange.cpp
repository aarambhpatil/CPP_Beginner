#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> inputVector){
    for (int x : inputVector) {
        cout << x << endl;
    }
}

int main(){

    vector<int> vect{10, 20, 30, 40, 50};

    printVector(vect);

    for (int& x : vect) {
        x = x + 5;
    }    

    printVector(vect);
    
}