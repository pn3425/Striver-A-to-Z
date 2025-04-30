#include<bits/stdc++.h>
using namespace std;

int factorial(int n) // Not Parameterized Approach
{
  if(n==0)
    return 1;
  return n * factorial(n-1);    
}

int main()
{
 int n;
 cout<<"Enter n : "<<endl;
 cin>>n;
 int res = factorial(n);
 cout<<"RESULT IS : "<<res;

}

/*
Recursion Tree :  when n=4

factorial(4) = 4 * factorial(3)
                    |
                    --> factorial(3) = 3 * factorial(2)
                                            |
                                            --> factorial(2) = 2 * factorial(1)
                                                                    |
                                                                    --> factorial(1) = 1 * factorial(0)
                                                                                            |
                                                                                            --> factorial(0) = 1












*/