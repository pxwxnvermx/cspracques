import java.util.Scanner; 


public class TwoDimenArr {

    public static void main(String args[]) {

        Scanner r = new Scanner(System.in);

        System.out.println("This program generates Matrices.");

        int[][] arr = new int[3][3];

        
        int a = r.nextInt();
        
        for(int i = 0;i<arr.length;i++){
            for(int j = 0;j<arr[i].length;j++){
                arr[i][j]=a;
                System.out.print(a+" ");
            }
            System.out.println(" ");
        }
        
    }
}
