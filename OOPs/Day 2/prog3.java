class First
{
    static int x;
    public static void main(String[] args)
    {
        x=0;
        First obj=new First();
        obj.show();
    }
    public static void show()
    {
        x=5;
        System.out.println(x);
    }
}