#include<iostream>
using namespace std;
int main(){
    cout<<"**********************\n";
    cout<<"*** Geometric tear ***\n";
    cout<<"**********************\n";
    // triangle
    // number (1):
    // h = 5
    int h = 5; // can you get in of input user
    for(int i = 1; i<=h; i++){
        for(int j = 1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<"-----------------------\n";
    // number (2):
    // h = 5
    for(int i = 1; i<=h; i++){
        for(int j = 1; j<=i; j++){
            int x = 1;
            if(i==1 || i==2 || i==h){
                cout<<"o ";
            }
            else if(i>2 && i!=h){
                if(j==1){
                    cout<<"o ";
                }
                else if((i-j)>=1){
                    cout<<". ";                
                }
                else{
                    cout<<"o";
                }
            }
            //cout<<"*";    
        }
        cout<<endl;
    }
    cout<<"------------------------\n";
    // number (3):
    // h = 5
    int z = 0;
    int z_1 = (h*2)-1; // 9
    for(int i = 1; i<=h; i++){
        for(int j = 1; j<=z_1; j++){
            if(i==1){
                if(j<h || j>h){
                    cout<<"_ ";
                }
                else{
                    cout<<"* ";
                }
            }
            if(i>1 && i<h){
                if(j<h-z || j>h+z){
                    cout<<"_ ";
                }
                else{
                    cout<<"* ";
                }
            } 
            if(i==h){
                cout<<"* ";
            }    
        }
        cout<<endl;
    z++;
    }
    cout<<"---------------------\n";
    // number (4):
    // h = 5
    int m = 0;
    int m_1 = (h*2)-1; // 9
    int m_2 = 0;
    for(int i = 1; i<=h; i++){
        for(int j = 1; j<=m_1; j++){
            if(i==1){
                if(j<h || j>h){
                    cout<<"_ ";
                }
                else{
                    cout<<"o ";
                }
            }
            if(i>1 && i<h){
                if(j<h-m || j>h+m){  // (5+m < j < 5-m)
                    cout<<"_ ";
                }
                else if(j==h || (j<h && j>h-m_2) || (j>h && j<h+m_2)){
                    cout<<". ";
                }
                else{
                    cout<<"o ";
                }
            } 
            if(i==h){
                cout<<"o ";
            }    
        }
        cout<<endl;
    m++;
    m_2++;
    } 
    cout<<"---------------------\n";

    // square : 5x5
    // number (1):
    int length = 5;
    int width = 5;
    for(int i = 1; i<=width; i++){
        for(int j = 1; j<=length; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<"---------------------\n";
    // number (2):
    for(int i = 1; i<=width; i++){
        for(int j = 1; j<=length; j++){
            if(i==1 || i==width){
                cout<<"o ";
            }
            else if(j>1 && j<length){
                cout<<". ";
            }
            else if(j==1 || j==length){
                cout<<"o ";
            }
        }
        cout<<endl;
    }
    cout<<"---------------------\n";

    // Diamond
    // Small diameter = 5
    // Large diameter = 5
    // (a && A) :: 2k+1
    int a = 5;
    int A = 5;
    int y = (a/2)+1; // 3
    int Y = (A/2)+1; // 3
    int u = 0;
    int u_1 = Y+1; // 1
    for(int i = 1; i<=A; i++){
        for(int j = 1; j<=a; j++){
            if(i==Y){
                cout<<"o ";
            }
            if(i<Y){
                if(j<y-u || j>y+u){
                    cout<<". ";
                }
                else{
                    cout<<"o ";
                }
            }    
            if(i>Y){
                if(j<(y-u_1) || j>(y+u_1)){
                    cout<<". ";
                }
                else{
                    cout<<"o ";
                }
            }    
            
        }
        u++; 
        u_1--;
        cout<<endl;  
    }
    cout<<"---------------------\n";
    
    


   

    return 0;
}