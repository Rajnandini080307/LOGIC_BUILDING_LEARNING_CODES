//TYPE 2

import java.util.Scanner;

class program40
{
    void CheckDivisible(int iNo)     //non-static
        {
            if((iNo % 3==0)&&(iNo % 5==0))
        {
            System.out.println("Number is Divisible by 3 & 5");
        }
        else
        {
            System.out.println("Number is not divisible by 3 & 5");
        }
        }
    public static void main(String[] A)
    {
        
        Scanner sobj= new Scanner(System.in);
         
        int iValue=0;
        
        System.out.println("Enter Number:");
        iValue = sobj.nextInt();

        CheckDivisible(iValue); //ERROR   as we were calling static function from non-static function 
    }   
}

