interface Intr {
    void methodOne();

    void methodTwo();

    void methodThree();
}

abstract class Abstract implements Intr {
    @Override
    public void methodOne() {
        System.out.println("Abstract class inheriting method one from interface");
    }

    @Override
    public void methodTwo() {
        System.out.println("Abstract class inheriting method two from interface");
    }
}

class ExtendAbstract extends Abstract {

    @Override
    public void methodThree() {
        System.out.println("Abstract class inheriting method three from interface via Abstract Class");
    }
}

public class AbstractInherit {
    public static void main(String[] args) {
        ExtendAbstract obj = new ExtendAbstract();
        System.out.println();
        obj.methodOne();
        obj.methodTwo();
        obj.methodThree();
        System.out.println();
    }
}