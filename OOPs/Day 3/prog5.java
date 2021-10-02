import java.util.*;

class Student {
    String name, stream, grade;
    int roll;

    Student() {
        roll = 0;
        name = "";
        stream = "";
        grade = "";
    }

    public void display(String name, int roll, String stream, String grade) {
        System.out.println("Name of the student is " + name);
        System.out.println("Roll number of the student is " + roll);
        System.out.println("Stream of the student is " + stream);
        System.out.println("Grade of the student is " + grade);
    }
}

class prog5 {
    public static void main(String[] args) {
        Student obj1 = new Student();
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the name of the first student");
        String n1 = sc.nextLine();
        System.out.println("Enter the roll of the student");
        int r1 = Integer.parseInt(sc.nextLine());
        System.out.println("Enter the stream of the student");
        String str1 = sc.nextLine();
        System.out.println("Enter the grade of the student");
        String g1 = sc.nextLine();
        obj1.display(n1, r1, str1, g1);
        System.out.println("\n Enter the name of the second student");
        String n2 = sc.nextLine();
        System.out.println("Enter the roll of the student");
        int r2 = Integer.parseInt(sc.nextLine());
        System.out.println("Enter the stream of the student");
        String str2 = sc.nextLine();
        System.out.println("Enter the grade of the student");
        String g2 = sc.nextLine();
        obj1.display(n2, r2, str2, g2);
    }
}