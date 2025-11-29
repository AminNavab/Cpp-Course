#include<iostream>
#include<vector>
#include<list>
#include<set>
#include<map>
#include<deque>
#include<queue>
#include<stack>
#include<algorithm>
using namespace std;
int main(){
    // iterator = Iterators are used to access and iterate through elements of data structures (vectors, sets, etc.),
    //             by "pointing" to them.
    //             It is called an "iterator" because "iterating" is the technical term for looping.
    cout<<"*******************\n";
    vector<string>cars = {"bmw","benz","ford","volvo"};
    // Create a vector iterator called it :
    // vactor - <type> :: iterator it;
    vector<string> :: iterator it;
    for(it = cars.begin(); it != cars.end(); it++){
        cout<< *it<< endl;
    }
    // First we create a vector of strings to store the names of different car manufactures.
    // Then we create a "vector iterator" called it, that we will use to loop through the vector.
    // Next, we use a for loop to loop through the vector with the iterator. The iterator (it) points to the first element in the vector (cars.begin())
    //             and the loop continues as long as it is not equal to cars.end().
    // The increment operator (++it) moves the iterator to the next element in the vector.
    // The dereference operator (*it) accesses the element the iterator points to.
    // NOTE = Note: The type of the iterator must match the type of the data structure it should iterate through (string in our example)
    // (#) begin() returns an iterator that points to the first element of the data structure.
    // (#) end() returns an iterator that points to one position after the last element.
   cout<< "*********************\n";
   // point to the .... element :
   // it = vector_name . {being() or end()} - op ;
   // it = cars.begin();
   // it = cars.begin() + 1;
   // it = cars.begin() + 2;
   // ==>> it = cars.begin() + x;
   // it = cars.end();
   // it = cars.end() - 1;
   // it = cars.end() - 2;
   // ==>> it = cars.end() - x;
   cout<<"********************\n";
   // auto keyword :
   // The auto keyword allows the compiler to automatically determine the correct data type,
   //        which simplifies the code and makes it more readable.
   // vector<type> :: iterator it = vector_name .{end() or being()} ===== auto it = vector_name .{end() or being()};
   // auto it = cars.begin();
   // auto it = cars.end();

   for(auto it = cars.begin(); it != cars.end(); it++){
    cout<< *it<<endl;
   }
   cout<<"*******************\n";
   // foreach loop :
   // When you are just reading the elements, and don't need to modify them, the for-each loop is much simpler and cleaner than iterators.
   // However, when you need to add, modify, or remove elements during iteration,
   //        iterate in reverse, or skip elements, you should use iterators.
   for(string i : cars){
    cout<< i<<endl;
   }
   cout<<"--------------------\n"; 
// Loop through vector elements
for (auto it = cars.begin(); it != cars.end();it++ ) {
    if (*it == "bmw") {
      cout<< "bmw is in cars_vector"<<endl;
    } else {
      cout<< "(=)"<<endl;
    }
  }
   cout<<"**********************\n";
   // Iterate in Reverse :
   // (#) = rbeing() = being();
   // (#) = rend() = end();
   for(auto it = cars.rbegin(); it != cars.rend(); it++){
    cout<< *it<<endl;
   }
   cout<<"*************************\n";
   // Iterate Through other Data Structures :
   // Iterators are great for code reusability since you can use the same syntax for iterating through vectors,
   //       lists, deques, sets and maps:
   
   // LIST :
   list<int>num_1 = {1,2,3,4,5};
   for(auto it = num_1.begin(); it != num_1.end(); it++){
    cout<< *it<<endl;
   }
   cout<<"*******************************\n";
   // SET :
   set<int>num_2 = {11,22,33,44,55};
   for(auto it = num_2.begin(); it != num_2.end(); it++){
    cout<< *it<<endl;
   }
   cout<<"*******************************\n";
   // QUEUE and STACK = we can't!!!!!!!!!!!
   cout<<"*************************\n";
   //DEQUE :
   deque<int>num_3 {111,222,333,444,555};
   for(auto it = num_3.begin(); it != num_3.end(); it++){
    cout<< *it<<endl;
   }
   cout<<"*******************************\n";
   // MAP :
   map<int, int>num_4 = {{1111,1111},{2222,2222},{3333,3333},{4444,4444},{5555,5555}};
   for(auto it = num_4.begin(); it != num_4.end(); it++){
    cout<< it ->first<< " = "<< it->second<<endl;
   }
   cout<<"*******************************\n";
   // ALGORITHMS :
   // sort() = sort(first_element , last_element);
   vector<int> x_sort = {1,8,6,4,9,5,7,3,4,9,3,1,7};
   sort(x_sort.begin(), x_sort.end());
   for(int i : x_sort){
    cout<< i<< endl;
   }
   cout<<"--------------------\n";
   // To reverse the order : {being() == rbeing() and end() == rend()}
   sort(x_sort.rbegin(), x_sort.rend());
   for(int i : x_sort){
    cout<< i<< endl;
   }
   // set , list , deque , map : like vector .
   cout<<"*************************\n";





    return 0;
}