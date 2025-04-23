#include<bits/stdc++.h>
using namespace std;

void Print1toNApp1( int i, int n){

     if(i > n)
     {
         return;
     }
    cout<<i<<" ";     
    Print1toNApp1(i+1,n);
}

void Print1toNApp2(int j,int n){   //Print Linearly from 1 to n but by backtrack 

  if(j<1)
  {
    return;
  }
  
  Print1toNApp2(j-1,n);
  cout<<j<<" ";
}



int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int i=1;
    cout<<"Using Approach 1 : "<<endl;
    Print1toNApp1(i,n);
    cout<<endl;
    cout<<"Using Approach 2 : "<<endl;
    Print1toNApp2(n,n);
}