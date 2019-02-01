import java.util.Scanner;

public class PrimeCheck {

    static boolean checkPrime(int x){
        if(x<1)
            return false;

        for (int i = 2;i<=x/2;i++)
            if(x%i==0)
                return false;

        return true;

    }

    public static void main(String[] args) {
        Scanner r  = new Scanner(System.in);
        int a = r.nextInt();

        if(checkPrime(a)==true)
            System.out.println("Prime");
        else
            System.out.println("Not Prime");
    }
}
