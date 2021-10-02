import java.util.*;
public class prog3
{
    //Scanner sc = new Scanner(System.in);
    //int a = sc.nextInt(); 
    //int b = sc.nextInt(); 
    public int a,b;
    public static void swapByRef(prog3 ob) 
    {
        int t = ob.a;
        ob.a = ob.b;
        ob.b = t;
    }
    
    public static void main(String[] args)
    {
        prog3 p = new prog3();
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the numbers");
        p.a = sc.nextInt(); 
        p.b = sc.nextInt(); 
        System.out.println("Before call: a = " + p.a + " and b = " + p.b);
        swapByRef(p);
        System.out.println("After call: a = " + p.a + " and b = " + p.b);
    }
}