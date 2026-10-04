#include<iostream>
using namespace std;

#pragma pack(1)

class ArrayX
{
    public :
        int *Arr;
        int iSize;

        // Parameterized Constructor
        ArrayX(int X)
        {
            cout<<"Inside Constructor \n";
            iSize = X;                  // Characteristics initialization
            Arr = new int[iSize];       // Resourse allocation
        }

        // Destructor
        ~ArrayX()
        {
            cout<<"Inside Destructor \n";
            delete []Arr;               // Resource Allocation
        }

};

int main()
{
    // Static memory allocation for Object
    //ArrayX aobj(5);

    ArrayX *aobj1 = new ArrayX(5);

    delete aobj1;

    cout<<"end of main \n";
    return 0;
}