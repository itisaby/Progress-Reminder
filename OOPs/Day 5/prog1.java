class grandparent {
    grandparent() {
        System.out.println("grandparent");
    }
}

class parent extends grandparent {
    parent() {
        System.out.println("parent");
    }
}

class child extends parent {
    child() {
        System.out.println("child");
    }
}

class prog1 {
    public static void main(String[] args) {
        child oj = new child();
    }
}