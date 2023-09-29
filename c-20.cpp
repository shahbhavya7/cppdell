// Hierarchial Inheritance
#include <iostream>
using namespace std ;

class side{
    protected:
    int l;
    public:
    void set_value(int x)  // As we only accept the value and not show we we write void set_value fn
    {l=x;}
};

class square:public side{
    public:
    int sq()
    {return(l*l);}
};
class cube:public side{
    public:
    int cub()
    {return(l*l*l);}
};

int main(){
    square s;
    s.set_value(10); // object of square class 
    cout<<"Square is"<<s.sq()<<endl;; // s.sq() puts squared value from operation done in square class in cout

    cube c;
    c.set_value(20);
    cout<<"cube is"<<c.cub()<<endl;
    return 0;
}