#include <iostream>
#include<iomanip>
using namespace std;
void show_balance(double balance);
double deposit();
double withdraw(double balance);

int main() {
    int choice = 0;
    double balance = 0;
    do{
        cout<<"*****************************\n";
        cout<<"***** ENTER TOUR CHOICE *****\n";
        cout<<"*****************************\n";
        cout<<"1:Show Balance\n";
        cout<<"2:Deposit Money\n";
        cout<<"3:Withdraw Money\n";
        cout<<"4:Exit\n";
        cout<<"==============================\n";
       
        cin>>choice;

        //cin.clear();
        //fflush(stdin);

        
        switch (choice){
        case 1: show_balance(balance);
            break;
        case 2: balance += deposit();
                show_balance(balance);
            break;
        case 3: balance -= withdraw(balance);
                show_balance(balance);
            break;
        case 4: cout<<"thanks for visiting....\n";
            break;
        
        default: cout<<"invalid choice !!\n";
                 cout<<"enter a new choise\n";
            break;
        }
        
    } while(choice != 4);
    


    return 0;
}
void show_balance(double balance){
    cout<<"your balance is : $"<<setprecision(2)<<fixed<<balance<<endl;
}
double deposit(){
    double amount = 0;
    cout<<"enter your amount to be deposited : \n";
    cin>>amount;
    if(amount >= 0){
        return amount;
    }
    else{
        cout<<"that's not a valid amount: \n";
        return 0;
    }
    
}
double withdraw(double balance){
    double amount = 0;
    cout<<"enter your amount to be withdraw : \n";
    cin>>amount;
    if(amount > balance){
        cout<< "insufficient funds \n";
        return 0;
    }
    else if(amount < 0){
        cout<<"that's not a valid amount\n";
        return 0;
    }
    else{
        return amount;
    }
    
   
   
}