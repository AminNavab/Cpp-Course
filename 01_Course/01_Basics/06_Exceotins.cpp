#include<iostream>
using namespace std;
int main(){
    // When executing C++ code, different errors can occur: coding errors made by the programmer,
    //            errors due to wrong input, or other unforeseeable things.

    // try = The try statement allows you to define a block of code to be tested for errors while it is being executed.
    // throw = The throw keyword throws an exception when a problem is detected, which lets us create a custom error.
    // catch = The catch statement allows you to define a block of code to be executed, if an error occurs in the try block.
    // road_map : trt{# code (x)} ==>> (x = 1) ==>> next_code
    //                   ==>> (x = 0) ==>> throw(y) ==>> catch(y){ # code}

    // try{
    //    # code (to try)
    //    throw exception;
    // }
    // catch(){
    //     # code (to catch)
    // }
    try{
        int age;
        cout<<"enter your age: ";
        cin>>age;
        if(age>=18){
            cout<<"you can drive...\n";
        }
        else{
            throw age;
        }
    }
    catch(int age){
        cout<<"you can not drive...\n";
        cout<<"your age is "<<age<<endl;
    }
    cout<<"--------------------------\n";
    try{
        int age;
        cout<<"enter your age: ";
        cin>>age;
        if(age>=18){
            cout<<"you can drive...";
        }
        else{
            throw age;
        }
    }
    catch(...){
        cout<<"you can not drive...\n";
    }




    return 0;
}