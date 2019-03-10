import java.util.Scanner;

public class InteractiveSum {
    public static void main(String[] args) {
        Scanner r = new Scanner(System.in);
        int no = 0,sum = 0;
        for(int i = 0;i<args.length;i++){
            no = Integer.parseInt(args[i]);
        }
        int [] arr = new int[no];
        for(int i = 0;i<arr.length;i++){
            arr[i] = r.nextInt();
            sum+=arr[i];
        }
        System.out.println("Sum = "+sum);
    }
}
