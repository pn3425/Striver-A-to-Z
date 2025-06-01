#include<bits/stdc++.h>
using namespace std;


//Follows FIFO principle (First In First Out) 
//TC -> O(1)
void ExplainQueue(){
  queue<int> q;
  q.push(1); //1
  q.push(2); //1,2,
  q.push(4); //1,2,4

  q.back() += 5;
  cout<<q.back()<<endl; //9

// q is {1,2,9}
  cout<<q.front()<<endl; //1
  q.pop(); //{2,9}

  cout<<q.front()<<endl; //2

}
  int main(){
    ExplainQueue();
    return 0;
}