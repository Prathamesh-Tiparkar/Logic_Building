#include<iostream>
using namespace std;

int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0;

    cout<<"Enter the number of Elements: \n";
    cin>>iLength;

    // C : Brr = (int *)malloc(sizeof(int)* length);
    // Java : Brr = new int[iLength];
    Brr = new int[iLength];

    cout<<"Enter the Elements: \n";

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cin>>Brr[iCnt];
    }
    cout<<"Elements of the Array are: \n";
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cout<<Brr[iCnt]<<endl;
    }

    delete []Brr;
    return 0;
}