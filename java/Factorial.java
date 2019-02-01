import java.util.Scanner;
public class Factorial {
    public static void main(String[] args) {
        Scanner r = new Scanner(System.in);
        System.out.println("Enter a No : ");
        int a = r.nextInt();
        int fact = 1;
        while(a!=0){
            fact*=a;
            a--;
        }
        System.out.println("Factorial is : "+fact);
    }
}
