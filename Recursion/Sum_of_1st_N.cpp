#include<bits/stdc++.h>
using namespace std;

void Sumof1NApp1(int i,int sum) //Using Parameterized Approach
{
 if(i<1)
 {
    cout<<sum<<endl;
    return;
 }

 Sumof1NApp1(i-1,sum+i);
}

int Sumof1NApp2(int n) //Concept is n + f(n-1)
{
    if(n==0)
        return 0;
    return n + Sumof1NApp2(n-1);
}

int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int sum=0;
    cout<<"Result using App1 is : ";
    Sumof1NApp1(n,sum);
    int res = Sumof1NApp2(n);
    cout<<"Result using App2 is : "<<res;
}

/*
Recursion Tree : 

For Sumof1NApp1 :

Sumof1N(3, 0)  // Initial call
    |
    --> Sumof1N(2, 3)  // sum = 0 + 3
        |
        --> Sumof1N(1, 5)  // sum = 3 + 2
            |
            --> Sumof1N(0, 6)  // sum = 5 + 1
                |
                --> Base case reached: Print 6
                
For Sumof1NApp2 :

Sumof1NApp2(3)                             Final Result -> 6
    |
    --> 3 + Sumof1NApp2(2)                 3+3=6
            |
            --> 2 + Sumof1NApp2(1)         2+1=3
                    |
                    --> 1 + Sumof1NApp2(0) 1+0=1
                            |
                            --> Base case reached: Return 0

*/

/*LEARNING : So in both approaches 
For App1 : You go on till the base condition is met, and then print

For App2 : You go on till the base condition, and return from their 
           to the previous function call to get the sum
*/