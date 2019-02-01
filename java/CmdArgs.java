public class CmdArgs {
    public static void main(String[] args) {
        int sum = 0;
        for(int i = 0;i<args.length;i++){
            int j = Integer.parseInt(args[i]);
            sum+=j;
        }
        System.out.print(""+sum);
    }
}
