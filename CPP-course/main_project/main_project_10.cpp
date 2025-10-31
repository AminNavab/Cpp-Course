#include<iostream>
#include<vector>
using namespace std;
class Bank_Account{
    private:
    string name;
    int account_num;
    double balance;
    public:
    Bank_Account(string n, int ac, double bal){
        name = n;
        account_num = ac;
        balance = bal;
    }
    string get_name(){
        return name;
    }
    int get_account_num(){
        return account_num;
    }
    double get_balance(){
        return balance;
    }
    void deposit(double amount){
        balance += amount;
    }
    void withdraw(double amount){
        if(amount<=balance){
            balance -= amount;
            cout<<"Withdraw Successfully....\n";
        }
        else{
            cout<<"Insufficient Balance.....\n";
        }
    }
};
class Bank_Managment{
    private:
    vector<Bank_Account> accounts;
    public:

    void Add_Account(string name, int account_num, double balance){
        accounts.push_back(Bank_Account(name,account_num,balance));
    }
    void Show_All_Account() {
        cout << "** All Account Holders **\n";
        for (int i = 0; i < accounts.size(); i++) {
            cout << "Name: " << accounts[i].get_name() << ", Account Number: " << accounts[i].get_account_num() << ", Balance: " << accounts[i].get_balance() << endl;
        }
    }
    void Search_Account(int account){
        cout<<"Account Holder\n";
        for(int i = 0; i<accounts.size(); i++){
            if(accounts[i].get_account_num() == account){
                cout << "Name: " << accounts[i].get_name() << ", Account Number: " << accounts[i].get_account_num() << ", Balance: " << accounts[i].get_balance() << endl;
            }
        }
    }
    Bank_Account* findAccount(int account_num){
        for(int i = 0; i<accounts.size(); i++){
            return &accounts[i];
        }
    }
};


int main(){
    Bank_Managment bank;
    int choice;
    char op;
    do{
        cout<<"\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout<<"\t***** BANK MANAGMENT SYSTEM *****\n";
        cout<<"\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout<<"1.Creat New Account\n";
        cout<<"2.Show All Account\n";
        cout<<"3.Search Account\n";
        cout<<"4.Deposit Money\n";
        cout<<"5.Withdraw Money\n";
        cout<<"6.Exit\n";
        cout<<"---------------------\n";
        cout<<"Enter Your Choice: ";
        cin>>choice;
        switch(choice){
            case 1:{
                string name;
                int account_num;
                double balance;
                cout<<"Enter Your Name: ";
                getline(cin>>ws, name);
                cout<<"Enter Your Account Number: ";
                cin>>account_num;
                cout<<"Enter Initial Balance: ";
                cin>>balance;
                bank.Add_Account(name, account_num, balance);
                cout<<"Account Created Successfully.....\n";
                break;
            }
            case 2:{
                bank.Show_All_Account();
                break;
            }
            case 3:{
                int account_num;
                cout<<"Enter Account Number: ";
                cin>>account_num;
                bank.Search_Account(account_num);
                break;
            }
            case 4:{
                int account_num;
                double amount;
                cout<<"Enter Account Number To Deposit Money: ";
                cin>>account_num;
                Bank_Account* account = bank.findAccount(account_num);
                if(account != NULL){
                    cout<<"Enter Amount TO Deposit: ";
                    cin>>amount;
                    account ->deposit(amount);
                    cout<<"Deposit Successfully.....\n";
                }
                else{
                    cout<<"Account Not Find......\n";
                }
                break;
            }
            case 5:{
                int account_num;
                int amount;
                cout<<"Enter Your Account NUmber: ";
                cin>>account_num;
                Bank_Account* account = bank.findAccount(account_num);
                if(account != NULL){
                    cout<<"Enter Amount To Withdraw: ";
                    cin>>amount;
                    account ->withdraw(amount);
                    cout<<"Withdraw Successfully....\n";
                }
                else{
                    cout<<"Account Not Find....\n";
                }
                break;
            }
            case 6:{
                exit(1);
                cout<<"Thank You\n";
                break;
            }
        }
        cout<<"Do You Want To Countinue [Y/N]????\n";
        cin>>op;

    } while (op == 'y' || op == 'Y');
    




    return 0;
}