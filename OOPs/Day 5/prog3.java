class home {
    int x = 6;

    void show() {
        System.out.println(x);
    }
}

class school extends home {
    int x = 7;

    void show() {
        System.out.println(x);
    }
}

class baby extends home {
    int x = 8;

    void show() {
        System.out.println(x);
    }
}

class gamer extends home {
    int x = 9;

    void show() {
        System.out.println(x);
    }
}

class prog3 {
    public static void main(String[] args) {
        school obj1 = new school();
        baby obj2 = new baby();
        gamer obj3 = new gamer();
        obj1.show();
        obj2.show();
        obj3.show();
    }
}