#include<iostream>
#include<cstring>
#include<string>
using namespace std;
void Serch_string(char Serch_char, string Text);
int main(){
    cout<<"serch char in string?\n";
    string text;
    cout<<"type your text: ";
    getline(cin, text);
    char serch_char;
    cout<<"chosse your char for serching in text: ";
    cin>>serch_char;
    int len = text.size();
    for(int i = 0; i<len; i++){
        if(serch_char == text[i]){
            cout<<serch_char<<" is in text at index : "<<i<<endl;         
        }
    }
    cout<<"-----------------------\n";
    Serch_string(serch_char, text);
    cout<<"*********************\n";
    cout<<text.find(serch_char)<<endl;
  






    return 0;
    }

    void Serch_string(char Serch_char, string Text){
        int Len = Text.size();
        for(int i = 0; i<Len; i++){
            if(Text[i] == Serch_char){
                cout<<Serch_char<<" is in text in index : "<<i<<endl;
            }
        }
    }