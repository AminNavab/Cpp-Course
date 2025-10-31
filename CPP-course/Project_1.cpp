#include<iostream>
using namespace std;
int calculator();
int main(){
    cout<<"***** CALCULATOR *****\n";
    char op;
    double num_1;
    double num_2;
    double result;
    cout<<"enter op(-,+,*,/): ";
    cin>>op;
    cout<<"enter num 1: ";
    cin >> num_1;
    cout<<"enter num 2: ";
    cin>>num_2;
    switch (op)
    {
        case '+':
           result = num_1 + num_2;
           cout<<"result: "<<result<<"\n";
           break;
        case '-':
           result = num_1- num_2;
           cout<<"result: "<<result<<"\n";
           break;
        case '*':
           result = num_1 * num_2;
           cout<<"result: "<<result<<"\n";
           break;
        case '/':
           result = num_1 / num_2;
           cout<<"result: "<<result<<"\n";
           break;
         default:
           cout<<"that was'n a valid";   
    }
   int x = calculator();
   cout<<x; 
return 0;

}

int calculator(){
   char op_1;
   double num_1_1;
   double num_2_1;
   double result_1;
   cout<<"enter op(-,+,*,/): ";
   cin>>op_1;
   cout<<"enter num 1: ";
   cin >> num_1_1;
   cout<<"enter num 2: ";
   cin>>num_2_1;
   switch (op_1){
       case '+':
           result_1 = num_1_1 + num_2_1;
           return result_1;
           break;
       case '-':
           result_1 = num_1_1- num_2_1;
           return result_1;
           break;
        case '*':
           result_1 = num_1_1 * num_2_1;
           return result_1;
           break;
        case '/':
           result_1 = num_1_1 / num_2_1;
           return result_1;
           break;
        default:
           cout<<"that was'n a valid";
   }  
}