class a {
    int x = 6;

    void show() {
        System.out.println(x);
    }
}

class b extends a {
    int x = 7;

    void show() {
        System.out.println(x);
    }
}

class c extends a {
    int x = 8;

    void show() {
        System.out.println(x);
    }
}

class d extends a {
    int x = 9;

    void show() {
        System.out.println(x);
    }
}

class prog4 {
    public static void main(String[] args) {
        a obj = new a();
        b obj1 = new b();
        c obj2 = new c();
        d obj3 = new d();
        a ref;
        ref = obj1;
        ref.show();
        ref = obj2;
        ref.show();
        ref = obj3;
        ref.show();
    }
}