import java.util.Scanner;
public class prog2
{
    public static double v,sa;
    public prog2(double r, double h)
    {
         sa=6*3.14*r*h;
         v=3.14*r*r*h;
    }
    public static void main(String[] args)
    {
        Scanner obj1=new Scanner(System.in);
        System.out.println("Enter the radius");
        double n1=obj1.nextDouble();
        System.out.println("Enter the height");
        double n2=obj1.nextDouble();
        prog2 obj2=new prog2(n1,n2);
        System.out.println("The surface area is "+sa);
        System.out.println("The volume is "+v);
    }
}