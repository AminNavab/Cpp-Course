#include<iostream>
#include<array>
using namespace std;
int main(){
    // array class like normal array but better !!!!!!!!!
    cout<< "**************************\n";
    // creat a array_class :
    // array - <type , size> - array_name;
    array<string, 5>cars_1;
    // array - <type , size> - array_name = {elements......};
    array<string, 3>cars_2 = {"bmw", "benz","volvo"};
    cout<<"***********************\n";
    // access array element :
    // (1) = array_name [index];
    cout<<cars_2[0]<<endl;
    cout<<cars_2[1]<<endl;
    cout<<cars_2[2]<<endl;
    cout<<"-------------------------\n";
    // (2) = array_name .at(index);
    cout<<cars_2.at(0)<<endl;
    cout<<cars_2.at(1)<<endl;
    cout<<cars_2.at(2)<<endl;
    cout<<"-------------------------\n";
    // first element :
    // array_name .front();
    cout<< cars_2.front()<<endl;
    // last element :
    // array_name .back();
    cout<<cars_2.back()<<endl;
    cout<<"*************************\n";
    // swap arrays :
    // array_name_1 .swap(array_name_2);
    array<int , 5> num_1 = {1,2,3,4,5};
    array<int , 5> num_2 = {11,22,33,44,55};
    num_1.swap(num_2);
    for(int i : num_1){    // num_1
        cout<< i<<endl;
    }
    cout<<"------------------------\n";
    for(int i : num_2){   // num_2
        cout<< i<<endl;
    }
    cout<<"************************\n";
    // fiil (value) :
    // array_name .fiil(new_value);
    array<int, 5> x = {1,2,3,4,5};
    x.fill(11);
    for(int i : x){
        cout<< i << endl;
    }
    cout<<"********************\n";
    


    return 0;
}