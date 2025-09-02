#include<bits/stdc++.h>
using namespace std;

void Value(int x)      //Pass By Value
{
    x = x + 1;
    cout<<"Inside Function : "<<" "<<x<<endl;
}

void Reference(int &x)  //pass By Reference
{
    x = x + 1;
    cout<<"Inside Function : "<<" "<<x<<endl;
}

int main(){
    int a = 5;
    Value(a);
    cout<<"Outside Function : "<<" "<<a<<endl;

    int b = 10;
    Reference(b);
    cout<<"Outside Function : "<<" "<<b;

}