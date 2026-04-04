package constructor_method.automobile_exemple4;

public class AutomobileData {
    public static void main(String[] args) {

        // The object exists normally.
        AutomobileExample4 auto = new AutomobileExample4("Volkswagen", "Beetle", "green", 6897.99);
        System.out.println(auto.showAutomobileExample4());

        // Here the reference auto was deleted.
        // Now it no longer points to the object.
        // auto = null;

        // This suggests to Java that it can run garbage collection.
        System.gc();

        System.out.println(auto.showAutomobileExample4());

        /* When we uncomment line 12, it will give an error, because auto became null.
           So there is no object left to call the method on.
           This normally generates a NullPointerException.
        */
    }
}