import java.io.*;
class prog1b
{
    public static void main(String[] args)throws IOException
    {
        BufferedReader r=new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter 1st number");
        float f1=Float.parseFloat(r.readLine());
        System.out.println("Enter 2nd number");
        float f2=Float.parseFloat(r.readLine());
        float sum=f1+f2;
        System.out.println("The sum of the 2 numbers are "+sum);
    }
}