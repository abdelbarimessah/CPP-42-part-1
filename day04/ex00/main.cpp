#include<iostream>
using namespace std; 
 
// class Add
// { 
// public: 
//     virtual void print () 
//     { int a=20, b=30;
//      cout<< " base class Action is:"<<a+b <<endl;
//       } 
 
//     void show () 
//     { cout<< "show base class" <<endl; } 
// }; 
 
// class Sub: public Add 
// { 
// public: 
//     void print () //print () is already virtual function in derived class, we could also declared as virtual void print () explicitly 
//     { int x=20,y=10;
      
//     cout<< " derived class Action:"<<x-y <<endl; } 
 
//     void show () 
//     { cout<< "show derived class" <<endl; } 
// }; 
 
// //main function 
// int main() 
// { 
//     Add *aptr; 
//     Sub s; 
//     aptr = &s; 
     
//     //virtual function, binded at runtime (Runtime polymorphism) 
//     aptr->print(); 
     
//     // Non-virtual function, binded at compile time 
//     aptr->show(); 
 
//     return 0; 
// } 

class Animal  
{  
    public:  
    virtual void show() = 0;  //Pure virtual function declaration.
};  
class Man: public Animal  
{  
    public:  
    void show()  
    {  
        cout << "Man is the part of animal husbandry " << endl;  
    }  
};  
int main()  
{  
    Animal *aptr; //Base class pointer 
    //Animal a;  
    Man m;  //derived class object creation.
    aptr = &m;  
    aptr->show();  
    return 0;  
}