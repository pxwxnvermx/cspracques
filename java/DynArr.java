import java.util.Scanner;

public class DynArr {
    public static void main(String[] args) {
        Scanner r = new Scanner(System.in);
        int [] arr = new int[3];

        for(int i = 0;i<arr.length;i++)
            arr[i] = r.nextInt();
        System.out.print("The Current array contains : ");
        for(int i = 0;i<arr.length;i++)
            System.out.print(" "+arr[i]);
    }
}
