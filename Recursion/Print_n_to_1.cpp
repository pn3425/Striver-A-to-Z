#include<bits/stdc++.h>
using namespace std;

void PrintNto1App1(int n){ //Easy my approach

  if(n == 0)
  {
    return;
  }
  cout<<n<<" ";
  PrintNto1App1(n-1);
}

void PrintNto1App2(int i,int n) //Striver App1
{
    if(i<1)
    {
        return;
    }
    cout<<i<<" ";
   PrintNto1App2(i-1,n);
}

void PrintNto1App3(int j,int n) //Striver App2 (By Backtrack)
{
  if(j>n)
  {
    return;
  }
  PrintNto1App3(j+1,n);
  cout<<j<<" ";
}

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Approach 1 :"<<endl;
    PrintNto1App1(n);
    cout<<endl;
    cout<<"Approach 2 :"<<endl;
    PrintNto1App2(n,n);
    cout<<endl;
    int j=1;
    cout<<"Approach 3 :"<<endl;
    PrintNto1App3(j,n);
}
