import myPackage.core.Fibonnaci;
import java.util.Scanner;
class Display{
    public static void main(String [] args){
        Scanner r = new Scanner(System.in);
        System.out.println("Enter the no : ");
        int n = r.nextInt();

        Fibonnaci.fib(n);
    }
}