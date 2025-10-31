#include<iostream>
#include<string>
#include<vector>
using namespace std;
class User{
    private:
    string username, password;
    public:
    User(string name, string pass){
        username = name;
        password = pass;          
    }
    string getUsername(){
        return username;
    }
    string getPassword(){
        return password;
    }

};
class UserManager{
    private:
    vector<User> users; // creat object of vector
    public:
    void RegisterUser(){
        string username, password;
        cout<<"Enter User Name: ";
        cin>>username;
        cout<<"Enter Password: ";
        cin>>password;
        User newuser(username, password);
        users.push_back(newuser);
        cout<<"\t User Register Successfully.....\n";
    }
    bool LoginUser(string name, string pass){
        for(int i = 0; i<users.size(); i++){
            if(name == users[i].getUsername() && pass == users[i].getPassword()){
                cout<<"\tLogin Successfully.....\n";
                return true;
            }
        }    
        cout<<"\tInvalid User Name or Password!!!!\n";
        return false;
    }
    void ShowUserList(){
        cout<<"\t---- Users List ----\n";
        for(int i = 0; i<users.size(); i++){
            cout<<users[i].getUsername()<<endl;
        }
    }
    void SerchUser(string username){
        for(int i = 0; i<users.size();i++){
            if(users[i].getUsername() == username){
                cout<<"\t User was Found...\n";
            }
        }
    }
    void DeletUser(string username){
        for(int i =0; i<users.size(); i++){
            if(users[i].getUsername()== username){
                users.erase(users.begin()+i);
            }
        }
    }
};

int main(){
    cout<<"*******************************\n";
    cout<<"*** Login Managment System ****\n";
    cout<<"*******************************\n";
    char choice;
    UserManager usermanage;
    do{
        // system("cls");
        cout<<"\t1.Register User \n";
        cout<<"\t2.Login \n";
        cout<<"\t3.Show User List \n";
        cout<<"\t4.Serch User \n";
        cout<<"\t5.Delet User \n";
        cout<<"\t6.Exit \n";
        cout<<"Enter Your Choice: ";
        
        int op;
        cin>>op;
        switch (op){
        case 1:{
            usermanage.RegisterUser();
            break;}
        case 2:{ 
            string username, password;
            cout<<"\tEnter User Name: ";
            cin>>username;
            cout<<"\tEnter Password: ";
            cin>>password;
            usermanage.LoginUser(username, password);
            break;}
        case 3:{
            usermanage.ShowUserList();
            break;}
        case 4:{
            string username;
            cout<<"Enter User Name: ";
            cin>>username;
            usermanage.SerchUser(username);
            break;}
        case 5:{
            string username;
            cout<<"Enter User Name: ";
            cin>>username;
            usermanage.DeletUser(username);
            break;
        }
        case 6:{
            exit(1);
            break;
        }
        default:{
            cout<<"Pleass Enter a True Number.\n";
            break;
        }
       }
       cout<<"Do You Want to Continue [Y/N]: ";
       cin>>choice;
    }while (choice == 'y' || choice == 'Y');
    


    return 0;
}