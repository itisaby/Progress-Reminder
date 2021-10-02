class Test {
    int a;

    // constructor
    Test(int v) {
        a = v;
    }

    // method returns an object
    Test method(Test o) {
        return new Test(o.a + 5);
    }
}

public class prog4 {
    public static void main(String[] args) {
        Test t1 = new Test(10);
        System.out.println("a = " + t1.a);
        Test t2 = t1.method(t1);
        System.out.println("a = " + t2.a);
    }
}
