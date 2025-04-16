#include<bits/stdc++.h>
using namespace std;

//Follows LIFO principle (Last In First Out)
// Push, Pop, Top, Size, Empty, Clear
void explainStack(){

     stack<int> st;
     st.push(1); //{1}
     st.push(2); //{2,1}
     st.push(3); //{3,2,1}
     st.emplace(4); //{4,3,2,1}
     
     cout<<"TOP element is : ";
     cout<<st.top()<<endl; // Access the top element of the stack (4)
     
     st.pop();
     
     cout<<"After pop: "<<endl;
     cout<<st.top()<<endl; // Access the top element of the stack after pop (3)

    cout<<"Size of stack : "<<st.size()<<endl; // Get the size of the stack (3)
    cout<<st.empty()<<endl; // Check if the stack is empty (0 means not empty)  

     stack<int>st1, st2;
     st1.swap(st2); // Swap the contents of two stacks (st1 and st2)
     
     
     //rest are same function
}

int main(){
    explainStack();
    return 0;
}