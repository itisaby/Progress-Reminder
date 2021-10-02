class prog2
{
	public static void main(String[] a)
	{
		int x=Integer.parseInt(a[0]);
		float s=0;
		for(int i=1;i<=x;i++)
		{
			s=((float)1)/i+s;
		}
		System.out.printf("The sum is %.2f",s);
	}
}