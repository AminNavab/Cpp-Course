#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector = A vector in C++ is like a resizable array.
    //         Both vectors and arrays are data structures used to store multiple elements of the same data type.
    //         The difference between an array and a vector,
    //         is that the size of an array cannot be modified (you cannot add or remove elements from an array).
    //         A vector however, can grow or shrink in size as needed.
    // # NOTE # = You can add and remove elements from both the beginning and at the end of a list,
    //                while vectors are generally optimized for adding and removing at the end.
    // creat a vector :
    // (1) = vector - <type> - vector_name ;
    // (2) = vector - <type> - vector_name = {values.....} ;
    // (3) = vector - <type> - vector_name - (size , basec_element);
    vector <string> cars = {"bmw","benz","volvo"};
    vector<int>num_1(5);    // num_1 have 5 element (basec = 0)
    vector<int>num_2(5, 10);  // num_2 have 5 element(basec = 10)
    for(int i : num_2){
        cout<<i<<endl;
    }
    cout<< "********************************\n";
    // access a vector :
    // (1) vector_name[index];
    cout<< cars[0]<< endl;
    cout<< cars[1]<< endl;
    cout<< cars[2]<< endl;
    // (2) vector_name . at(index) ;
    // ## Note: The .at() function is often preferred over square brackets [] because it lets you know if an error occurs.
    cout<< cars.at(0)<<endl;
    cout<< cars.at(1)<<endl;
    cout<< cars.at(2)<<endl;
    // cout<< cars . at(10)<<endl;  ==>> throws an error message!!! 
    // access the first or the last element of a vector = [.front()] and [.back()]
    cout<< cars.front()<<endl;
    cout<< cars.back()<<endl;
    cout<<"***********************************\n";
    // change a vector element:
    // (1) vector_name[index] = new_element;
    cars[0] = "bmw_1";
    // (2) vector_name . at(index) = new_element;
    cars.at(1) = "benz_1";

    for(string i : cars){
        cout<< i<<endl;
    }
    cout<<"***********************************\n";
    // add vector element : The biggest difference between a vector and an array is that vectors can grow dynamically.
    //                          That means you can add or remove elements from the vector.
    // vector_name . push_back(new_element);
    cars.push_back("tesla");
    cars.push_back("purshe");
    cars.push_back("ferari");
    for(string i : cars){
        cout<< i<<endl;
    }
    // insert = This function adds the given value to the specified location.
    // vector_name .insert(index , new_element);
    cars.insert(cars.begin() , "pride_1");
    cars.insert(cars.begin()+1 , "pride_3");
    cars.insert(cars.end() , "pride_2");
    cars.insert(cars.end()-1 , "pride_4");
    cout<<"------------------\n";
    for(string i : cars){
        cout<< i<<endl;
    }
    cout<<"***********************************\n";
    // remove vector element:
    // note : Note: Elements are usually only added and removed from the end of the vector.
    //          If you need to add or remove elements from both ends, it is often better to use a deque instead of a vector.
    // vector_name . pop_back();   ===>>> **** removes an element from the end of the vector ****
    cars.pop_back();
    for(string i : cars){
        cout<< i<<endl;
    }
    cout<<"***********************************\n";
    // vector size:
    // vector_name . size();
    cout<<cars.size()<<endl;
    cout<<"***********************************\n";
    // Check if a Vector is Empty:
    // vector_name . empty();
    cout<< cars.empty()<<endl;  // output = 0 : false
    vector<string>cars_2;
    cout<< cars_2.empty()<<endl;  // output = 1 : true
    cout<<"***********************************\n";
    // show vector:
    // (1) foreach loop:
    for(string i : cars){
        cout<< i<<endl;
    }
    cout<<"--------------------\n";
    // (2) for loop:
    for(int i = 0; i<cars.size();i++){
        cout<<cars[i]<<endl;
    }
    cout<<"********************\n";
    // capacity = We can add a few more elements.
    // vector_name .capacity()
    vector<int> num_3(5);
    vector<int> num_4 = {1,2,3,4,5};
    cout<< num_3.capacity()<<endl; 
    cout<< num_4.capacity()<<endl; 
    cout<<"*************************\n";
    // resize = This function changes the elements in a vector. If the size is reduced,
    //              elements are removed from the end of the vector, and if the size is increased,
    //              elements (with the default value or the specified value) are added.
    // vector_name .resize(new_size);
    vector<int>num_5 = {1,2,3,4,5};
    vector<int>num_6 = {1,2,3,4,5};
    num_5.resize(10);
    num_6.resize(10,111);
    for(int i :num_5){
        cout<< i<<endl;
    }
    for(int i :num_6){
        cout<< i<<endl;
    }
    cout<<"*************************\n";
    // reserve = This function sets the vector capacity (the number of elements that
    //            can be stored in the vector without the need to increase the capacity) to the given value.
    //            Since the vector does not have a fixed size, increasing the elements may require reallocating memory to
    //            transfer data to the new space. Therefore, if the required capacity is predicted and reserved,
    //            memory can be managed better and frequent changes can be prevented.
    // vector_name .reserve(capacity);
    vector<int>num_7 = {1,2,3,4};
    num_7.reserve(111);
    for(int i :num_7){
        cout<< i<<endl;
    }
    cout<<"************************\n";
    // being and end = The begin function returns an iterator pointer to the first element of the vector,
    //                 and the end function returns an iterator pointer to the element after the last element of the vector.
    vector<int>num_8 = {11,22,33,44};
    vector<int> :: iterator it;
    for(it = num_8.begin(); it != num_8.end(); it++){
        cout<< *it <<endl;
    }
    cout<<"*********************\n";
    // swap :
    // vector_name_1 .swap(vector_name_2);
    vector<int>x_1 = {1,2,3,4};
    vector<int>x_2 = {11,22,33,44};
    x_1.swap(x_2);
    for(int i : x_1){
        cout<<i<<endl;
    }
    cout<<"----------------------\n";
    for(int i : x_2){
        cout<<i<<endl;
    }
    cout<<"*****************************\n";



    return 0;
}