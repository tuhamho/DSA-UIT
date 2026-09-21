#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int val) : data(val), next (nullptr){};
};
void insertAtTail(Node*& head, int val){
    Node* head1 = new Node(val);
    if(head == nullptr){
        head = head1;
        return;
    }
    Node* current = head;
    while(current->next != nullptr){
        current = current ->next;
    }
    current-> next = head1;
}
void deletehead(Node*& head){
    if(head == nullptr){
        return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
};
int main() {
    Node* head = new Node(10);
    for(int i = 20;i <= 30; i+=10 ){
        insertAtTail(head,i);
    }
    deletehead(head);
    Node* current = head;
    while ( current != nullptr){
        cout << current->data <<"->";
        current = current -> next;
    }
    cout <<"NULL";

    return 0;
}