import java.util.*;             // in built package
import Marvellous.StringX;      // user defined package

class program277
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String data = null;
        program280 strobj = new program280();         
        int iRet = 0;
        
        System.out.println("Enter String: ");
        data = sobj.nextLine();

        iRet = strobj.CountCapital(data);
        System.out.println("Number of capital characters : "+iRet);

        iRet = strobj.CountSmall(data);
        System.out.println("Number of Small characters : "+iRet);

        iRet = strobj.CountDigits(data);
        System.out.println("Number of Digits characters : "+iRet);
        
        iRet = strobj.CountSpace(data);
        System.out.println("Number of WhiteSpaces characters : "+iRet);
        
        iRet = strobj.CountSpecialSymbol(data);
        System.out.println("Number of Special Symbols characters : "+iRet);
        
    }   
}
