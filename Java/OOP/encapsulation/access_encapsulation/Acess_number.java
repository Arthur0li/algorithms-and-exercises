package encapsulation.access_encapsulation;

public class Acess_number {
    int a;          // package-private: accessible only within the same package
    public int b;   // public: accessible from any class in any package
    private int c;  // private: accessible only داخل this class
    protected int d;// protected: accessible in the same package and in subclasses

    // This method works as a "setter" that allows controlled modification
    // of attributes based on an identifier (id)
    public void setNumber(String id, int number){
        // If the id is "a", assign the value to attribute 'a'
        if (id == "a")
            this.a = number;

        // If the id is "c", assign the value to attribute 'c'
        // Note: 'c' is private, so it cannot be accessed directly outside the class
        if (id == "c")
            this.c = number;

        // If the id is "d", assign the value to attribute 'd'
        if (id == "d")
            this.d = number;
    }

    // This method prints all attribute values
    // Even private attributes can be accessed here because we are inside the same class
    public void show_number (){
        System.out.println("numero a = "+ a);
        System.out.println("numero b = "+ b);
        System.out.println("numero c = "+ c);
        System.out.println("numero d = "+ d);
    }
}