#include<bits/stdc++.h>
using namespace std;

void PrintName(int i, int n)
{
    if(i > n)
    {
        return;
    }
  cout<<"Pranjal ";
  PrintName(i+1,n);
}

int main()
{
  int n;
  int i=1;
  cout<<"Enter n : ";
  cin>>n;
  PrintName(i,n);
}