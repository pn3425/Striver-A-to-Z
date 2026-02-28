#include <bits/stdc++.h>
using namespace std;

class Node{
    
    public:
    int data;
    Node* next;
    
    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
    
};

//  Convert Array to LL, TC -> O(n)
Node* ConvertArray2LL(vector<int>array){ 
    Node* head = new Node(array[0]);
    Node* mover = head;
    
    for(int i=1;i<array.size();i++){
        Node* temp = new Node(array[i]);
        mover->next = temp;  //Link
        mover = temp;        // Move the mover to temp
    }
    return head;
    
}

//For ll Traversal  (Print the complete converted array to LL)
Node* PrintLL(Node* head){
    Node* temp = head; 
    //cout<<"LL Printing : ";
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return head;
}
    
// Length of LL
int Length(Node* head){ 
    Node* temp = head; 
    int cnt = 0;
    while(temp){
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

// Search if element there or not

int SearchElement(Node* head, int val){
    Node* temp = head;
    while(temp){
        if(temp->data == val) return 1;
        temp = temp -> next;
        }
    return 0;
}

// Deletion of head
Node* DeleteHead (Node* head){
    if(head == NULL) return head;
    Node* temp = head;
    head = head -> next;
    delete temp;
    return head; // Returning new head
}


// Deletion of Tail (Ensure that last element is removed and 2nd last points to NULLPTR)

Node* DeleteTail(Node* head){
    if(head == NULL || head->next == NULL) return NULL;
    Node* temp = head;

     // Atleast 4 elements there in total
    while(temp->next->next != NULL){
        temp = temp -> next;
    }
    //Free the last element
    delete temp->next;

    // We reached 2nd last element
    temp -> next = nullptr; // Assign the 2nd last element next as nullptr

    return head;
}

//Delete at any kth element

Node* DeleteAtK(Node* head, int k){

    if(head == NULL) return head;

    // If K=1 (Deleting the head)
    if(k == 1){
        Node* temp = head;
        head = head ->next;
        delete temp;
        return head;
    }
    int count = 0;
    Node* temp = head;
    Node* prev = NULL;

    //If k=Any number including tail (But less than the size of LL)

    while(temp != NULL){
        count++;
        if(count == k){
            prev -> next = prev -> next -> next; // Create Link
            delete temp;
            break;
        }
        prev = temp;    //Remember
        temp = temp -> next; // Then move further
    }
    return head;
}

int main()
{
    vector<int> arr = {22,3,4,5};
    Node* head = ConvertArray2LL(arr);

    // Output for checking ConvertArray2LL
    cout<<"Printing Head Data: "<<head->data<<"\n"; 
    
    PrintLL(head);

    cout<<"\n";
    
    //For Length
    cout<<"Length of LL: "<<Length(head)<<"\n";
    
    //For SearchElement
    cout<<"SearchElement Present or not: "<<SearchElement(head,5)<<"\n";

    //For Deletion/Removal of Head (Uncomment the below three lines)

    // head = DeleteHead(head);
    // cout<<"New head";
    // PrintLL(head);

    //For Deletion of Tail

    // head = DeleteTail(head);
    // cout<<"Tail Deleted: ";
    // PrintLL(head);
    
    head = DeleteAtK(head,3);
    cout<<"Element deleted at particular kth posi: ";
    PrintLL(head);
}
