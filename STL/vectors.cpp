//Vector is a container that is dynamically resizable
#include<bits/stdc++.h>
using namespace std;

void explainvector(){
     //Defining vector in multiple approaches--------------------------------------------------------------------------------------------------

    vector<int> v; // Create an empty vector of integers
    v.push_back(1); // Add an element to the end of the vector
    v.emplace_back(2); // Add an element to the end of the vector using emplace_back
    v.push_back(3); // Add another element to the end of the vector
    
    vector<pair<int, int>> v1; // Create an empty vector of pairs of integers
    v1.push_back({1, 2}); // Add a pair to the end of the vector
    v1.emplace_back(1, 2); // Add a pair to the end of the vector using emplace_back

    vector<int> v2(5, 100); // Create a vector of size 5, initialized with the value 10
    
    vector<int> v3;

    vector<int> v4(3, 37);
    vector<int> v5(v4); // Create a copy of v4


    //Accessing elements of vector--------------------------------------------------------------------------------------------------

    cout<<v[0]<<" "<<v[1]<<endl; // Access the first and second elements of the vector  
    
    //Usign Iterators to access elements of vector
    vector<int>::iterator it = v.begin(); // Create an iterator pointing to the beginning of the vector
    cout<<*it<<" "; // Dereference the iterator to access the first element of the vector
    it++; // Move the iterator to the next element
    cout<<*it<<endl; // Dereference the iterator to access the second element of the vector

   // it = it + 2;
   // cout<<*it; // Dereference the iterator to access the third element of the vector

  // vector<int>::iterator it_end = v.end(); // Create an iterator pointing to the end of the vector, points next to the last element {10,20,30}
    //it--; // Move the iterator to the last element of the vector

   //vector<int>:: reverse_iterator it1 = v.rend(); // Create a reverse iterator pointing to the end of the vector Pointing here{10,20,30}

   //vector<int>::reverse_iterator it2 = v.rbegin(); // Create a reverse iterator pointing to the beginning of the vector Pointing at 30 {10,20,30}


   cout<<v.back()<<" "; // Access the last element of the vector using back()
   cout<<endl;

   //Printing--------------------------------------------------------------------------------------------------

   //Using loops to access elements of vector
   cout<<"Using for loop"<<endl;
   for(vector<int>:: iterator it = v.begin(); it != v.end(); it++){
       cout<<*it<<" "; // Access each element of the vector using an iterator
   }

   cout<<endl;
   //Using Auto   (Auto keyword is used to automatically deduce the type of a variable)
   cout<<"Using Auto"<<endl;
   for(auto it = v.begin(); it != v.end(); it++){
       cout<<*it<<" "; // Access each element of the vector using an iterator
   }

   //Using For-each
    cout<<endl;
    cout<<"Using For-each"<<endl;
    for(auto it : v){   //Here Auto is of int data type
         cout<<it<<" "; // Access each element of the vector using a range-based for loop
      }

    //Deleting--------------------------------------------------------------------------------------------------
    //v.erase(v.begin()); // Delete the first element of the vector

    v.erase(v.begin(), v.begin() + 1); // Delete the first element of the vector of pairs [start,end)
   // For Eg {10,20,30,40,50}
   // v.erase(v.begin() + 2, v.begin() + 4)  // Delete the elements from index 2 to 4 (exclusive) of the vector of pairs [start,end)
   //So the vector will be {10,20,50}
   cout<<endl;

   //--------------------INSERTION--------------------------------------------------------------------------------------------------

   vector<int>v6(2,100); //{100,100}
   v6.insert(v6.begin(), 200); // {200,100,100} Insert 200 at the beginning of the vector
   v6.insert(v6.begin() + 1,2,10); // {200,10,10,100,100} Insert 2 elements with value 10 at index 1 of the vector

   vector<int>Tobeinserted(2, 50); // Create a vector of size 2, initialized with the value 50
   v6.insert(v6.begin(), Tobeinserted.begin(), Tobeinserted.end()); // Insert the elements of Tobeinserted at the beginning of v6
   //So the vector will be {50,50,200,10,10,100,100}
   cout<<"Output of vector after insertion"<<endl;
   for(auto i : v6){
    cout<<i<<" "; // Access each element of the vector using a range-based for loop
   }

   //-----------------------------------Additional Functions--------------------------------------------------
    cout<<endl;
    cout<<"Size of vector is "<<v.size()<<endl; // Get the size of the vector   
    v6.pop_back(); // Remove the last element of the vector Removes 100

    vector<int> t = {10,20};
    vector<int> p = {30,40};
    t.swap(p); // Swap the contents of two vectors t and p
    cout<<"Output of vector t after swap"<<endl;
    for(auto i : t){
    cout<<i<<" "; // Access each element of the vector using a range-based for loop
    }

    //v.clear(); // Clear the contents of the vector v, making it empty
    //v.empty(); // Check if the vector v is empty, returns true if it is empty, false otherwise
}

int main(){
    explainvector();
    return 0;
}