#include<iostream>
using namespace std;
int main(){
    // while loop:
    // while(condition){
    //    ## code;
    // }
    int a = 0;
    while (a<10){
        cout<<a<<endl;
        a++;
    }
    // ## if condition==true : infinity loop ##
    cout<<"************************** \n";

    // do while loop  ==>> do some block of code first,then repeat again if condition is true:
    // do{
    //    ## code;
    // } while(condition) ;
    int b = 0;
    do{
        cout<<b<<endl;
        b++;
    }while (b<7);

    cout<<"************************** \n";

    // for loop:
    // for (variable(statement 1) ; condition(statement 2) ; op(statement 3)){
    //     ## code;
    // }
    for (int c = 0;c<10;c++){
        cout<<c<<endl;
    }
    cout<<"************************** \n";
    // break = break out of a loop
    // continue :
    // (1) = skip current iteration (run erro!!!!!!!!!!)
    // (2) = Move to the first loop
    for (int c = 0;c<10;c++){
        if(c==5){
            cout<<c<<endl;
            continue;
        }
        else if(c==8){
            cout<<c<<endl;
            break;
        }
    }
    cout<<"************************** \n";
    // nested loop ==>> (loop in loop)
    
    // Outer loop
    for (int i = 1; i <= 2; ++i) {
        cout << "Outer: " << i << "\n";  // Executes 2 times
        // Inner loop
        for (int j = 1; j <= 3; ++j) {
            cout << " Inner: " << j << "\n";  // Executes 6 times (2 * 3)
        }
    }
    cout<< "**************************\n";
    // foreach loop ==>> through elements in an array:
    // for (type-variable_name : array_name){
    //     ## code;
    // }
    int numbers[5] = {1,2,3,4,5};
    for(int i : numbers){
        cout<< i << " , ";
    }
    return 0;
}