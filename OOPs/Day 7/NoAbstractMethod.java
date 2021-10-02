interface NewIntr {
    default void disp() {
        System.out.println("\nDefault method in interface but not abstract method.\n");
    }

    static int cube(int x) {
        return x * x * x;
    }
}

public class NoAbstractMethod implements NewIntr {
    public static void main(String args[]) {
        System.out.println("\nCube of number: " + NewIntr.cube(5));
        NewIntr n = new NoAbstractMethod();
        n.disp();
    }
}