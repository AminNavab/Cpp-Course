#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){

    // ofstream = Creates and writes to files
    // ifstream = Reads from files
    // fstream = A combination of ofstream and ifstream: creates, reads, and writes to files


    // Create and open a text file
    ofstream MyFile("filename.txt");

   // Write to the file
   MyFile << "Files can be tricky, but it is fun enough!";  
   
   // Close the file
   MyFile.close();

   // Read from the text file
   ifstream MyReadFile("filename.txt");

   // Use a while loop together with the getline() function to read the file line by line
   while (getline (MyReadFile, myText)) {
   // Output the text from the file
   cout << myText;
   }

   // Close the file
   MyFile.close();   



    return 0;
}