#include<iostream>
#include<deque>
using namespace std;
int main(){
    // deque = A deque (stands for double-ended queue) however,
    //         is more flexible, as elements can be added and removed from both ends (at the front and the back).
    //         You can also access elements by index numbers.
    
    // creat deque :
    // (1) = deque - <type> - deque_name ;
    deque<string>cars_1;
    // (2) = deque - <type> - deque_name = {elements........};
    deque<string>cars_2 = {"bmw","benz","volvo"};
    for(string i : cars_2){
        cout<< i<< endl;
    }
    cout<<"*****************************\n";
    // access a deque :
    // (1) = deque_name [index];
    cout<< cars_2[0]<<endl;
    cout<< cars_2[1]<<endl;
    cout<< cars_2[2]<<endl;
    
    // (2) = deque .at(index);
    // Note : The .at() function is often preferred over square brackets [] because it throws an error message if the element is out of range:
    cout<< cars_2.at(0)<<endl;
    cout<< cars_2.at(1)<<endl;
    cout<< cars_2.at(2)<<endl;
    // cout<< cars_2.at(x>2)    ===>>> (will throw an exception)!!!!!!!!!!!!
    
    // You can also access the first or the last element of a deque with the .front() and .back() functions:
    cout<< cars_2.front()<<endl;
    cout<< cars_2.back()<<endl;
    cout<< "************************************\n";
    // change deque element :
    // (1) = deque_name [index] = new_element;
    cars_2[0] = "BMW";
    cars_2[1] = "BENZ";
    // (2) = deque_name .at(index) = new_element;
    cars_2.at(2) = "VOLVO";
    for(string i : cars_2){
        cout<< i<< endl;
    }
    cout<<"*****************************\n";
    // add deque element : To add elements to a deque,
    //                     you can use .push_front() to insert an element at the beginning of the deque
    //                     and .push_back() to add an element at the end:

    cars_2.push_front("tesla");  // to insert an element at the beginning of the deque
    cars_2.push_back("ford");    // to add an element at the end

    for(string i : cars_2){
        cout<< i<< endl;
    }
    cout<<"*****************************\n";
    // remove deque element : To remove elements from a deque,
    //                        use .pop_front() to remove an element from the beginning of the deque
    //                        and .pop_back() to remove an element at the end:

    cars_2.pop_front();
    cars_2.pop_back();

    for(string i : cars_2){
        cout<< i<< endl;
    }
    cout<<"*****************************\n";
    // deque size :
    // deque_name .size();
    cout<< cars_2.size()<<endl;
    cout<<"*****************************\n";
    // Check if a Deque is Empty :
    // deque_name .empty();
    cout<< cars_2.empty()<<endl;
    cout<< cars_1.empty()<<endl;
    cout<<"*****************************\n";
    // show deque :
    // foreach loop :
    for(string i : cars_2){
        cout<< i<< endl;
    }
    cout<<"--------------------------\n";
    // for loop :
    for(int i = 0; i<cars_2.size(); i++){
        cout<< cars_2[i]<<endl;
    }
    














    return 0;
}