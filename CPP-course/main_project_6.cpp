#include<iostream>
using namespace std;
class ATM{
    private:
    int Balance;
    string unit;
    public:
    ATM(int bal = 0){
        Balance = bal;
    }
    void set_balance(int bal){
        Balance = bal;
    }
    int get_balance(){
        return Balance;
    }
    int Withdraw(int amount){
        if(amount>Balance){
            return false;
        }
        Balance -= amount;
        return true;
    }
    void Deposit(int amount){
        Balance += amount;
    }
};

int main(){
    cout<<"\t~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout<<"\t ****** ATM MACHINE ******\n";
    cout<<"\t~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    string unit;
    cout<<"Enter your Money Unit($-Erue-Toman-Reial-....): \n";
    getline(cin>>ws, unit);
    int Base_balance;
    char op;
    cout<<"Do You Have Base Balance???[Y/N]: ";
    cin>>op;
    ATM atm;
    if(op=='y' || op=='Y'){
        cout<<"Enter Your Base Balance: ";
        cin>>Base_balance;
        atm.set_balance(Base_balance);
    }
    int choice,amount;
    bool x;
    do{
        cout<<"1.Check Balance\n";
        cout<<"2.Deposit Money\n";
        cout<<"3.Withdraw Money\n";
        cout<<"4.Exit\n";
        cout<<"Enter Your Choice: ";
        cin>>choice;
        
        switch (choice){
        case 1:
        cout<<"Your Balance: "<<atm.get_balance()<<" "<<unit<<endl;
        cout<<"_______________________\n";
        break;
        case 2:
        cout<<"Enter The Amount To Deposit: ";
        cin>>amount;
        atm.Deposit(amount);
        cout<<"Your Balance: "<<atm.get_balance()<<" "<<unit<<endl;
        cout<<"_______________________\n";
        break;
        case 3:
        cout<<"Enter The Amoun To Withdraw: ";
        cin>>amount;
        x = atm.Withdraw(amount);
        if(x){
            cout<<"Withdraw Successfully\n";
        }
        else{
            cout<<"You Can Not Do This Work(Amount > Balance)\n";
        }
        cout<<"Your Balance: "<<atm.get_balance()<<" "<<unit<<endl;
        cout<<"_______________________\n";
        break;   
        case 4:
        cout<<"Thank For Using ATM....\n";
        break;
        default:
        cout<<"Invalid Choice!!!!\n";
        cout<<"_______________________\n";
    }
    }while (choice != 4);





    return 0;

}