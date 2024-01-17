
/*
the usefull classes for working with files in c++
fstreambse
ifstream
ofstream

// two ways to open the file:
1. using the constructor
2. using the member function open() of the class
*/
/*#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //opening files using contructors and writing it
    //string st = "yash";
    string st2;
    
    //ofstream out("sample1.txt"); //read operation
   // out<<st;


    ifstream in("sample2.txt"); //read operation
    //in>>st2;
 
   // getline(in, st2);    for reading more then one keyword
    
    cout<<st2;
    return 0;
}*/


#include<iostream>
#include<fstream>

using namespace std;
int main(){
    //connecting our file with out stream
    //ofstream out("write.txt");

    //creating a name string and filling with the string entered by the user
    //string name;
    //cout<<"enter your name";
    //cin>>name;

    //writing a string to the file
    //out<<"my name is senana" + name;
    //out.close();

    ifstream hin("sample.txt");
    string content;
    hin>>content;
    cout<<"the content of this file is: "<<content;
    hin.close();
    return 0;
}