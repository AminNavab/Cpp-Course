#include<iostream>
# include<vector>
using namespace std;

//---------------------------------------------------------
// ADvanced topics
// *** (typedef) *** => make your type
// (1) => typedef - main_type - new_type;
typedef string string_a;
typedef int int_a;
typedef double double_a;
typedef char char_a;

// (2) => using - new_type = main_type;
using string_aa = string;
using int_aa = int;
using double_aa = double;
using char_aa = char;
//---------------------------------------------------------

int main(){
    // type - name(identifier) = value
    // (1) int
    int a = 10;
    int b = -10;
    int a_1 = 100 , b_1 = -100 ;
    // (2) double
    double c = 10.10;
    double d = -10.10;
    double c_1 , d_1;
    // (3) float
    // (float == double) but double is better

    // (4) char => single character
    char e = 'a';
    char f = 'A';
    // *or*
    char a_2  = 65;
    char b_2 = 66;
    char c_2 = 67;
    cout <<a_2<<"-"<<b_2<<"-"<<c_2<<endl;
    // (5) boolean => true or false
    bool g = true;
    bool h = false;
    int w = 10;
    int w_1 = 11;
    cout<< (w_1>w) <<endl; 
    cout<< (w_1 == 11) <<endl; 
    cout<< (w_1==w) <<endl; 
    // (6) string
    // for string you should include <string> library
    string k = "abcdefghf.....";

    // *** initialization ***
    int x_1; // default initialization
    x_1 = 11;
    int x_2 = 11; // copy initialization
    int x_3(11); // direct initialization
    int x_4{11}; // unifrom initialization
    int x_5{5+6};

    // ***operators*** => (+,-,*,/,=,==,<,>,=<,=>,%,new,delete,True,Fales,...)
    int age  = 20;
    double height = 1.85;
    char unit = 'm';
    string name = "Amin";
    cout << "hello "<<name<<" , you have "<<age<<" years old and your height is "<<height<<" "<<unit;

    // ***const*** => can't be change (read-only)
    // const - type - name = value
    const int year = 10;
              // year = 20;  error


    // ***(typedef)***
    // (1)
    string_a name_a = "Amin";
    int_a age_a = 20;
    double_a height_a = 1.85;
    char_a unit_a ='m';
    cout << "\nhello "<<name_a<<" , you have "<<age_a<<" years old and your height is "<<height_a<<" "<<unit_a;
    // (2)
    string_a name_aa = "Amin";
    int_a age_aa = 20;
    double_a height_aa = 1.85;
    char_a unit_aa ='m';
    cout << "\nhello "<<name_aa<<" , you have "<<age_aa<<" years old and your height is "<<height_aa<<" "<<unit_aa;


   return 0 ;

