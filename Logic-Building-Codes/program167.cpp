#include<iostream>
using namespace std;

#pragma pack(1)

class ArrayX
{
    private :
        int *Arr;
        int iSize;

    public: 
        // Parameterized Constructor with default argument
        ArrayX(int x = 5)
        {
            iSize = x;                 
            Arr = new int[iSize];       
        }

        ~ArrayX()
        {
            delete []Arr;              
        }

};

int main()
{
    ArrayX *aobj1 = new ArrayX();       // Parameterized Constructor with default value
    ArrayX *aobj2 = new ArrayX(15);      // Parameterized Constructor with default value

    // Function call
    delete aobj1;
    delete aobj2;

    return 0;
}