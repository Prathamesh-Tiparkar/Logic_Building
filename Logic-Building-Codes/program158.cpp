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
    ArrayX aobj(5);                      // Default

    cout<<sizeof(aobj)<<endl;            // 12
    
    return 0;
}