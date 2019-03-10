class VariableLengthArgs{
    
    public static void sum(int ...a){
        int sum  = 0;
        System.out.println("No of arguments : "+a.length);
        for(int i: a)
            sum += i;
            
        System.out.print("Sum is : " + sum);    
    }

    public static void main(String [] args){
        sum(1,2,3,4);    
    }
}