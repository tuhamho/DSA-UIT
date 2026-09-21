#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val) , next(nullptr){};
};
void InSertAtTail(Node*& head,int val){
    Node* newNode = new Node(val);
    if(head == nullptr){
        head = newNode;
        return;
    }
    Node* current = head;
    while ( current->next != nullptr){
        current = current->next;
    };
    current -> next = newNode;
};
void cinn (Node* head){
    Node* current = head;
    while( current!=nullptr){
        cout <<current->data;
        current = current->next;
    }    
};
int countnumber(Node* head){
    int count = 0;
    Node* current = head;
    while( current != nullptr){
        if(current->data >=0 && current->data<=9){
            count++;
        }
        current = current->next;
        }
    return count;};

    void reverseList(Node*& head){
    Node* prev = nullptr;
    Node* current = head;
    Node* NextNode = nullptr;
  
    while ( current != nullptr){
        NextNode = current->next;
        current->next=prev;
        prev = current;
        current = NextNode;
    }
    head = prev;
};
bool check(Node* head1,Node* head2)
{
    Node* current1= head1;
    Node* current2 = head2;
    while ( current1!=nullptr && current2!=nullptr){
        if( current1->data != current2->data)
        return false;
        current1= current1->next;
        current2 = current2->next;
    }
    if (current1 == nullptr && current2== nullptr){
        return true;
    }
    else 
    return false;

};
int main() {
     Node* head=  nullptr;
    for( int i=1; i<=5; i ++){
        InSertAtTail(head, i);
    }
    cinn(head);
    cout << endl;
    Node* head1= nullptr;
    for( int i=5; i>0; i --){
        InSertAtTail(head1, i);
    }
    reverseList(head1);
    cinn(head1);
    cout<< endl;
    cout<<countnumber(head);
    cout << endl;
    if(check(head,head1)){
        cout<< "panlindrome";
    }
    else 
    cout << " nonpanlindrome ";
   
    return 0;
}