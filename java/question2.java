class Factorials {
    public static void factorial(String [] args){
        int n = 5;
        int f = n;
        int fact = 1;
        while(n!=0){
            fact *=n;
            n--;
        }
        System.out.println("Factorial of "+f+" is "+fact);
    }
}
