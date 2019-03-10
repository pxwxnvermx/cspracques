package myPackage.core;
public class Fibonnaci{
    public static void fib(int n){
        int t1 = 0,t2 = 1;

        while(t1 <= n){
            System.out.print(","+t1);
            int sum = t1 + t2;
            t1 = t2;
            t2 = sum;
        }
    }
}