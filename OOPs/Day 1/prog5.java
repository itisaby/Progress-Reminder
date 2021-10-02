class prog5
{
	public static void main(String[] s)
	{
		int a=Integer.parseInt(s[0]);
		int b=Integer.parseInt(s[1]);
		int d=0;
		for(int i=1;i<=a || i<=b;i++)
		{
			if(a%i==0 && b%i==0)
			d=i;
		}
		System.out.println("THe G.C.D of "+a+" & "+b+" is "+d);
	}
}