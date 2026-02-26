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

int main()
{
    vector<int> arr = {22,3,4,5};
    Node* head = ConvertArray2LL(arr);
    cout<<"Printing Head Data: "<<head->data<<"\n"; // Output for checking ConvertArray2LL
    
    //For ll Traversal  (Print the complete converted array to LL)
    Node* temp = head; 
    cout<<"LL Printing : ";
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
    cout<<"\n";
    
    //For Length
    cout<<"Length of LL: "<<Length(head)<<"\n";
    
    //For SearchElement
    cout<<" SearchElement Present or not: "<<SearchElement(head,5);

}
