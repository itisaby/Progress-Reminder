class Parent {
    int id;
    String name, address;

    Parent(int id, String name, String address) {
        this.id = id;
        this.name = name;
        this.address = address;
    }

    @Override
    public String toString() {
        return "Name: " + name + ", id: " + id + ", address: " + address;
    }
}

class ChildOne extends Parent {
    int marks;

    ChildOne(int d, String nm, String ad, int marks) {
        super(d, nm, ad);
        this.marks = marks;
    }

    @Override
    public String toString() {
        return super.toString() + ", marks: " + marks + "%";
    }
}

class ChildTwo extends Parent {
    String qualification;
    int salary;

    ChildTwo(int d, String nm, String ad, String qualification, int salary) {
        super(d, nm, ad);
        this.qualification = qualification;
        this.salary = salary;
    }

    @Override
    public String toString() {
        return super.toString() + ", qualification: " + qualification + ", salary: Rs" + salary;
    }
}

public class prog5 {
    public static void main(String[] args) {
        Parent obj1 = new Parent(3, "Khudae", "Delhi");
        ChildOne obj2 = new ChildOne(7, "Babloo", "Mumbai", 91);
        ChildTwo obj3 = new ChildTwo(8, "Manoj", "Bihar", "UPSC", 50000);

        System.out.println("\nParent Class:");
        System.out.println(obj1);
        System.out.println("\nChildOne Class:");
        System.out.println(obj2);
        System.out.println("\nChildTwo Class:");
        System.out.println(obj3);
        System.out.println();
    }
}