#include<iostream>
using namespace std;
int main(){
    // number guesing
    cout<<"********** number guesing game **********\n";
    srand(time(NULL));
    int number = (rand() % 20) + 1;
    int guese;
    int score = 5;
    cout<<number<<endl; // for test
    do{
        cout<<"enter your guses: \n";
        cin>>guese;
        if(0 < guese && guese < 21){
            if(guese>number){
                cout<<"too high !!! \n";
                score--;
                cout<<"your scote is: "<<score<<endl;
            }
            else if(guese<number){
                cout<<"too low !!! \n";
                score--;
                cout<<"your scote is: "<<score<<endl;
            }
            else{
                cout<<"you win..... \nyour score is: "<<score;
            }
        }
        else{
            score--;
            cout<<score<<endl;
            cout<<"enter a true number !!!!!\n";
        }
        
    }while(score !=0);
    if (score == 0){
        cout <<"you a Loser.........";
    }


    return 0;
}