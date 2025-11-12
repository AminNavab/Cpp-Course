#include<iostream>
#include<cstring>
using namespace std;
int main(){
    // copy (string_1 in string_2):
    // strcpy(string_2 , string_1);
    char s_1[20] = "hello word";
    char s_2[20];
    strcpy(s_2, s_1);
    cout<<s_2<<endl;
    cout<<"**************\n";
    // strncpy ==>>like "copy"
    // strncpy(string_1 , string_2 , number)   ===>> number of string_2 copy in string_1
    char s_3[20] = "hello word";
    char s_4[20];
    strncpy(s_4, s_3, 7);
    cout<<s_4<<endl;
    cout<<"*********\n";
    // add :
    // strcat(strig_1 , string_2) ==>> string_2 add to string_1
    char x_1[6] = "amin ";
    char x_2[6] = "navab";
    strcat(x_1,x_2);
    cout<<x_1<<endl;
    cout<<"***********\n";
    //strncat ==>> like "strcat"
    // strncat(string_1 , string_2 , number)
    char x_3[6] = "amin ";
    char x_4[6] = "navab";
    strncat(x_3,x_4,2);
    cout<<x_3<<endl;
    cout<<"***********\n";
    // strcmp(string_1 , string_2)
    // string_1 == string_2 ==>> cout:0
    // string_1 > string_2 ==>> cout:1
    // string_1 < string_2 ==>> cout:-1
    char z_1[10] = "amin";
    char z_2[10] = "amin";
    char z_3[10] = "aminnnnn";
    char z_4[10] = "ami";
    cout<<strcmp(z_1,z_2)<<endl;
    cout<<strcmp(z_1,z_3)<<endl;
    cout<<strcmp(z_2,z_4)<<endl;
    cout<<"***********\n";
    // strncmp(string_1 , string_2 , number) ==>> like"strcmp"
    char y_1[10] = "ammiin";
    char y_2[10] = "ammin";
    cout<<strncmp(y_1, y_2, 4)<<endl;
    cout<<"***********\n";
    // strcmpi ==>> string_1 == string_2
    char w_1[10] = "ammiin";
    char w_2[10] = "AMINNNNN";
    // string_1 == string_2 ==>> cout:x
    // string_1 == string_2 ==>> cout:0
    // string_1 > string_2 ==>> cout:1
    // string_1 < string_2 ==>> cout:-1
    cout<<strcmpi(w_1,w_2)<<endl;
    cout<<"***********\n";
    // strlen ==>> size of string
    char m[20] = "cpp is good";
    cout<<strlen(m)<<endl;


    return 0;
}