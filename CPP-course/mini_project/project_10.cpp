#include<iostream>
using namespace std;
int main(){
    cout<<"Convert lowercase to uppercase or uppercase to lowercase !!!\n";
    string text_2;
    cout<<"type your text: ";
    getline(cin, text_2);
    // (65<= text[i] <=90) ==>> uppercase
    // (97<= text[i] <= 122) ==>> lowercase
    // upper to lower ===>>> +32
    // lower to upper ===>>> -32
    for(int i= 0; i<text_2.size(); i++){
        if(text_2[i]>=65 && text_2[i]<=90){
            text_2[i] += 32;
        }
        else if (text_2[i]>=97 && text_2[i]<=122){
            text_2[i] -= 32;
        }      
    }
    cout<<"change text : "<<text_2<<endl;





    return 0;
}