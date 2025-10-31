#include<iostream>
#include<algorithm>
#include<vector>
#include<list>
#include<set>
#include<deque>
#include<map>
#include<string>

using namespace std;
int main(){
    // ALGORITHM = Algorithms are used to solve problems by sorting, searching, and manipulating data structures.
    //    for = vector , set , list , deque , map
    cout<<"********************\n";
    // sort = sort(first_element , last_element);
    vector<int> x = {1,8,6,4,9,5,7,3,4,9,3,1,7};
    sort(x.begin(), x.end());
    for(int i : x){
     cout<< i<< endl;
    }
    cout<<"--------------------\n";
    // To reverse the order : {being() == rbeing() and end() == rend()}
    sort(x.rbegin(), x.rend());
    for(int i : x){
      cout<< i<< endl;
    }
   cout<<"*****************\n";
   // serch => variabel = find(first_element , last_element , ......);

   auto it = find(x.begin(), x.end(), 10);
   cout<< *it<<endl;
   if(it != x.end()){
    cout<<"it's was found \n";
   }
   else{
    cout<<"it's was not found \n";
   }
   cout<<"-------------\n";
   // To search for the first element that is greater than a specific value, you can use the upper_bound().
   // NOTE = The upper_bound() function is typically used on sorted data structures.
   //        That's why we first sort the vector in the example above.
   // serch => variabel = upper_bound(first_element , last_element , ......);
   vector<int>x_1 = {1,2,5,4,7,8,9,3,4,5,6,7,1,5};
   sort(x_1.begin(), x_1.end());
   it = upper_bound(x_1.begin(), x_1.end(), 6);   // we named it at befor !!!!
   cout<< *it<<endl;
   cout<<"-------------\n";
   //  smallest element = min_element(first_element , last_element);
   it = min_element(x_1.begin(), x_1.end());
   cout<< *it<< endl;
   // largest element = max_element(first_element , last_element);
   it = max_element(x_1.begin(), x_1.end());
   cout<<*it<< endl;
   cout<<"*********************\n";
   // sort string
   string name = "amin navabzade fro IRAN.";
   sort(name.begin(), name.end());
   cout<<"sort name is : "<<name<<endl;
   cout<<"*********************\n";
   // Modifying Algorithms :
   // copy = copy(first_element_vector 1 , last_element_vector 1, fist_element_new_vector)
   vector<int>x_copy(14);
   copy(x_1.begin(), x_1.end(), x_copy.begin());
   for(int i : x_copy){
    cout<< i<<endl;
   }
   cout<<"--------------\n";
   // fill = To fill all elements in a vector with a value, you can use the fill() function:
   // fill(first_element , last_element , value)
   vector<int>x_fill(5);
   fill(x_fill.begin(), x_fill.end(), 111);
   for(int i : x_fill){
    cout<< i<< endl;
   }

   // Complete Algorithm Reference :
   // adjacent_find() = Finds a pair of consecutive elements with the same value in a data range
   // all_of() = Checks if all of the elements in a data range match a condition
   // any_of() = Checks if at least one element in a data range matches a condition
   // binary_search() =	An efficient algorithm for finding if a value exists in a sorted data range
   // copy() = Copies the values from a data range into a different data range
   // count() =	Counts the number of times that a value occurs in a data range
   // count_if() =	Counts the number of elements in a data range that match a condition
   // fill() =	Writes a value into every element of a data range
   // find() =	Finds the first element of a data range with a specified value
   // find_first_of() =	Finds the first element of a data range which matches one of several specified values
   // find_if() = Finds the first element of a data range which matches a condition
   // find_if_not() = Finds the first element of a data range which does not match a condition
   // for_each() =	Runs a function on every element in a data range
   // includes() =	Checks if all of the values in a sorted data range exist in another sorted data range
   // is_permutation() =	Checks if a data range is a permutation of another
   // is_sorted() =	Checks if a data range is sorted
   // is_sorted_until() =	Finds the position in a data range at which elements are no longer sorted
   // lower_bound() =	Finds the first element at or above a specified lower bound in a sorted data range
   // max_element() = 	Finds the element with the highest value in a data range
   // merge() =	Merges the values of two data ranges into a new data range
   // min_element() =	Finds the element with the lowest value in a data range
   // none_of() =	Checks if none of the elements in a data range match a condition
   // random_shuffle() =	Randomly rearranges the elements in a data range
   // replace() =	Replaces all occurrences of a value in a data range with a different value
   // replace_copy() =	Creates a copy of a data range with all occurrences of a specified value replaced with a different value
   // replace_copy_if() =	Creates a copy of a data rage where all values that match a condition are replaced with a different value
   // replace_if() =	Replaces all values in a data range that match a condition with a different value
   // reverse() =	Reverses the order of elements in a data range
   // reverse_copy() =	Creates a copy of a data range with the elements in reverse order
   // search() =	Finds a specified sequence of values in a data range
   // sort() =	Sorts the values of a data range in ascending order
   // swap() =	Swaps the values of two variables
   // swap_ranges() =	Swaps the values of two data ranges of the same size
   // upper_bound() =	Finds the first element above a specified upper bound in a sorted data range















    return 0;
}