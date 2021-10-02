import java.util.*;
public class prog2
{
    public static void swap(int a,int b)
    {
        int t=0;
        t=a;
        a=b;
        b=t;
        System.out.println("The value in 1st variable is "+a);
        System.out.println("The value in 2nd variable is "+b);
    }
    public static void main(String[] args)
    {
        int x,y;
       Scanner sc = new Scanner(System.in);  
       System.out.println("Enter the value of X and Y");  
       x = sc.nextInt();
       y = sc.nextInt();
       swap(x,y);
    }
}
