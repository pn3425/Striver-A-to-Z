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
head = DeleteTailofDLL(head);
cout<<"After Deletion of Tail : ";
PrintDLL(head);
}