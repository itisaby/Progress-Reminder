import java.util.*;

class prog1class2 {
    static String name, address, anumber;
    static int balance;

    prog1class2() {
        name = address = anumber = "";
        balance = 0;
    }

    void deposit(int x) {
        balance += x;
    }

    void withdraw(int x) {
        if (balance >= x)
            balance = balance - x;
        else
            System.out.println(x + " is bigger than " + balance);
    }

    void display() {
        System.out.println("The name is " + name);
        System.out.println("The address is " + address);
        System.out.println("The account number is " + anumber);
        System.out.println("The current balance is " + balance);
    }

}

class prog1 {
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        prog1class2 obj1 = new prog1class2();
        System.out.println("Enter the name, address , account number and account balance in this order ");
        obj1.name = sc.nextLine();
        obj1.address = sc.nextLine();
        obj1.anumber = sc.nextLine();
        int bal = sc.nextInt();
        obj1.deposit(bal);
        System.out.println("Enter the amount to be withdrawn from the account ");
        int w = sc.nextInt();
        obj1.withdraw(w);
        obj1.display();
    }
}