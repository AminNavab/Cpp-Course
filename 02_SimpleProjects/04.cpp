#include<iostream>
#include<vector>
#include<iterator>
#include<cstring>
using namespace std;
int main(){
    // Reverse printing of some numbers :
    vector<int>numbers;
    int size;
    cout<<"enter your size : ";
    cin>>size;
    int a = 0;
    do
    {
        cout<<"enter your number: \n";
        int num;
        cin>>num;
        numbers.push_back(num);
        a++;
    } while (a != size);
    for(int i : numbers){
        cout<<i<<"  ";
    }
    cout<<"\n-----------------------"<<endl;
    vector<int> :: iterator it;
    for(it = numbers.end()-1; it >= numbers.begin(); it--){
        cout<< *it<<"  ";
    }
    cout<<"\n*************************"<<endl;
    // array_1 (+) array_2 :
    //(1)  type == string
    string a_1 = "1,2,3,4,5,";
    string a_2 = "6,7,8,9,10";
    a_1.append(a_2);
    cout<<a_1<<endl;
   



    return 0;
}