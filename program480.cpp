#include<iostream>
using namespace std;

template <class X>

X Maximum(X No1, X No2)
{
    X Ans;

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