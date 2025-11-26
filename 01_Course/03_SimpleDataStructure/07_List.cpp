#include<iostream>
#include<list>
using namespace std;
int main(){
    // List = A list is similar to a vector in that it can store
    //            multiple elements of the same type and dynamically grow in size.
    // # NOTE # = Unlike vectors, a list does not support random access,
    //              meaning you cannot directly jump to a specific index, or access elements by index numbers.

    // creat a list :
    // (1) : list - <type> - list_name;
    list<string>cars_1;
    // (2) : list - <type> - list_name = {elements.....};
    list<string>cars_2 = {"bmw","benz","volvo"};
    for(string i : cars_2){
        cout<< i<< endl;
    }
    cout<< "********************************\n";
    // Access a list :
    // NOTE = You cannot access list elements by referring to index numbers, like with arrays and vectors.
    // you can just use : [ .front()] and [ .back()]
    cout<< cars_2.front()<<endl;
    cout<< cars_2.back()<<endl;
    cout<<"***********************************\n";
    // change a list element
    // NOTE = You can also change the value of the first or the last element with the .front() and .back() functions
    cars_2.front() = "bmw_2";
    cars_2.back() = "volvo_2";
    for(string i : cars_2){
        cout<< i<< endl;
    }
    cout<< "********************************\n";
    // add list element :
    // NOTE = To add elements to a list, you can use .push_front() to insert an element at the beginning of the list
    //            and .push_back() to add an element at the end:
    cars_2.push_front("toyota");
    cars_2.push_back("tesla");
    for(string i : cars_2){
        cout<< i<< endl;
    }
    cout<< "********************************\n";
    // remove list element :
    // NOTE = To remove elements from a list, use .pop_front() to remove an element from the beginning of the list and
    //               .pop_back() to remove an element at the end:
    cars_2.pop_front();
    cars_2.pop_back();
    for(string i : cars_2){
        cout<< i<< endl;
    }
    cout<< "********************************\n";
    // list size :
    // list_name .size();
    cout<< cars_1.size()<<endl;
    cout<< cars_2.size()<<endl;
    cout<< "********************************\n";
    // Check if a List is Empty
    // list_name .empty();
    cout<< cars_1.empty()<<endl;
    cout<< cars_2.empty()<<endl;
    cout<< "********************************\n";
    // show list element :
    // foreach loop
    for(string i : cars_2){
        cout<< i<< endl;
    }
    cout<<"----------------------\n";



    return 0;
}