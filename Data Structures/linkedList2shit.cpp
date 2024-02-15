#include <iostream>

using namespace std;

// creating and displaying a LLL
// inserting in a LLL
// creating a LLL using insert
// creating a LLL using insert-at-last
// inserting in a sorted LLL

// deleting from LLL
// deleting first node from LLL
// checking in LLL is sorted
// remove duplicates from sorted LLL
// checking for a loop in LLL

// reversing a LLL (reversing elements)
// reversing a LLL using sliding pointers
// recursive reverse of LLL
// concatenating 2 LLLs
// merging 2 LLLs

class Node {
public:
    char data;
    Node *next;
};

Node *first = NULL;
Node *last = NULL;
int length;

Node *first2 = NULL;
Node *last2 = NULL;
int length2;

string createAndDisplay(const char arr[], int size) {
    first = new Node();

    first -> data = arr[0];
    first -> next = NULL;
    last = first;
    
    for (int i = 1; i < size; i++) {
        Node *t = new Node();
        t -> data = arr[i];
        t -> next = NULL;
        last -> next = t;
        last = t;   
    }
    
    Node *p = first;
    while (p != nullptr) {
        cout << p -> data << " -> ";
        p = p -> next;
    }
    cout << endl;
    
    length = size;
    return "linked list created successfully";
        
}


void display(Node *p) {
    while (p != nullptr) {
        cout << p -> data << " -> ";
        p = p -> next;
    }
    cout << endl;
}


void insertAtFirst(char element) {
    Node *t = new Node();
    t -> data = element;
    t -> next = first;
    first = t;
    
    length += 1;
}


void insertElsewhere(int index, char element, Node *p, int size) {
    for (int i = 0; i < index - 2; i++) {
        p = p -> next;
    }
    
    Node *t = new Node();
    t -> data = element;
    t -> next = p -> next;
    p -> next = t;
    
    length += 1;
}


string insert(int index, char element) {
    if (index == 0) {
        insertAtFirst(element);
        display(first);
        return "element inserted at the beginning of the LL";
    }
    else if (index >= 1 && index <= length) {
        insertElsewhere(index, element, first, length);
        display(first);
        return "element inserted in the LL";
    }
    else {
        return "entered index is out of bounds, try again lol";
    }
}


createByInsert(char element) {
    
}

createByInsertElsewhere(int index, char element) {
    
}


string createByInsert(int index, char element) {
    if (index == 0) {
        createByInsertAtFirst(element);
    } else {
        createByInsertElsewhere(index, element);
    } 
}


int main() {
    
    // CREATE AND DISPLAY
    char arr[] = {'a', 'b', 'c', 'd', 'e'};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << createAndDisplay(arr, size) << "\n\n";
    
    // INSERTING IN LL
    cout << insert(0, 'x') << "\n\n";
    cout << insert(4, 'y') << "\n\n";
    cout << insert(6, 'z') << "\n\n";
    cout << insert(7, 'z') << "\n\n";
    
    // CREATING A LL USING INSERTION
    int arr2[] = {'1', '2', '3', '4', '5', '6'};
    for (int i = 0; i < sizeof(arr2)/sizeof(arr2[0]); i++) {
        createByInsert(i, arr2[i]);
    }
    createByInsert(0, '7');
    createByInsert(4, '8');
    createByInsert(7, '9');

    display(first2);
    
    return 0;
}