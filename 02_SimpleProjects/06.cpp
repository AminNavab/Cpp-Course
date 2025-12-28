#include<iostream>
using namespace std;
int main(){
    // matrix... 
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){           
            if(j<2){
                cout<<matrix[i][j]<<" - ";

            }
            else{
                cout<<matrix[i][j];
            }    
        }
        cout<<endl;
    }
    //-----------------------
    cout<<"************************************************************\n";
    cout<<"*** Examining the position of the queen's piece in chess ***\n";
    cout<<"************************************************************\n";
    char chess [8][8];

    int row_1, column_1;
    cout<<"Enter the location of chess piece.1 [row(1-8)]: ";
    cin>>row_1;
    row_1--;
    cout<<"Enter the location of chess piece.1 [column(1-8)]: ";
    cin>>column_1;
    column_1--;
    
    int row_2, column_2;
    cout<<"Enter the location of chess piece.2 [row(1-8)]: ";
    cin>>row_2;
    row_2--;
    cout<<"Enter the location of chess piece.2 [column(1-8)]: ";
    cin>>column_2;
    column_2--;

    if(row_1 == row_2){
        cout<<"Two beads in a row\n";
        cout<<"Two dice are hitting each other.\n";
    }
    else if(column_1 == column_2){
        cout<<"Two beads in a column\n";
        cout<<"Two dice are hitting each other.\n";
    }
    else if((row_1+column_1)/2 == (row_2+column_2)/2){
        cout<<"Two beads in one diameter\n";
        cout<<"Two dice are hitting each other.\n";
    }
    else if ((row_1 == column_1) && (row_2 == column_2)){
        cout<<"Two beads in one diameter\n";
        cout<<"Two dice are hitting each other.\n";
    }
   
    else{
        cout<<"Two dice are not hitting each other.\n";
    }
    cout<<"********************\n";
    cout<<"-------------------------\n";
    cout<<"*** Matrix operations ***\n";
    cout<<"-------------------------\n";
    cout<<"creat a matrix....\n";
    int row;
    int column;
    cout<<"enter row: ";
    cin>>row;
    cout<<"enetr column: ";
    cin>>column;
    int matrix_1 [row][column];
    int i = 0;  //row
    int j = 0;  // column
    do
    {
        int new_row;
        int new_column;
        int num;
        cout<<"chosse a place [row]: ";
        cin>>new_row;
        cout<<"chosse a place [column]: ";
        cin>>new_column;
        cout<<"enter value for matrix ["<<new_row<<"]["<<new_column<<"] : ";
        cin>>num;
        new_row--;
        new_column--;
        matrix_1[new_row][new_column] = num;
        i++;
        j++;
    } while (i<(row*column) && j<(row*column));

    for(int i = 0; i<row; i++){
        for(int j = 0; j<column; j++){
            cout<<matrix_1[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
   




    return 0;
}