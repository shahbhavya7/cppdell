// Mutilevel Inheritance
#include <iostream>
using namespace std ;

class student
{protected: 
   int roll_number;
   public:
   void get_number(int); // defining get number fn for putting values ahead
   void put_number(void);}; // for displaying values that are put

void student::get_number(int a){roll_number=a;} // assigning the values entered from main fn to roll number 
void student::put_number(){cout<<"Roll Number:"<<roll_number<<endl;} // further printing it

class test:public student
{protected: 
   float sub1;
   float sub2;
   public:
   void get_marks(float,float); // defining get marks with parameter
   void put_marks(void);};

void test::get_marks(float x,float y){sub1=x;sub2=y;}  // assigning the values entered from main fn to sub1 and sub2 with parameters 
void test::put_marks(){cout<<"Marks in sub1:"<<sub1<<endl; // further printing it with put marks fn
cout<<"Marks in sub2:"<<sub2<<endl;}

class result:public test // using derived class for further deriving class
{ float total; // defining total
public:void display(void);}; // defining display fn for total
void result::display(void){ // assigning the display of total fn to result
    total=sub1+sub2;
    put_number(); // as we dont have to take any value from user we keep this fn empty
    put_marks(); // as we have to print result we put cout fn in fn
    cout<<"Total marks:"<<total<<endl;
}
int main(){
    result student1; // defining studenr
    cout<<"student 1"<<endl;
    student1.get_number(111); // assigning values
    student1.get_marks(75.0,95.5);
    student1.display(); // for showing overall result

result student2;
    cout<<"student 2"<<endl;
    student2.get_number(98);
    student2.get_marks(89.0,78.5);
    student2.display();

    return 0;
}


