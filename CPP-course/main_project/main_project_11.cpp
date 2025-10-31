#include<iostream>
#include<vector>
using namespace std;
class student{
    private:
    int age, rollno;
    string name;
    public:
    student(int stdRollno, int stdAge, string stdName){
        rollno = stdRollno;
        age = stdAge;
        name = stdName;
    }
    void setRollno(int stdRollno){rollno = stdRollno;}
    int getRollno(){return rollno;}
    void setAge(int stdAge){age = stdAge;}
    int getAge(){return age;}
    void setName(string stdName){name = stdName;}
    string getName(){return name;}
    void display_student(){
        cout<<"Roll No: "<<rollno<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }

};
// creat function to add new student
void add_new_student(vector<student> &students){
    int age, rollno;
    string name;
    cout<<"Enter Studen's Rollno: ";
    cin>>rollno;
    // check if student already exit
    for(int i = 0; i<students.size(); i++){
        if(students[i].getRollno()==rollno){
            cout<<"Student Alreday Exist...\n";
            return;
        }
    }
    cout<<"Enter Studen's Age: ";
    cin>>age;
    cout<<"Enter Student's name: ";
    getline(cin>>ws, name);
    student newStudent(rollno, age, name);
    students.push_back(newStudent);
    cout<<"Student Add Successfully....\n";
}
// creat function for display
void display_all_student(vector<student> &students){
    if(students.empty()){
        cout<<"No Student Found....\n";
        return;
    }
    for(int i = 0; i<students.size(); i++){
        students[i].display_student();
        cout<<endl;
    }
}
// creat function to search
void searc_student(vector<student> &students){
    int rollno;
    cout<<"Enter Roll: ";
    cin>>rollno;
    for(int i = 0; i<students.size(); i++){
        if(students[i].getRollno() == rollno){
            cout<<"Student Found...\n";
            students[i].display_student();
            return;
        }
    }
    
}
// creat function to update student
void update_student(vector<student> &students){
    string sname;
    bool found = false;
    int choice;
    cout<<"Enter Name to Update: ";
    getline(cin>>ws, sname);
    for(int i = 0; i<students.size(); i++){
        if(students[i].getName()== sname){
            found = true;
            cout<<"Student Found...\n";
            cout<<"1.Update Roll No\n";
            cout<<"2.Update Name\n";
            cout<<"3.Update Age\n";
            cout<<"Enter Your Choice: ";
            cin>>choice;
            switch(choice){
                case 1:{
                    int rno;
                    cout<<"Enter New Roll NO: ";
                    cin>>rno;
                    students[i].setRollno(rno);
                    break;
                }
                case 2:{
                    string name;
                    cout<<"Enter New Name: ";
                    getline(cin>>ws, name);
                    students[i].setName(name);
                    break;
                }
                case 3:{
                    int age;
                    cout<<"Enter New Age: ";
                    cin>>age;
                    students[i].setAge(age);
                    break;
                }
                default:{
                    cout<<"Invalid Number!!!!\n";
                }
            }
        }
        if(!found){
            cout<<"Rcord Not Found Here...\n";
        }
    }
}
// creat function to delet student
void delet_student(vector<student> &students){
    string name;
    cout<<"Enter Name To Delet: ";
    getline(cin>>ws, name);
    for(int i =0; i<students.size(); i++){
        if(students[i].getName()== name){
            students.erase((students.begin()+i));
            cout<<"Student Remove Successfully...\n";
        }
    }
}
int main(){
    vector<student> students;
    students.push_back(student(1, 20, "amin"));
    char op;
    do{
        int choice;
        cout<<"\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout<<"\t\t***** STUDENT MANAGEMENT SYSTEM *****\n";
        cout<<"\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout<<"1-Add New Student\n";
        cout<<"2-Display All Student\n";
        cout<<"3-Search Student\n";
        cout<<"4-Update Student\n";
        cout<<"5-DElet Student\n";
        cout<<"6-Exit\n";
        cout<<"Enter Your Choice: ";
        cin>>choice;
        switch(choice){
            case 1:{
                add_new_student(students);
                break;
            }
            case 2:{
                display_all_student(students);
                break;
            }
            case 3:{
                searc_student(students);
                break;
            }
            case 4:{
                update_student(students);
                break;
            }
            case 5:{
                delet_student(students);
                break;
            }
        case 6:{
            exit(1);
        }
        default:{
            cout<<"Invalid Number....\n";
        }
    }
        cout<<"Do Yout Want To Continue [Y/N] ?? : ";
        cin>>op;
    }while(op=='y' || op=='Y');
    



    return 0;
}
