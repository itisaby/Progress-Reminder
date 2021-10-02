class prog3
{
	static int factorial(int i)
	{
		if(i==0)
		return 1;
		else
		return (i*factorial(i-1));
	}
	public static void main(String[] a)
	{
		int fact,x;
		x=Integer.parseInt(a[0]);
		fact=factorial(x);
		System.out.println(" The factorial is "+fact);
	}
}