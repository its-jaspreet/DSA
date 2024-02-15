#include <iostream>
// #include <vector>

using namespace std;

class Node {
public:
    int data;
    Node* next;
};

Node *head = NULL;
Node *tail = NULL; 

void create() {
    int n, i;
    cout << "Enter the number of elements you want to add to your linked list: ";
    cin >> n;
    
    int A[n];
    // vector<int> A(n);
    
    cout << "\nEnter elements (press enter after entering each element):\n";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    
    if (head == NULL) {
        head = new Node();
        head -> data = A[0];
        head -> next = NULL;
        tail = head;
        i = 1;
    }
    else {
        i = 0;    
    }
    
    Node *temp = NULL;    
    for (; i < n; i++) {
        temp = new Node();
        temp -> data = A[i];
        temp -> next = NULL;
        tail -> next = temp;
        tail = temp;
    }
    
    cout << "\nNew node(s) have been created!";
}

void display(Node *p) {
    Node *temp = p;
    while (temp != NULL) {
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }
}

void rDisplay(Node *p) {
    if (p != NULL) {
        cout << p -> data << " -> ";
        rDisplay(p -> next);
    }
}

void count(Node *p) {
    Node *temp = p;
    int count = 0;
    while (temp != NULL) {
        temp = temp -> next;
        count += 1;
    }
    
    cout << "\nThere are " << count << " elements in the linked list so far!";
}

int rCount(Node *p) {
    if (p != NULL) {
        return rCount(p -> next) + 1;
    }
    else {
        return 0;
    }
}

void sum(Node *p) {
    Node *temp = p;
    int sum = 0;
    while (temp != NULL) {
        sum += temp -> data;
        temp = temp -> next;
    }
    cout << "\nThe sum of all elements in the linked list so far is " << sum;
}

int rSum(Node *p) {
    if (p != NULL) {
        return (p -> data) + rSum(p -> next);
    }
    else {
        return 0;
    }
}

void min(Node *p) {
    int min = p -> data;
    while (p != NULL) {
        if (p -> data < min) {
            min = p -> data;
        }
        p = p -> next;
    }
    cout << "\nThe smallest element of all in the linked list is " << min << endl;
}

void max(Node *p) {
    int max = p -> data;
    while (p != NULL) {
        if (p -> data > max) {
            max = p -> data;
        }
        p = p -> next;
    }
    cout << "The greatest element of all in the linked list is " << max << endl;
}
    
void lSearch(Node *p, int search) {
    int pos = 0;
    while (p != NULL) {
        if (p -> data == search) {
            pos += 1;
            cout << "Element found! It was at position number " << pos;
            break;
        }
        else {
            pos += 1;
            p = p -> next;
        }
    }
    if (p == NULL) {
        cout << "Element not found :(";
    }
}

int rSearch(Node *p, int search, int pos) {        
    if (p -> data == search) {
        pos += 1;
        cout << "\nElement found recursively too! It was at position number " << pos;
        return 0;
    }
    else if (p == NULL) {
        cout << "\nElement not found recursively either :(";
        return 0;
    }
    else {
        return rSearch(p -> next, search, ++pos);
    }
    
}

void search(Node *p) {
    int key, pos = 0;
    cout << "\nEnter the element that you want to search for: ";
    cin >> key;
    lSearch(p, key);
    rSearch(p, key, pos);
}

int main() {
    int choice = 1;
    create();
    while (choice != 8) {
        cout << "\n\n\nHere's all that you can do!\n";
        cout << "1. Create more new nodes.\n2. Display the linked list.\n3. Display the linked list, but recursively.\n4. Count the number of elements present in the linked list.\n";
        cout << "5. Calculate the sum of all elements present in the linked list.\n6. Find the maximum and minimum numbers in the linked list.\n7. Search for an element in the linked list.\n8. Exit\n\n";
        cout << "Enter a number from 1 to 8, based on what your choice is: ";
        cin >> choice;
        
        if (choice == 1) {
            create();
        } else if (choice == 2) {
            display(head);
        } else if (choice == 3) {
            rDisplay(head);
        } else if (choice == 4) {
            count(head);
            cout << "\nand the number of elements in the linked list, calculated recursively also equals " << rCount(head);
        } else if (choice == 5) {
            sum(head);
            cout << "\nand the sum of all elements present in the linked list, calculated recusrively also equals " << rSum(head);
        } else if (choice == 6) {
            min(head);
            max(head);
        } else if (choice == 7) {
            search(head);
        } else if (choice == 8) {
            break;
        } else {
            cout << "Enter a valid number, i.e., only any number ranging from 1 to 8!";
        }
    } 
    return 0;
}