package constructor_method.mobile_device;

/* Here there is a difference between:
 - instance variable
 - static variable
*/

public class MobileDevice {
    // Instance-scoped variable: it can be changed by a new instance
    public String number;

    // Class-scoped variables (static): the value of the last instance prevails
    public static String user; // Each object has its own number.
    public static int DDD;     // All objects share the same user.

    public void identifyNumber(String number) {
        this.number = number;
    }

    public void identifyUser(String user) {
        this.user = user;
    }
}