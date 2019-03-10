class BoxingUnboxing{
    public static void main(String [] args){
        Integer i = 10; // boxed integer
        int j = i;      // unboxed integer i

        Boolean a = true;
        if(a)           // while evaluating if the boolean is unboxed
            System.out.println("True");
        else
            System.out.println("False");    
    }
}