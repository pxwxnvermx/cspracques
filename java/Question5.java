import java.util.Scanner;

public class DtoB {
    public static void main(String[] args) {
        Scanner r = new Scanner(System.in);
        int a = r.nextInt();
        int rem=0,d=0,i=0;

        while(a!=0){
            rem = a%2;
            d = d + rem * (int)Math.pow(10,i);
            a=a/2;
            i++;
        }
        System.out.print(d+" ");
    }
}
