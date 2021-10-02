interface A {
    void methodOne();

    void methodTwo();

    void methodThree();
}

class B implements A {
    public void methodOne() {
        System.out.println("Method One of Interface.");
    }

    public void methodTwo() {
        System.out.println("Method Two of Interface.");
    }

    public void methodThree() {
        System.out.println("Method Three of Interface.");
    }
}

public class FewMethod {
    public static void main(String[] args) {
        B ab = new B();

        System.out.println();
        ab.methodOne();
        ab.methodTwo();
        ab.methodThree();
        System.out.println();
    }
}