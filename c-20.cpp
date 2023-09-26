#include <iostream>
using namespace std ;

class side{
    protected:
    int l;
    public:
    void set_value(int x)
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
    s.set_value(10);
    cout<<"Square is"<<s.sq()<<endl;;

    cube c;
    c.set_value(20);
    cout<<"cube is"<<c.cub()<<endl;
    return 0;
}