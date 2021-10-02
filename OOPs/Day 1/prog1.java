class prog1
{
	public static void main(String[] s)
	{
		int a;
		int sod,rev,x;
		sod=0;
		rev=0;
		a=Integer.parseInt(s[0]);
		x=a;
		while(x!=0)
		{
			int d=x%10;
			sod=sod+d;
			rev=rev*10+d;
			x=x/10;
		}
		System.out.println("Sum of digits = "+ sod);
		System.out.println("Reverse = "+ rev);
	}
}