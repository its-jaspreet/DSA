#include <iostream>

using namespace std;


//* INCREASING ARRAY SIZE
void incrArrSize(int *&p, int oldSize, int newSize) {
    int *newArr = new int[newSize];
    for (int i = 0; i < min(oldSize, newSize); i++) {
        newArr[i] = p[i];
    }

    delete[] p;
    p = newArr;
    newArr = NULL;

    cout << "enter elements to be added (press entering after entering each element): \n";
    for (int i = oldSize; i < newSize; i++) {
            cin >> p[i];
    }

    cout << "new array is as follows: {";
    for (int i = 0; i < newSize; i++) {
        cout << p[i] << ", ";
    }
    cout << "}";
}


void display(int arr[][4]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void createArrStack(int t[]) {
    int A1[3][4] = {{t[0], t[1], t[2], t[3]}, {t[4], t[5], t[6], t[7]}, {t[8], t[9], t[10], t[11]}};
    display(A1);
    cout << endl;
}


void display(int *arr[]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void createArrHasPointers(int t[]) {
    int *A2[3];
    A2[0] = new int[4]{t[0], t[1], t[2], t[3]}; 
    A2[1] = new int[4]{t[4], t[5], t[6], t[7]};
    A2[2] = new int[4]{t[8], t[9], t[10], t[11]};
    display(A2);
    cout << endl;
}


// void display(int **arr) {
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 4; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

void createArrHeap(int t[]) {
    int **A3;
    A3 = new int*[3];
    A3[0] = new int[4]{t[0], t[1], t[2], t[3]};
    A3[1] = new int[4]{t[4], t[5], t[6], t[7]};
    A3[2] = new int[4]{t[8], t[9], t[10], t[11]};
    display(A3);
    cout << endl;
}


int main() {
    int *arr1 = new int[5]{5, 8, 9, 6, 4};
    cout << "current array is as follows: {";
    for (int i = 0; i < 5; i++) {
        cout << arr1[i] << ", ";
    }
    cout << "}\n";
    
    //* INCREASING ARRAY SIZE
    int newLen;
    cout << "enter new array length (number should be > current array length): ";
    cin >> newLen;
    incrArrSize(arr1, 5, newLen);
    cout << endl;


    //* CREATE AND DISPLAY 2D ARRAYS
    int t[12];
    for (int i = 0; i < 12; i++) {
        t[i] = i+1;
    }
    
    createArrStack(t);  // METHOD 1
    createArrHasPointers(t);  // METHOD 2
    createArrHeap(t);  // METHOD 3
    return 0;
}