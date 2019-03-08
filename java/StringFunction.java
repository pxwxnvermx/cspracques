import java.util.Scanner;
import java.lang.StringBuffer;

public class StringFunction{
  public static void main(String [] args){
    Scanner r = new Scanner(System.in);
    System.out.println("Enter a line of characters : ");
    String a = r.nextLine();

    StringBuffer b = new StringBuffer(a);

    int ch = 8;

    while(ch!=0){
      System.out.println("-----------------------------------");
      System.out.println(" > 1 For setCharAt ");
      System.out.println(" > 2 For setLength ");
      System.out.println(" > 3 For append ");
      System.out.println(" > 4 For insert ");
      System.out.println(" > 5 For concat ");
      System.out.println(" > 6 For equals");
      System.out.println(" > 0 To exit");
      System.out.print(" > Enter Your Choice : ");

      ch = r.nextInt();

      System.out.println("------------------------------------");

      switch(ch){
        case 0:
          System.out.println("---------------------------------------------  B BYE  --------------------------------------------------");
          break;
        case 1:
          System.out.print("Enter the index of the character to be changed : ");
          int index = r.nextInt();
          System.out.print("Enter the character : ");
          char re = r.next().charAt(0);
          b.setCharAt(index,re);
          System.out.println("String after change : "+b);
          break;
        case 2:
          System.out.print("Enter the new length of the string : ");
          int length = r.nextInt();
          b.setLength(length);
          System.out.println("String after change : "+b);
          break;
        case 3:
          r.nextLine();
          System.out.print("Enter the string to appended : ");
          String app = r.nextLine();
          b.append(app);
          System.out.println("String after change : "+b);
          break;
        case 4:
          r.nextLine();
          System.out.print("Enter the string to be inserted : ");
          String ins = r.nextLine();
          System.out.print("Enter the index where to insert : ");
          int offset = r.nextInt();
          b.insert(offset,ins);
          System.out.println("String after change : "+b);
          break;
        case 5:
          r.nextLine();
          System.out.print("Enter the string to be concateneted : ");
          String concat = r.nextLine();
          System.out.println("String after change : "+a.concat(concat));
          break;
        case 6:
          r.nextLine();
          System.out.print("Enter the string to be tested for Equality : ");
          String equals = r.nextLine();
          if(a.equals(equals))
            System.out.println("Equal");
          else
            System.out.println("Not Equal");
          break;
        default:
          ch = 0;
      }
    }
  }
}
