import java.util.Scanner;
class prog1
{
    public static void main(String[] args)
    {
        Scanner obj1=new Scanner(System.in);
        System.out.println("Enter the first number");
        Float n1=obj1.nextFloat();
        System.out.println("Enter the second number");
        Float n2=obj1.nextFloat();
        Float sum=n1+n2;
        System.out.println("The sum is "+sum);
    }
}