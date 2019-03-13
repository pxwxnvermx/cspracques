package question18;

import java.util.Scanner;


public class question18 {

   
    public static void main(String[] args) {
        try{
            int a,b,c;
            System.out.println("Please Enter number to be Divided");
            Scanner sc;
            sc = new Scanner(System.in);
            a = sc.nextInt();
             System.out.println("Please Enter number that will divide");
            b = sc.nextInt();
            c=a/b;
        }
        catch(ArithmeticException E){
            System.out.println("You shouldn't divide number by zero");
        }
    }
    
}
