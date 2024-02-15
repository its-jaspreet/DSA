#include <iostream>

using namespace std;

class Node {
public:
    char data;
    Node *next;
};

Node *first1 = NULL;
Node *last1 = NULL;
int length1 = 0;

Node *first2 = NULL;
Node *last2 = NULL;
int length2 = 0;


void display(Node *p) {
    while (p != nullptr) {
        cout << p -> data << " -> ";
        p = p -> next;
    }
    cout << endl;
}


string createAndDisplay(const char arr[], int size) {
    first1 = new Node();

    first1 -> data = arr[0];
    first1 -> next = NULL;
    last1 = first1;
    
    for (int i = 1; i < size; i++) {
        Node *t = new Node();
        t -> data = arr[i];
        t -> next = NULL;
        last1 -> next = t;
        last1 = t;   
    }
    
    display(first1);
    
    length1 = size;
    return "linked list created successfully";
        
}


void insertAtFirst(char element, Node* &p, int &size) {
    Node *t = new Node();
    t -> data = element;
    t -> next = first1;
    p = t;
    
    size += 1;
}


void insertElsewhere(int index, char element, Node* &p, int &size) {
    for (int i = 0; i < index - 2; i++) {
        p = p -> next;
    }
    
    Node *t = new Node();
    t -> data = element;
    t -> next = p -> next;
    p -> next = t;
    
    size += 1;
}


string insert(int index, char element, Node* &p, int &size) {
    if (index == 0) {
        insertAtFirst(element, p, size);
        display(p);
        return "element inserted at the beginning of the LL";
    }
    else if (index >= 1 && index <= length1) {
        insertElsewhere(index, element, p, size);
        display(p);
        return "element inserted in the LL";
    }
    else {
        return "entered index is out of bounds, try again lol";
    }
}


string createByInsert(int index, char element, Node* &p, int &size) {
    if (size == 0) {
        first2 = new Node();
        first2 -> data = element;
        first2 -> next = NULL;
        last2 = first2;
        size += 1;
        display(p);
        return "LL instantiated and the first element has been entered";
    }
    else if (index == 0) {
        insertAtFirst(element, p, size);
        display(p);
        return "element inserted at the beginning of the LL";
    }
    else if (index >= 1 && index <= length1) {
        insertElsewhere(index, element, p, size);
        display(p);
        return "element inserted in the LL";
    }
    else {
        return "entered index is out of bounds, try again lol";
    }
}



int main() {

    // CREATE AND DISPLAY
    char arr[] = {'a', 'b', 'c', 'd', 'e'};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << createAndDisplay(arr, size) << "\n\n";
    
    // INSERTING IN LL
    cout << insert(0, 'x', first1, length1) << "\n\n";
    cout << insert(4, 'y', first1, length1) << "\n\n";
    cout << insert(6, 'z', first1, length1) << "\n\n";
    cout << insert(7, 'z', first1, length1) << "\n\n";

    // CREATING BY INSERT
    cout << createByInsert(0, 'p', first2, length2) << "\n\n";
    cout << createByInsert(1, 'q', first2, length2) << "\n\n";
    cout << createByInsert(2, 'r', first2, length2) << "\n\n";
    cout << createByInsert(1, 's', first2, length2) << "\n\n";
    cout << createByInsert(0, 't', first2, length2) << "\n\n";
    cout << createByInsert(3, 'u', first2, length2) << "\n\n";

    return 0;
}
