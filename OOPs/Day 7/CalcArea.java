import java.util.*;

interface Figure {
    double PI = 3.14;

    double area();
}

class Circle implements Figure {
    double rad;

    Circle(double rad) {
        this.rad = rad;
    }

    public double area() {
        return Figure.PI * rad * rad;
    }
}

class Rectangle implements Figure {
    double length, breadth;

    Rectangle(double length, double breadth) {
        this.length = length;
        this.breadth = breadth;
    }

    public double area() {
        return length * breadth;
    }
}

public class CalcArea {
    public static void main(String[] args) {
        Scanner ob = new Scanner(System.in);
        System.out.print("\nEnter the radius of the circle : ");
        double r = ob.nextDouble();
        System.out.print("\nEnter the length and breadth of the Rectangle respectively : ");
        double l = ob.nextDouble();
        double b = ob.nextDouble();

        Figure fig;
        fig = new Circle(r);
        System.out.println("\nThe area of the circle is : " + fig.area());

        fig = new Rectangle(l, b);
        System.out.println("\nThe area of the Rectangle is : " + fig.area());
        System.out.println();
        ob.close();
    }
}