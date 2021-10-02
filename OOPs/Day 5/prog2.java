import java.util.*;

class employee {
    String id, name;

    employee() {
        id = "";
        name = "";
    }

    /*
     * employee(String a, String b) { id = a; name = b; }
     */

    public String toString() {
        return "Employee [id=" + id + ", name=" + name + "]";
    }
}

class scientist extends employee {
    String experience, no_of_publication;

    scientist() {
        experience = "";
        no_of_publication = "";
    }

    /*
     * scientist(String a, String b) { experience = a; no_of_publication = b; }
     */

    public String toString() {
        return "Scientist [experience= " + experience + " number of publications are " + no_of_publication + "]";
    }
}

class dscientist extends scientist {
    String award;

    dscientist() {
        award = "";
    }

    /*
     * dscientist(String a) { award = a; }
     */

    public String toString() {
        return "Dscientist [award = " + award + " ]";
    }
}

class prog2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        employee obj1 = new employee();
        obj1.id = sc.nextLine();
        obj1.name = sc.nextLine();
        scientist obj2 = new scientist();
        obj2.experience = sc.nextLine();
        obj2.no_of_publication = sc.nextLine();
        dscientist obj3 = new dscientist();
        obj3.award = sc.nextLine();
        System.out.println(obj1);
        System.out.println(obj2);
        System.out.println(obj3);
    }
}