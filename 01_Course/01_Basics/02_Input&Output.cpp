#include<iostream>
# include <string>
using namespace std;
int main(){
    cout<<"hello"<<endl;
    cout <<"tell me your name:\n";
    string name{};
    cin>>name;
    cout<<"tell  me your last namr:\n";
    string last_name;
    cin>>last_name;
    cout <<"enter your age: \n";
    int age{};
    cin>>age;
    cout<<"you are "<<name<<" "<<last_name<<" "<<"and your age is "<<age<<endl;
    //--------------------------------------------------------
    string full_name;
    cout<<"tell me your full name:\n";
    getline(cin>>ws,full_name); // best type for input of string
    cout<<"enter your age:\n";
    int age_1;
    cin>>age_1;
    cout<<"you are "<<full_name<<" "<<"and your age is "<<age_1;

    return 0;
}