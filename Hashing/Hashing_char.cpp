#include<bits/stdc++.h>
using namespace std;

int main(){

  string s;
    cout<<"Enter the string: ";
    cin>>s;

    //Pre Compute
    int hash[26] = {0}; // Hash table of size 26 initialized to 0 
   // take int hash[256] = {0}; for all ascii values
    for(int i=0;i<s.size();i++){
    hash[s[i]-'a']++;
    }

    int q;
    cout<<"Enter the number of queries: ";
    cin>>q;
    while(q--)
    {
        cout<<"Enter the character for which you want to find the frequency: ";
        char ch;
        cin>>ch;
        //Fetch
        cout<<hash[ch-'a']<<endl; // Print the frequency of the character 
        //cout<<hash[ch]<<endl; // Print the frequency of the character
    }

}

//For Upper Case - hash[ch-'A']
//For Lower Case - hash[ch-'a']
//For All ASCII - hash[ch] (0-255)