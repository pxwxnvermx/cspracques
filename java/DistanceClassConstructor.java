public class DistanceClassConstructor{
  private double cm;

  DistanceClassConstructor(double cm){
    this.cm = cm;
  }

  public double toFeets(){
      return this.cm/30.48;
  }
  public double toInches(){
      return this.cm/2.54;
  }
  public static void main(String [] args){
    DistanceClassConstructor n = new DistanceClassConstructor(10);

    System.out.print(" "+n.toFeets());
    System.out.print(" "+n.toInches());
  }
}
