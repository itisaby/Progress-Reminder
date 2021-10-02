import java.io.Console;

class prog1 {
    public static void main(String[] args) {
        Console c = System.console();
        System.out.println("Enter number 1");
        float f1 = Float.parseFloat(c.readLine());
        System.out.println("Enter number 2");
        float f2 = Float.parseFloat(c.readLine());
        System.out.println(f1 + f2);
    }
}