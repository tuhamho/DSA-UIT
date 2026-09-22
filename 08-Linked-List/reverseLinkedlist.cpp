#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
struct Node{
    int data;
    Node* next;

    Node(int val) : data(val) , next(nullptr){};
};
void inserAtTail(Node*& head, int val){
    Node* newNode = new Node(val);
    if( head == nullptr){
        head = newNode;
        return;
    }
    Node* current = head;
    while(current->next !=nullptr){
        current = current ->next;
    }
    current->next = newNode;
};
void cinn(Node* head){
    Node* current = head;
    while(current != nullptr){
        cout << current->data<<"->";
        current = current->next;
    }
    cout << "NUll";
};
void reverseList(Node*& head){
    Node* prev = nullptr;
    Node* current = head;
    Node* NextNode = nullptr;
    //1->2->3->null
  //p-c-n
   //pc-n
   //null<-1<-2<-3
    while ( current != nullptr){
        NextNode = current->next;
        current->next=prev;
        prev = current;
        current = NextNode;
    }
    head = prev;
};
int main() {
    Node* head = nullptr;
    for( int i=1; i <=10;i++){
        inserAtTail(head,i);
    }
    cinn(head);
    cout<<endl;
    reverseList(head);
    cinn(head);
    return 0;
}