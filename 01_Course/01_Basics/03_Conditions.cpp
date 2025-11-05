#include<iostream>
using namespace std;
int main(){ 
    
// logical operator:
// && ==>> and  
// || ==>> or
// =! ==>> not(==)
// !  ==>> reverses the logical state of its operand (not)
//***************************************************** */
// if (condition){
  // ## code
  //}
// else if (conditio){
  // ## code
  //}  
// else{
  // ## code
  //}  
  int age;
  cout<<"enter your age:\n";
  cin>>age;
  if(age>=18){
    cout<<"you can drive\n";
  }
  else if (age<15){
    cout<<"you are a baby..........\n";
  }
  else{
    cout<<"you can'n drive!!!!!!!!!!!\n";
  }
  
  // switch - cass ==>> for long cindition
  // switch(vriable){
     // case - condition:
        // ## code
        // break
     // case - condition:
        // ## code;
        //break
     // case - condition:
        // ## code
        // break
     // case - condition:
        // ## code;
        // break
     // default :
        // ## code; 
  //}
  int mount;
  cout<<"\ntell me your mount:\n";
  cin>>mount;
  switch (mount){
    case 1:
      cout<<"this mount have 31 days.";
      break;
    case 2:
      cout<<"this mount have 31 days.";
      break;
    case 3:
      cout<<"this mount have 31 days.";
      break;
    case 4:
      cout<<"this mount have 29 days.";
      break;
    case 5:
      cout<<"this mount have 31 days.";
      break;
    case 6:
      cout<<"this mount have 30 days.";
      break;
    case 7:
      cout<<"this mount have 30 days.";
      break;
    case 8:
      cout<<"this mount have 30 days.";
      break;
    case 9:
      cout<<"this mount have 30 days.";
      break;
    case 10:
      cout<<"this mount have 30 days.";
      break;
    case 11:
      cout<<"this mount have 30 days.";
      break;
    case 12:
      cout<<"this mount have 30 days.";
      break;
    default:
      cout<<"your mount is wrong...........";  
  
  }

  // short hand if , else (ternary operator)
  // ternary operator ?: = replacement to an if/else statement
  // (1) variable = (condition) ? expression-true  expression-false :
  // (2)  condition ? expression_1 : expression_2;  (yes or no)
  // (3)  cout<<(condition ? expression_1 : expression_2);
  int age_a{};
  cout<<"\nenter your age_a\n";
  cin>>age_a;
  // (1)
  string result = (age_a>=18)? "you can drive\n" : "you can't drive_1\n";
  cout<< result;
  // (2)
  age_a>=18 ? cout<<"you can drive\n" : cout<<"you can't drive_2\n";
  age_a>=18 ? "you can drive\n" : "you can't drive_3\n";  // can not work !!!!!!
  // (3)
  cout<<(age_a>=18 ? "you can drive" : "you can't drive_4");



  return 0;
}