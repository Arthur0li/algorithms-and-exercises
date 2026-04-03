package encapsulation.access_encapsulation;

public class Verify {
    public static void main(String[] args) {
        // Creating an object of the class Acess_number
        Access_number key = new Access_number();

        // Direct access is allowed because:
        // 'a' is package-private and we are in the same package
        key.a = 10;

        // 'b' is public, so it can always be accessed directly
        key.b = 20;

        // key.c = 30; → NOT allowed because 'c' is private
        // Instead, we use a public method to modify it (encapsulation)
        key.setNumber("c", 30);

        // 'd' is protected, and since we are in the same package, access is allowed
        key.d = 40;

        // Display all values
        key.show_number();
    }
}