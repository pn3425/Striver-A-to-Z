#include<bits/stdc++.h>
using namespace std;

void Value(int x)      //Pass By Value
{
    x = x + 1;
    cout<<"Inside Function : "<<" "<<x<<endl;   //6
}

void Reference(int &x)  //pass By Reference
{
    x = x + 1;
    cout<<"Inside Function : "<<" "<<x<<endl;  //11
}

int main(){
    int a = 5;
    Value(a);
    cout<<"Outside Function : "<<" "<<a<<endl;  //5

    int b = 10;
    Reference(b);
    cout<<"Outside Function : "<<" "<<b;       //11

}