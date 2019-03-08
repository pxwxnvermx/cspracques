// This class contains a private method
class A{
    private void display(){
        System.out.print("Private Method");
    }
}
// This class contains a public method 
class B{
    public void display(){
        System.out.print("Private Method");
    }
}

class AccessModifiers{
    public static void main(String [] args) {
        A obja = new A();
        obja.display();  // we access the private method here which generates an error

        B objb = new B();
        objb.display();  // we can accesss the public method anywhere
    }
}
