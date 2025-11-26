#include<iostream>
#include<set>
using namespace std;
int main(){
    // Set = A set stores unique elements where they:
    // *1* = Are sorted automatically in ascending order.
    // *2* = Are unique, meaning equal or duplicate values are ignored.
    // *3* = Can be added or removed, but the value of an existing element cannot be changed.
    // *4* = Cannot be accessed by index numbers, because the order is based on sorting and not indexing.
    cout<<"**********************\n";
    // Elements in a set are unique, which means they cannot be duplicated or equal.
    // For example, if we try to add "BMW" two times in the set, the duplicate element is ignored.

    // creat a set :
    // (1) = set - <type> - set_name;
    set<string>cars_1;
    
    // (2) = set - <type> set_name = {elements.....};
    set<string>cars_2 = {"bmw","benz","bmw","benz","bmw","volvo","ford"};
    for(string i : cars_2){
        cout<< i<< endl;
    }

    set<int>number = {1,8,6,4,5,3,2,7,9,4,5,7,8,6,1,2,3,8,7};
    for(int i : number){
        cout<< i<< endl;
    }
    cout<<"**************************\n";
    // Sort a Set in Descending Order
    // By default, the elements in a set are sorted in ascending order.
    //        If you want to reverse the order, you can use the greater<type> functor inside the angle brackets, like this.
    set<int , greater<int>>number_1 = {1,8,6,4,5,3,2,7,9,4,5,7,8,6,1,2,3,8,7};
    for(int i : number_1){
        cout<< i<< endl;
    }
    cout<<"**************************\n";
    // add set element :
    // set_name .insert(new_element);
    cars_2.insert("tesla");
    cars_2.insert("tesla");
    cars_2.insert("tesla");
    cars_2.insert("mustang");
    for(string i : cars_2){
        cout<< i<< endl;
    }
    cout<<"****************************\n";
    // remove set element :
    // (1) : To remove specific elements from a set, you can use the .erase() function:
    cars_1.erase("benz");
    cars_1.erase("ford");
    for(string i : cars_2){
        cout<< i<< endl;
    }
    cout<<"------------------------\n";
    // (2) : To remove all elements from a set, you can use the .clear() function:
    number.clear();
    for(int i : number){
        cout<< i<< endl;
    }
    cout<<"**************************\n";
    // set size :
    // set_name .size();
    cout<< cars_1.size()<<endl;
    cout<< cars_2.size()<<endl;
    cout<< number.size()<<endl;
    cout<<"**************************\n";
    // Check if a Set is Empty :
    // set_name .empty();
    cout<< cars_1.empty()<<endl;
    cout<< cars_2.empty()<<endl;
    cout<< number.empty()<<endl;
    cout<<"**************************\n";
    // show set element :
    // foreach loop :
    for(int i : number_1){
        cout<< i<< endl;
    }
    cout<<"**************************\n";
    



    return 0;
}