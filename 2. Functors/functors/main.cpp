#include <iostream>
#include <qDebug>
using namespace std;


class Mul
{
    int _val;
public:
    Mul()
    {

    }

    Mul(int val):_val{val}       //Here the variable is actually used as a function
    {

    }

    int operator() (int val)
    {
        return val*_val;   //val x _val   (times)
    }

};


int main()
{
    Mul multiBy12(12);   //this initializes the pointer to 12

    qDebug() <<multiBy12(2);  //so any value times 12
    qDebug() <<" ";
    qDebug() <<multiBy12(3);  //so any value times 12




    return 0;
}
