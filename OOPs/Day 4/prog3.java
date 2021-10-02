class Area {
    double length, breadth, area;

    Area(double w, double h) {
        length = w;
        breadth = h;
    }

    Area(double len) {
        length = breadth = len;
    }

    Area() {
        length = breadth = 0;
    }

    double areacalc() {
        return length * breadth;
    }
}

class Volume extends Area {
    double vol, height;

    Volume(double l, double b, double h) {
        length = l;
        breadth = b;
        height = h;
    }

    Volume() {
        height = 0;
    }

    double volcalc() {
        return areacalc() * height;
    }
}

public class prog3 {
    public static void main(String args[]) {
        Volume mybox1 = new Volume(10, 20, 15);
        double vol, areax;
        vol = mybox1.volcalc();
        areax = mybox1.areacalc();
        System.out.println(" Volume of mybox1 is " + vol);
        System.out.println(" Area of mybox1 is " + areax);
    }
}
