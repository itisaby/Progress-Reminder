class Addition {

    public int add(int a, int b) {

        int sum = a + b;
        return sum;
    }

    public float add(int a, int b) {

        int sum = a + b;
        return sum;
    }
}

class prog2 {
    public static void main(String[] args) {

        Addition ob = new Addition();
        int sum1 = ob.add(1, 2);
        System.out.println("sum of the two integer value :" + sum1);
        float sum2 = ob.add(1, 2);
        System.out.println("sum of the three integer value :" + sum2);
    }
}
