// Different package from Acess_number
package encapsulation.access_encapsulation2;

// Importing the class from another package
import encapsulation.access_encapsulation.Acess_number;

public class Verify2 {
    public static void main(String[] args) {
        // Creating an object of the class Acess_number
        Acess_number key = new Acess_number();

        /* key.a = 10; → NOT allowed
           'a' is package-private, so it cannot be accessed from another package */

        // Using the public method to indirectly modify 'a'
        key.setNumber("a", 10);

        // 'b' is public, so it is still accessible even from another package
        key.b = 20;

        // key.c = 30; → NOT allowed
        // 'c' is private and cannot be accessed outside the class
        key.setNumber("c", 30);

        // key.d = 40; → NOT allowed here
        // 'd' is protected, and this class is NOT a subclass and is in another package
        // So we must use the public method
        key.setNumber("d", 40);

        // Display all values
        key.show_number();
    }
}