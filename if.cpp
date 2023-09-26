#include<iostream>
using namespace std;

int main(){
    int savings;
    cin>>savings;

    if(savings>5000){cout<<"JBL \n";}
    else if(savings<2000){cout<<"BOAT \n";}
    else{cout<<"BOSE";}
    return 0;
}