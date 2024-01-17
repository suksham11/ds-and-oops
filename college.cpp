#include<iostream>
using namespace std;
int main(){
    int n , m;
    cin>>n>>m;
    int mat[2][2] = {{1,2},{3,4}};
    for(int  i=0 ; i<=n ; i++){
        for(int j=0 ; j<=m ; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}*/



#include<iostream>
using namespace std;
class student{
    public:
    string studentname;
    void printname(){
        cout<<"student name is :"<<studentname;
    }

};
int main(){
    student obj1;
    obj1.studentname = "yash";
    obj1.printname();
    return 0;
}*/


    
    
#include <iostream>
using namespace std;
class Geeks {
    // Access specifier
public:
    // Data  Members
    string geekname;
    // Member Functions()
    void printname() { cout << "Geekname is:" << geekname; }
};
int main()
{
    // Declare an object of class geeks
    Geeks obj1;
    // accessing data member
    obj1.geekname = "Abhi";
    // accessing member function
    obj1.printname();
    return 0;
}*/

//wap to find greatest of two numbers  in two different class using friend function
