// INPUT : 11
// OUTPUT : *   *   *   #   #   #   *   *   *   #   #
// Nested loop

import java.util.*;

class program188
{
    public static void Display(int iNo)
    {
        int iCnt = 0;
        
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if(iCnt % 4==0)
            {
                System.out.print("* \t");
            }
            else(iCnt % 4 == 0)
            {
                System.out.print("# \t");
            }
        }
        System.out.println();
    }
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter the number of elements: ");
        iValue = sobj.nextInt();

        Display(iValue);
    }
}