#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
struct Node{
    int data;
    Node* next;

    Node(int val) : data(val) , next(nullptr) {};
};
void insertAtTail(Node*& head, int val){
    Node* newNode = new Node(val);
    if( head == nullptr){
        head = newNode;
        return;
    }
    Node* current = head;
    while ( current->next != nullptr){
        current = current->next;
    }
    current->next = newNode;
}
void cinn(Node* head){
    Node* current = head;
    while(current != nullptr){
        cout << current->data<<"->";
        current = current -> next;
    }
    cout <<"NULL";
}
int CountNumber(Node* head){
    Node* current = head;
    int count = 0;
        while( current!= nullptr){
        if( current->data %2==0){
        count++;}
        current = current ->next;
    }
    return count;
}
int main() {
    Node* head = nullptr;
    for(int i =2; i<=15; i+=3){
        insertAtTail(head, i);
    }
    cout<<CountNumber(head);
    return 0;
}