#include <bits/stdc++.h>
using namespace std;
void inputArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
class Node{
    public:
        int value;
        Node* next;
        Node(int val) {
            this->value = val;
            this->next = NULL;
        }
};
void  displayList(Node* head) {
    if (head == NULL) {
        cout << "list is empty" << endl;
    }
    while(head != NULL) {
        cout << head->value;
        head = head->next;
        if (head != NULL) {
            cout << " -> ";
        }
    }
    cout << endl;
}
void insertAtHead(Node* &head, int val) {
    Node* new_node = new Node(val);
    if (head == NULL) {
        head = NULL;
        return;
    }
    new_node->next = head;
    head = new_node;
}

void inserAtTail(Node* &head, int val) {

    Node* new_node = new Node(val);

    if (head == NULL) {
        head = new_node;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new_node;
}

Node* reverse(Node* head, int k) {
    if (!head) return NULL;

    Node* current = head;
    Node* next = NULL;
    Node* prev = NULL;
    int count = 0;

    while (current != NULL && count < k) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }

    if (next != NULL) {
        head->next = reverse(next, k);
    }

    return prev;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    inputArray(a, n);
    int pos;
    cin >> pos;

    Node* head = NULL;

    for (int i = 0; i < n; i++) {
        inserAtTail(head, a[i]);
    }

    head = reverse(head, pos);

    displayList(head);

}
