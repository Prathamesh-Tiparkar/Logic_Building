#include<iostream>
using namespace std;

template <class T>

T Maximum(T No1, T No2)
{
    T Ans;

    if(No1 > No2)
    {
        return No1;
    }
    else
    {
        return No2;
    }

    return Ans;
}

int main()
{
    cout<<Maximum(21,11)<<"\n";
    cout<<Maximum(21.5f,11.7f)<<"\n";
    cout<<Maximum(21.5,11.7)<<"\n";

    return 0;
}