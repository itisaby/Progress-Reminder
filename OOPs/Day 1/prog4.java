class prog4
{
	public static void main(String[] s)
	{
		double a=Integer.parseInt(s[0]);
		double b=Integer.parseInt(s[1]);
		double c=Integer.parseInt(s[2]);
		double D=b*b-4*a*c;
		double r1=(-b+Math.sqrt(D))/(2*a);
		double r2=(-b-Math.sqrt(D))/(2*a);
		if (D > 0)
		{
            System.out.println("Roots are real and distinct.");
            System.out.println("Root1 = " + r1);
            System.out.println("Root2 = " + r2);
        }
        else if(D == 0)
		{
            System.out.println("Roots are real and equal.");
            System.out.println("Root = " + r1);
        }
        else
		{
            System.out.println("Roots are complex and not real.");
        }
		System.out.println("The roots are "+r1+" and "+r2);
	}
}	