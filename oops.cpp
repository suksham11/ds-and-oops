//PROGRAM 1 - performs the corresponding arithmetic operation
#include<iostream>
#include<stdio.h>
using namespace std;
int a,b;

void getdata()
{
    cout<<"enter two no:";
    cin>>a>>b;
}

void cal()
{
    char op;
    cout<<"+ - * /\n";
    cout<<"enter operator:";
    cin>>op;


switch(op)
{
    case '+':cout<<"results="<<a+b;
      break;
    case '-':cout<<"results="<<a-b;
      break;
    case '*':cout<<"results="<<a*b;
      break;
    case '/':cout<<"results="<<a/b;
      break;
    default:cout<<"invalid";
      break;
}
}
int main(){
    getdata();
    cal();

    return 0;
}*/





//PROGRAM 2 -  Implements a max heap data structure using an array. It allows insertion and deletion operations on the heap.
#include<iostream>
using namespace std;

class heap{
  public:
  int arr[100];
  int size = 0;

  heap()
  {
    arr[0] = -1;
    size = 0; 
  }

  void insert(int val){
       size = size + 1;
       int index = size;
       arr[index] = val;

       while(index>1){
        int parent = index/2;

        if(arr[parent] < arr[index]){
          swap(arr[parent], arr[index]);
          index = parent;
        }
        else{
          return ;
        }
       }
  }
  void print() {
    for(int i = 1 ; i<=size ; i++){
      cout << arr[i] <<" ";
    }cout<<endl;
  }
  void deletefromheap() {
      if(size == 0){
        cout<< "nothing to delete"<<endl;
        return;
      }
      arr[1] = arr[size];
      size--;

      // take root node to its correct position
      int i=1;
      while(i<size){
        int leftindex = 2*i;
        int rightindex = 2*i+1;

        if(leftindex < size && arr[i] < arr[leftindex])
      }
  }

};

int main(){
  heap h;
  h.insert(50);
  h.insert(55);
  h.insert(53);
  h.insert(52);
  h.insert(51);
  return 0;                   
}
*/



    
// PROGRAM 3 - Defines a class addtwonum to add two numbers and demonstrates the usage of friend function to access private members of the class.
#include<iostream>
using namespace std;

class addtwonum{
    int x,y;
    public:
       addtwonum()
       {
        x=0;
        y=0;
       }
       addtwonum(int a, int b){
        x=a;
        y=b;
       }
       friend int add(addtwonum &obj);
};
int add(addtwonum &obj)
{
  return (obj.x + obj.y);
}

int main(){
  addtwonum a2(10,20);
  cout<<" sum is:"<<add(a2)<<endl;
}
*/


//PROGRAM 4 - Generates all possible valid combinations of parentheses for a given value of 'n' using recursion.
#include<iostream>
using namespace std;

vector<string> valid;

void generate(string &s , int open , int close){
    if(open == 0 && close == 0){
      valid.push_back(s);
      return;
    }
   
    if(open > 0){
      s.push_back('(');
      generate(s,open-1, close);
      s.pop_back();
    }

    if(close > 0){
        if(open < close){
          s.push_back(')');
          generate(s, open , close-1);
          s.pop_back();
        }
    }
}

int main(){
     int n;
     cin>>n;
     string s;
     generate(s, n,n);
     for(auto ele : valid){
      cout<<ele<<endl;
     }

}*/




// PROGRAM 5 - Demonstrates basic object-oriented programming (OOP) concepts by defining a class emp with private and public members 
//and accessing them through member functions.
#include<iostream>
using namespace std;
class emp{
     private:
        int a,b,c;
     public:
        int d , e;
        void setdata(int a1, int b1, int c1); //declaring  
        void getdata(){
        cout<<"the value of a is"<<a<<endl;
        cout<<"the value of b is"<<b<<endl;
        cout<<"the value of c is"<<c<<endl;
        cout<<"the value of d is"<<d<<endl;
        cout<<"the value of e is"<<e<<endl;
        }
};
void emp :: setdata(int a1, int b1, int c1){
   a = a1;
   b = b1;
   c = c1;
}
int main(){
    emp yash;
    yash.setdata(23,112,18); //we assigning value of a b c because this is private
    yash.d = 34;
    yash.e = 89;
    yash.getdata();
}*/



    
//PROGRAM 6 - CHECKING A NO IS BINARY OR NOT  "OR COMPLIMENT" USING OOPS
#include<iostream>
#include<string>
using namespace std;

class binary{
    private:
       string s;
       void checkbin(void);
    public:

    void read(void);
    
    void compliment(void);
    void display(void);
};

void binary :: read(void){
    cout<<"enter the binary number"<<endl;
    cin>>s;
}

void binary :: checkbin(void){
       checkbin();
       for(int i=0 ; i<s.size() ; i++){
          if(s[i] != '0' && s[i] != '1'){
            cout<<"not a binary no"<<endl;
          }
          
       }
}

void binary :: compliment(void){
  cout<<"displaying your binary no"<<endl;
    for(int i=0 ; i<s.size() ; i++){
      if(s[i] == '1' ){
        s[i] = '0';
      }
      else{
        s[i] = '1';
      }
    }
}

void binary :: display(void){
    for(int i=0 ; i<s.size() ; i++){
      cout<<s[i]<<endl;
    }
}

int main(){
    binary b;
    b.read();
    //b.checkbin();  if we use as a private so we do no fetch in main program we fetch in check bin func
    b.display();
    b.compliment();
    b.display();
    return 0;
}  */




    
// PROGRAM 7 - Defines a class shop to store item IDs and their prices, allowing setting and displaying of item prices.
#include<iostream>
using namespace std;
class shop{
     int itemid[100];
     int itemprice[100];
     int count = 0;
     public:
        void setprice(void);
        void displayprice(void);
};

void shop :: setprice(void){
     cout<<"enter id of your item"<<endl;
     cin>>itemid[count];
     cout<<"enter price of your item"<<endl;
     cin>>itemprice[count];
     count++;
}

void shop :: displayprice(void){
  for(int i=0 ; i<count ; i++){
    cout<<"the price of item with id"<<itemid[i]<<"is"<<itemprice[i]<<endl;
  }
 
}

int main(){
  shop dukan;
  dukan.setprice();
  dukan.setprice();
  dukan.setprice();
  dukan.displayprice();
  return 0;
}
*/



    
//PROGRAM 8 - Illustrates the use of static data member and member functions in a class to maintain a count of objects created from the class.
#include <iostream>
using namespace std;
class emp{
     int id;
     static int count;


     public:
         void setdata(void){
          cout<<"enter the id"<<endl;
            cin>>id;
            count++;
         }
         void getdata(void){
            cout<<"id of the employee is" <<id << "this is emp no" << count<<endl;
         }

         static void getcount(void){
           cout<<"the value of count is"<<count<<endl;
         }
};


int emp :: count=1000;

int main(){
  emp akash,sanu;
  //count is the static data member of class emp
  akash.setdata();
  akash.getdata();
  emp:: getcount();
 
  sanu.setdata();
  sanu.getdata();
  emp:: getcount();

  return 0;
}*/



//PROGRAM 9 - Creates an array of objects of class orfans to store employee IDs and sets their salaries.
#include<iostream>
using namespace std;
class orfans{
  int id;
  int salary;
  public: 
     void setid(void){
       salary = 5000;
       cout<<"enter the id of orfans"<<endl;
       cin>>id;
     }

     void getid(void){
       cout<<"id of this employee is"<<id<<endl;
     }

};

int main(){
    orfans fb[4];
    for(int i=0 ; i<4 ; i++){
      fb[i].getid();
      fb[i].setid();
    }
    return 0;
}*/



    
//PROGRAM 10 - finding complex number using array
#include<iostream>
using namespace std;
class complex{
    int a;
    int b;
    public:
    void setdata(int s1, int s2){
      a = s1;
      b = s2;
    }

    void setdatasum(complex p1 , complex p2){
      a = p1.a + p2.a;
      b = p1.b + p2.b;
    }

    void print(){
      cout<<"pass the value of"<<a<< "+"<< b<<"i"<<endl;
    }
};
    
    int main(){
      complex c1,c2,c3;
      c1.setdata(2,3);
      c1.print();
      c2.setdata(3,5);
      c2.print();
      c3.setdatasum(c1,c2);
      c3.print();
      return 0;
    }
    */





         
//FRIEND FUNCTIONS
/*
properties of friend function
1. Not int the scope of class
2. Not int the scope of class, it cannot be called from the object of that class
3. can be invoked with the help of any object
4. usually contains arguments as objects
5. can be declared inside the public or private section of that class
6. it cannot access members directly access the members directly by their name and need object_name.member_name
to access any member.

*/

//PROGRAM 11  - demonstrates how to use classes, member functions, friend functions, and operator overloading to work with complex numbers in C++
#include<iostream>
using namespace std;
class complex{
      int a, b;
      public:
      void setcomplex(int s1 ,int s2){
              a = s1;
              b = s2;
      }

      //non member complexsum allowed to do anything with my private parts(members)
      friend complex complexsum(complex o1, complex o2);

      void  display(){
          cout<<"the complex no is"<<a<<" + "<<b<<" i "<<endl;
      }
};

complex complexsum(complex o1 , complex o2){
     complex o3;
     o3.setcomplex((o1.a + o2.a), (o1.b + o2.b));
     return o3;
}


int main(){
    complex c1, c2, sum;
    c1.setcomplex(2, 3);
    c1.display();
    c2.setcomplex(4, 7);
    c2.display();
    sum = complexsum(c1 , c2);
    sum.display();
    return 0;
}
*/



// program 12  - calculator to perform arithmetic operations on them.
#include<iostream>
using namespace std;

//forward declaration
class complex;

class calculator{
  public:
      int add(int a , int b){
        return (a+b);
      }
      int sumrealcomplex(complex , complex );
      int sumcompcomplex(complex , complex );
};

class complex{
  int a,b;
  friend int calculator :: sumrealcomplex(complex o1 ,complex o2);
  friend int calculator :: sumcompcomplex(complex o1 ,complex o2);
  public:
      void setnumber(int n1 , int n2){
        a = n1;
        b = n2;
      }

      void printnumber(){
        cout<<"your number is"<<a<<" + "<<b<<"i"<<endl;
      }

};

int calculator:: sumrealcomplex(complex o1, complex o2){
   return (o1.a + o2.a);
}
int calculator:: sumcompcomplex(complex o1, complex o2){
   return (o1.a + o2.a);
}


int main(){
     complex o1, o2;
     o1.setnumber(1, 4);
     o2.setnumber(5,7);
     calculator calc;
     int res = calc.sumrealcomplex(o1 ,o2);
     cout<<"the sum of real part of o1 and o2 is "<<res<<endl;
     int resc = calc.sumcompcomplex(o1 ,o2);
     cout<<"the sum of complex part of o1 and o2 is "<<resc<<endl;
     return 0;
}
*/


/#include<iostream>
using namespace std;

//forward declaration
class Y;

class X{
   int data;
   public:
      void setvalue(int value){
        data = value;
      }
    friend void add(X, Y); // it checks what is y here
};

class Y{
    int num;
    public:
       void setvalue(int value){
        value = num;
       }
    friend void add(X, Y);
};

void add(X  o1 , Y o2){
     cout<<"sum of x and y objects gives me"<<o1.data + o2.num;
}

int main(){
   X a1;
   a1.setvalue(3);
   Y b1;
   b1.setvalue(5);
   add(a1,b1);
   return 0;
}*/



    
/* friend function using call by value or call by refrence*/
#include<iostream>
using namespace std;

class c2;
class c1{
  int val1;
  friend void swap(c1 &, c2 &);
  public:
      void indata(int a1){
        val1 = a1;
      }

      void display(){
        cout<< val1 <<endl;
      }
};

class c2{
    int val2;
    friend void swap(c1 & , c2 &);
    public:
       void indata(int a2){
        val2 = a2;
       }

       void display(){
        cout<<val2<<endl;
       }
};

void swap(c1 &x , c2 &y){
     int temp = x.val1;
     x.val1 = y.val2;
     y.val2 = temp;
}



int main(){
  c1 oc1;
  c2 oc2;

  oc1.indata(34);
  oc2.indata(67);
  swap(oc1, oc2);

  cout<<"the value after exchanging becomes:";
  oc1.display();
  oc2.display();

  return 0;
}
*/


//DEFAULT CONSTRUCTOR
/#include<iostream>
using namespace std;

class complex{
    int a, b;
    public:
    
    // creating constructr
    // constructor is a special member function with the same name as of
    //classname it is set to initialize the objects of its class 
    //it is automatically invoked whenever an object is created
    // they cannot return values and do not have return types
    // it can have default arguments
    // we cannot refer to their addrress

    complex(void);
    
    void printnumber(){
        cout<<" your no is"<< a <<" + "<< b <<"i"<<endl;
    }
};

complex ::complex(void){ // ---> default contructor takes no parameters
    a = 0;
    b = 0;
}

int main(){
    complex c1;
    c1.printnumber();

    return 0;
}*/





///PARAMATERIZED CONSTRUCTOR
#include<iostream>
using namespace std;
class complex{
      int a, b;
      public:
        complex(int , int);

        void printnumber(){
          cout<<"your no is "<<a<<"+"<<b<<"i"<<endl;
        }
};

complex :: complex(int x, int y){ /// this is paramaterized constructor which takes no
no parameters
  a = x;
  b = y;
}

int main(){
  //implicit calls
  complex a(4, 6);

  complex b = complex(5,7);
  a.printnumber();
  return 0;
}*/


/
#include<iostream>
using namespace std;


class point{
  int x, y;
  public:
     point(int a, int b){
      x = a;
      y = b;
     }
     void displayPoint(){
        cout<<"The Point is "<<x<<","<<y<<endl;
     }

};

int main(){
  point p(1,1);
  p.displayPoint();
  point q(4,6);
  q.displayPoint();
  return 0;
}*/



//create a function which takes two points objects and copute the distance between two points
/#include<iostream>
#include<cmath>
using namespace std; 
class  point{
      int x1, x2, y1,y2;
      public:
        point(int a ,int b , int c, int d){
          x1 = a;
          x2 = b;
          y1 = c;
          y2 = d;
        }
        double distance(){
            return sqrt(((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2-y1)));
        }

        void display(){
          cout<<"point:( "<<x1<<","<<y1<<")to(,"<<x2<<","<<y2<<")distance:"<<distance()<<endl;
        }      
};

int main(){
    point p(2,4,25,64);
    p.display();
    point q(2,24,11,43);
    q.display();

    return 0;

}*/


//CONSTRUCTOR OVERLOADING
/#include<iostream>
using namespace std;
class complex{
  int a, b;
  public:
      complex(){
        a = 0; 
        b = 0;
      }

      complex(int x, int y){
        a = x; 
        b = y;
      }

      complex(int x){
        a = x; 
        b = 0;
      }

      void print(){
        cout<< "your no is"<<a<<"+"<<b<<"i"<<endl;
      }
};

int main(){
    complex c1(2,43);
    c1.print();

    complex c2(34);
    c2.print();

    complex c3;
    c3.print();
    return 0;
}*/


//INLINE FUNCTIONS
/#include<iostream>
using namespace std;

inline int product(int a, int b){
  return a*b;
}


int main(){
    int a, b;
    cout<<"enter the value of an a and b"<<endl;
    cin>>a>>b;
    cout<<"the product of a and b is "<<product(a,b)<<endl;
    cout<<"the product of a and b is "<<product(a,b)<<endl;
    cout<<"the product of a and b is "<<product(a,b)<<endl;
    cout<<"the product of a and b is "<<product(a,b)<<endl;
    cout<<"the product of a and b is "<<product(a,b)<<endl;

}*/

/*
#include<iostream>
using namespace std;

inline int product(int a, int b){
  return a*b;
}

float moneyrecieve(int currentmoney, float factor = 1.03){
  return currentmoney * factor;
}

int main(){
    int a, b;
    int money = 100000;
    cout<<"if you have "<<money<<"in your bank account.you will recieve money"<<moneyrecieve(money, 1.10)<<"rs after 1 year"<<endl;
    return 0;
}*/


//DEFAULT CONSTRUCTORS
/#include<iostream>
using namespace std;
class simple{
    int data1;
    int data2;
    public:
       simple(int a , int b = 8){
        data1 = a;
        data2 = b;
       }
       
       void printdata();
};

void simple :: printdata(){
  cout<<"the value of data is"<<data1<<"and"<<data2<<endl;
}

int main(){
   simple s(1);
   s.printdata();

  return 0;
}*/


//dynamic constructor
/#include <iostream>
using namespace std;
class bankdeposit{
  int principle;
  int year;
  int rate;
  float returnvalue;
  
  public:
  //Constructor
  bankdeposit(){}
  bankdeposit(int p , int y, float r);
  bankdeposit(int p , int y, int r);
  
  //METHOD
  void show();
};

bankdeposit :: bankdeposit(int p , int y , float r){
  principle = p;
  year = y;
  rate = r;
  returnvalue = principle;
  for(int i=0 ; i < y ; i++){
      returnvalue = returnvalue * (1+r);
  }
}

bankdeposit :: bankdeposit(int p , int y , int r){
  principle = p;
  year = y;
  rate = float(r)/100;
  returnvalue = principle;
  for(int i=0 ; i < y ; i++){
      returnvalue = returnvalue * (1+r);
  }
}


void bankdeposit :: show(){
  cout<<endl<<"Principle amt was"<<principle<<"value after"<<year<<"is"<<returnvalue<<endl;

}
int main(){
  bankdeposit bd1 , bd2 , bd3;
  int p , y;
  float r;
  int R;

  cout<<"enter the value of p y and r"<<endl;
  cin>>p>>y>>r;
  bd1 = bankdeposit(p , y , r);
  bd1.show();
  
  cout<<"enter the value of p y and r"<<endl;
  cin>>p>>y>>R;
  bd1 = bankdeposit(p , y , R);
  bd1.show();
  
  return 0;
}*/


 
// Importing all libraries
//copy constructor
/#include<iostream>
using namespace std;
 
class number{
     int a;
     public:
     number(){
      a=0;
     }
        number(int num){
          a = num;
        }
        number(number &obj){
          cout<<"copy constructor called!!!"<<endl;
          a = obj.a;
        }

        void display(){
          cout<<"the number for this object is"<<a<<endl;
        }

};  

int main(){
  number x,y,z(23),z2;
  z.display();
  x.display();
  y.display();
  number z1(x);
  z1.display();
  z2 = z;
  z2.display();
  number z3 = z;
  z3.display();
  return 0;
}*/

//TEMPLATES IN C++ MOST IMPORTANT
/#include<iostream>
using namespace std;

template <class T> 
class vector{
      
      public:
      T *arr;
      int size;
          vector(int m){
            size = m;
            arr = new T[size];
          }
      T dotproduct(vector &v){
          T  d = 0;
          for(int i=0 ; i<size ; i++){
            d += this->arr[i] * v.arr[i];
          } 
          return d;
    }  
};

int main(){*/
   /*vector v1(3);
   v1.arr[0] = 4;
   v1.arr[1] = 3;
   v1.arr[2] = 1;
   vector v2(3);
   v2.arr[0] = 1;
   v2.arr[1] = 0;
   v2.arr[2] = 1;
   int a = v1.dotproduct(v2);
   cout<<a<<endl;*/
   /*vector <float>v1(3);
   v1.arr[0] = 1.4;
   v1.arr[1] = 3.3;
   v1.arr[2] = 0.1;
   vector <float>v2(3);
   v2.arr[0] = 0.1;
   v2.arr[1] = 1.90;
   v2.arr[2] = 4.1;
   float a = v1.dotproduct(v2);
   cout<<a<<endl;
   return 0;
}*/


//DESTRUCTORS
//Destructor never takes an argument nor does return any value
/#include<iostream>
using namespace std;

class num{
    public:
       int count = 0;
       num(){
          count++;
          cout<<"this is the time when constructor is called for objectno"<<count<<endl;
       }

       ~num(){
        cout<<"this is the time when my destructor is called for objectno"<<count<<endl;
        count--;
       }
};

int main(){
   cout<<"we are inside the main function"<<endl;
   cout<<"creating first object n1"<<endl;
   num n1;
   {
    cout<<"entering this block"<<endl;
    num n2, n3;
    cout<<"exiting this block"<<endl;
   }
   cout<<"back to main"<<endl;
   return 0;
}*/

//INHERITANCE
//BASE CLASS
//DERIVED CLASS syntax:
/*class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
  class members/methods/etc...
}
Note:
1. Default visibility mode is private
2. public visibility mode: public members of the base class becomespublic members of the derived class
3. private visibility mode: private members of the base class becomes private members of the derived class
4. private members are never inherited
*/



/#include<iostream>
using namespace std;


class emp{
 
  public:
      int id;
      float salary;
      emp(int inpid){
      id = inpid;
      salary = 34.02;
     }

};

class programmer : emp{
  public:
  int languagecode = 9;

};

int  main(){
  emp yash(1),suksham(2);
  cout<<yash.salary<<endl;
  cout<<suksham.salary<<endl;
  
  return 0;
}*/



/ swapping
#include<iostream>
using namespace std;

class c1{
    public:
      int val1;

      void indata(int data1){
         val1 = data1;
      }

      void display(){
        cout<< val1<<endl;
      }
     
};

class c2{
      public:
        int val2;

        void indata(int data2){
          val2 = data2;
        }
          
        void display(){
          cout<< val2 <<endl;
        }
};

void swap(c1 & x , c2 & y){
     int temp;
     temp = x.val1;
     x.val1 = y.val2;
     y.val2 = temp;
}

int main(){
   c1 O1 ;
   c2 O2 ;
   O1.indata(21);
   O2.indata(23);
   swap(O1 , O2);
   
   O1.display();
   O2.display();

}*/


/#include<iostream>
using namespace std;
class{
public:
   int x; 
   void copy(int y){
      x = y;
   }   
   void copy(int y){
      x = y.x
   }

   void print(){
    cout<< "that how default work"<<x<<endl;
   }
};*/

//copy constructor
/#include<iostream>
using namespace std;

class number{
    int a;
    public:
        number(){
          a = 0;
        }
        number(int num){
         a = num;
        }
        
        //when no copy constructor found , compiler supplies its own copy constructor 
        number(number &obj){
          cout<<"copy constructor called !!"<<endl;
          a = obj.a;
        }

        void display(){
          cout<<"the no of this object is "<<a<<endl;
        }
};

int main(){
  number x, y, z(45) ,z2;
  x.display();
  y.display();
  z.display();
  number z1(z);
  z1.display();
  z2 = z;
  return 0;
}*/

//operator overloading using finding complex numbers
/#include<iostream>
using namespace std;
class  complex{ 
      int a , b;
         public:
            complex(){
              a = 0; 
              b = 0;
            }
           
            complex(int x ,int  y){
              a = x;
              b = y;
            }
            complex(int x){
              a = x; 
              b = 0;
            }
            void display(){
              cout<<" your no is "<<a<<"+"<<b<<"i"<<endl; 
            }
};

int main(){
     complex c1(4,6);
     c1.display();

     complex c2(5);
     c2.display();

     complex c3;
     c3.display();
     return 0;
}*/


//INHERITANCE 
/*reusability is a very important feature of c++
int c++ we can reuse a class and additional features to it
reusing classes saves a time or money
reusing already tested and debugged class will save a lot of effort of developing and debugging the same thing again*/

//derived class syntax
/
class {{derived-class-name}} : {{visibility-mode}}  {{base-class-name}}
{
  class members/method/etc
visibility mode:
1. default visibility mode is private
2. public visibility mode : public member of the base class become public member of the derived class
3. private visibility mode : public member of the base class become private member of the derived class
4. private members are never inherited
}*/

//PROGRAMMER INHERITING FEATURES FROM EMPLOYEE CLASS
/#include<iostream>
using namespace std;
//base class
class employee{
   
      public: 
          int id;
          float salary;
          employee(int inpid){
            id = inpid; 
            salary = 334.4;
          }
          employee(){}
};
class programmer : public employee{
    public:
    int languagecode;
    programmer(int inpid){
      id = inpid;
      languagecode = 9;
    }
    
    void getdata(){
      cout<<id<<endl;
    }
};
int main(){
    employee harry(1) , rohan(2);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;
    programmer skillf(10);
    cout<<skillf.languagecode<<endl;
    cout<<skillf.id<<endl;
    skillf.getdata();
    return 0;
}*/


//SINGLE INHERITANCE
#include<iostream>
using namespace std;
class base{
    int data1;
    public:
       int data2;
       void setdata();
       int getdata1();
       int getdata2(); 
};

void base :: setdata(void){
  data1 = 10;
  data2 = 20;
}

int base:: getdata1(){
  return data1;
}

int base:: getdata2(){
  return data2;
}

class derived : public base{
    int data3;
    public:
        void process();
        void display();
};

void derived :: process(){
  data3 = data2 * getdata1();
}

void derived :: display(){
  cout<<"value of data1 is"<<getdata1()<<endl;
  cout<<"value of data1 is"<<data2<<endl;
  cout<<"value of data1 is"<<data3<<endl;

}

int main(){
  derived der;
  der.setdata();
  der.process();
  der.display();
  return 0;
}*/



/*virtual functions*/
/
#include<iostream>
using namespace std;


student --> test[done]
student --> sports
test ---> result
*/ 
/
class student{
  protected: 
    int roll_no;
  public:
    void set_number(int a){
      roll_no = a;
    }
    void print_no(void){
      cout<<"your roll no is "<<roll_no<<endl;
    }
};

class Test : virtual public student{
    protected:
      float maths,  physics;
    public:
      void set_marks(float m1 , float m2){
        maths = m1;
        physics  = m2;
      }

      void print_marks(void){
        cout<<"your result is here:"<<"maths"<<maths<<"physics"<<physics<<endl;
      }
};

class Sports: virtual public student{
    protected:
      float score;
    public: 
      void set_score(float st){
        score = st;
      }
    
    void print_score(void){
      cout<<"you pt score is"<<score<<endl;
    }

};

class Result : public Test, public Sports{
      private:
          float total;
      public:
         void display(void){
            total = maths + physics + score;
            print_no();
            print_marks();
            print_score();
         }
};

int main(){
  Result harry;
  harry.set_number(3433);
  harry.set_marks(66, 77);
  harry.set_score(9);
  harry.display();
  return 0;
}*/

/PROECTED IN DERIVED CLASS inheritance 
#include<iostream>
using namespace std;
class base{
  protected: //private hai lekin inherit ho sakta hai
    int a;
  private:
    int b;
};
exMPLE-->  
                    public derivation    private derivation   protected derivation
1. private members    not inherited        not inherited        not inherited
2. protected members  protected            private              protected
3. public members     public               private              protected

class derived: protected base{
  

};

int main(){
  //base b;
  derived d;
  //cout<<d.a; will not becuse a is protected int both as well as in derived class
  return 0;
}*/

//polymorphism
#include<iostream>
using namespace std;
class baseclass{
    public:
      int var_base;
      void display(){
        cout<<"displaying base class variable var_base"<<var_base<<endl;
      }
};

class derivedclass : public baseclass{
    public:
      int var_derived;
      void display(){
        cout<<"displaying base class variable var_base"<<var_base<<endl;
        cout<<"displaying base class variable var_base"<<var_derived<<endl;
      }
};
int main(){
  baseclass * base_class_pointer;
  baseclass obj_base;
  derivedclass obj_der;
  base_class_pointer = &obj_der;

  base_class_pointer->var_base = 34;
  base_class_pointer->display();
  return 0;
}*/


#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream   myfile("filename.txt");
    myfile<< "Files can be tricky, but it is fun enough!";

  // Close the file
    myfile.close();
}*/



#include<iostream>
using namespace std;

class greatest {
private:
   int x, y;
public:

   void input() {
       cout << "Enter two numbers:";
       cin >> x>>y;
   }

   friend void display(greatest g);
};

void display(greatest g) {
   if (g.x > g.y) {
       cout << "Largest is:" << g.x;
   } else {
       cout << "Largest is:" << g.y;
   }
}

int main() {

   greatest g;
   g.input();
   display(g);

   return 0;
}


#include<iostream>
using namespace std;
class complex{
    public:
       int a,b;
       
       void set_data(int x, int y){
       a = x;
       b = y;
       }
       void display(){
        cout<<"the complex no is"<<a<<"+"<<"i"<<b<<endl;
       }

};
 
int main(){
  complex c1;
  c1.set_data(3,2);
  c1.display();

  return 0;

}*/

#include<iostream>
using namespace std;

template <class t>
t square(t num){
  return num*num;
}

int main(){
  int int_num;
  float float_num;
  cout<<"enter the integer num:\t";
  cin>>int_num;
  cout<<"enter the integer num:\t"<<square(int_num)<<endl;
  cout<<"enter the floating number  num:\t";
  cin>>float_num;
  cout<<"enter the float num:\t"<<square(float_num)<<endl;

}*/

#include<iostream>
using namespace std;
class test{
     private:
        int a, b;
        public:
          void set(){
            cout<<"the two no  is"<<endl;
            cin>>a>>b;
          }
          friend void find(test t);

};

void find(test t){
      if(t.a > t.b){
    cout<<"largest no is:"<<t.a;
     }
     else{
       cout<<"largest is:"<<t.b;
     }
}



int main(){
     test t;
     t.set();
     find(t);
     return 0;
}*/


