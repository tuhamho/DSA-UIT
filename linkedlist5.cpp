    #include <iostream>
    using namespace std;
    struct Node{
        int data;
        Node* next;

        Node(int val) : data(val) , next(nullptr){};
    };
    void insertAtNail (Node*& head, int val){
        Node* head1 = new Node(val);
        if( head == nullptr){
            head = head1;
            return;
        }
        Node* current = head;
        while ( current -> next != nullptr){
            current = current -> next;
        }
        current ->next = head1;
    }
    void reverse(Node*& head){
        Node* prev = nullptr;
        Node* current = head;
        
        while(current!=nullptr){
            current->next = prev;
            prev = current;
            current = current -> next;
        }

    }
    main(){
        Node* head = nullptr;
        for( int i = 1; i <= 10    ; i++){
            insertAtNail(head , i);
        };
        Node* current = head; 
        reverse(head);
        while (current != nullptr ){
            cout << current ->data << " ->";
            current = current -> next;
        }
        cout<< " NULL";
        return 0;
    };