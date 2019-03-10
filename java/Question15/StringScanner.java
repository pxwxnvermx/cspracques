import java.util.Scanner;
import myPackage.StringDisplay;

class StringScanner{
    public static void main(String [] args){
        Scanner r = new Scanner(System.in);
        System.out.println("Enter The String : ");
        String a = r.nextLine();
        StringDisplay.display(a);
    }
}