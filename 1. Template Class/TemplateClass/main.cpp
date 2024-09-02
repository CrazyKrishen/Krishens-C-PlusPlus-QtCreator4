#include <QDebug>
#include <iostream>
using namespace std;

template <class T>
class Information
{
private:
    T number;
    T number2;

public:
    Information();
    T result();
};

template <class T>
Information<T>::Information()
{
    number = 32;
    number2 = 4;
}

template <class T>
T Information<T>::result()
{
    return number+number2;
}


int main()
{
    Information<int> p1;
    qDebug() <<p1.result();

    return 0;
}
