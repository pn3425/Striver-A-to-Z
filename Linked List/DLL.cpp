#include <bits/stdc++.h>
using namespace std;

class Node{
    
    public:
    int data;
    Node* next;
    Node* back;
    
    public:
    Node(int data1, Node* next1, Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }
    
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
    
};

//Convert Array into DLL

Node* ConvertArray2DLL(vector<int>&array)
{
    int n = array.size();
    Node* head = new Node(array[0]);   //Assign 1st element as head
    Node* prev = head;                 // On the same head also assign prev

    for(int i=1;i<n;i++){    //Loop from 2nd element
        Node* temp = new Node(array[i],nullptr,prev);  //Create the second element node, which points back to head and next as null ptr
        prev -> next = temp;  // The head/prev points to the temp (the newly created node)
        prev = prev ->next; // The prev moves onto the temp (Current Node)
    }
    return head;

}

//Delete Head

Node* DeleteHeadOfDLL(Node* head){
    //Case 1: If list is empty || If list has 1 element
    if(head == NULL || head->next == NULL) return NULL;

    //Case 2: If DLL has element
        Node* prev = head;
        head = head -> next;
        head -> back = nullptr;
        prev -> next = nullptr;
        delete(prev);
    return head;  
}

//Delete Tail

Node* DeleteTailofDLL(Node* head){
     //Case 1: If list is empty || If list has 1 element
    if(head == NULL || head->next == NULL) return NULL;

    //Case 2: If DLL has element
    Node* tail = head;
    while( tail -> next != NULL)
    {
        tail = tail -> next;
    }
        Node* NewTail = tail -> back;
        NewTail -> next = nullptr;
        tail -> back = nullptr;
        delete tail;   
        return head;
    
}

// Deleting Kth Element from DLL

Node* DeleteKthEle(Node* head, int k){
    if(head == NULL) return NULL;
    
    //Going till the Kth Element (standing on Kth Element)
    int cnt = 0;
    Node* temp = head;
    while(temp != NULL){
        cnt++;
        if(cnt == k) break;
        temp = temp -> next;
    }
    Node* prev = temp -> back;
    Node* front = temp -> next;

    //Handle Edge Cases considering the front and previous and u are at between them at temp

    // Case 1: When front and prev both are NULL
    if(front == NULL && prev == NULL){
        return NULL;
    }

    // Case 2: Where front is NULL (That means you are at tail so delete the tail)
    else if(front == NULL){
        return DeleteTailofDLL(head);

    }

    // Case 3: Where prev if NULL (That means you are at the head so delete the head)
    else if(prev == NULL){
        return DeleteHeadOfDLL(head);
    }

    // Now Case 4: When Kth element is in between
    prev -> next = front;
    front -> back = prev;
    temp -> next = nullptr;
    temp -> back = nullptr;
    delete temp;
    return head;
}

//Deleting a given Node in DLL

void DeleteNodeDLL(Node* temp){
    
    Node* front = temp -> next;
    Node* prev = temp -> back;

 
    if(front == NULL){   //That means the temp/you are standing on the last element
        prev -> next = nullptr;
        temp -> back = nullptr;
        free (temp);
        return;
    }

    // If the Node that needs to be deleted is in between front and prev
    prev -> next = front;
    front -> back = prev;
    temp -> next = temp -> back = nullptr;
    free (temp);
}

//Insertion of Node before Head

Node* InsertBeforeHead(Node* head, int val){

    Node* NewHead = new Node(val, head, nullptr);
    head -> back = nullptr;
    return NewHead;
}

//Insertion of Node before Tail

Node* InsertBeforeTail(Node* head, int val){

    if(head -> next == NULL){
        return InsertBeforeHead(head,val); // DLL only contains one element
    }

    Node* temp = head;
    while(temp->next != NULL){  // Move to the last node (tail)
        temp = temp -> next;
    }
    Node* tail = temp;
    Node* prev = tail -> back;

    Node* NewNode = new Node(val,tail,prev);

    if(prev != NULL){
        prev -> next = NewNode;
    }
    tail -> back = NewNode;
    return head;
}


//Printing the DLL

void PrintDLL(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }

}

int main(){
vector<int> arr = {2,4,6,8}; 
Node* head = ConvertArray2DLL(arr);

// Printing array to DLL
cout<<"Array to DLL : ";
PrintDLL(head);
cout<<"\n";

// Deleting at Head
// head = DeleteHeadOfDLL(head);
// cout<<"After Deletion of head : ";
// PrintDLL(head);
// cout<<"\n";

//Deleting at Tail
// head = DeleteTailofDLL(head);
// cout<<"After Deletion of Tail : ";
// PrintDLL(head);

//Deleting at Kth Element
// head = DeleteKthEle(head,3);
// cout<<"After Deletion at Kth place : ";
// PrintDLL(head);

//Deleting the Node given
// DeleteNodeDLL(head->next->next);
// cout<<"After deletion of given Node: ";
// PrintDLL(head);

//Insert a Node before Head
// head = InsertBeforeHead(head,400);
// cout<<"DLL after inserting a node before head : ";
// PrintDLL(head);

//Insert a Node before Tail
head = InsertBeforeTail(head,500);
cout<<"DLL after inserting a node before tail : ";
PrintDLL(head);
}