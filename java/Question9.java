import java.sql.SQLOutput;
import java.util.Scanner;

public class DistanceClass {
    private double cm;

    public double toFeets(double x){
        return x/30.48;
    }
    public double toInches(double x){
        return x/2.54;
    }
    public static void main(String[] args) {
        Scanner r = new Scanner(System.in);
        System.out.println("Enter The no : ");
        double n = r.nextDouble();

        System.out.println("Choose The Conversion \n1 : Centimeters To Feet \n2 : Centimeters To Inch");
        int ch = r.nextInt();

        DistanceClass m = new DistanceClass();

        switch (ch){
            case 1:
                System.out.println(" Feets : "+m.toFeets(n));
                break;
            case 2:
                System.out.println(" Inches : "+m.toInches(n));
                break;
            default:
                System.out.println("Wrong Selection.");

        }
    }
}
