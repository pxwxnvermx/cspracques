public class FunctionOverloading{
  public static int power(int n){
    return n*n;
  }

  public static double power(double a, double b){
    return Math.pow(a,b);
  }

  public static void main(String [] args){
      System.out.println(" "+power(2.0,2.0));
  }
}
