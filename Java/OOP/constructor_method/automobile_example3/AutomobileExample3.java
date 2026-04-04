package constructor_method.automobile_example3;

public class AutomobileExample3 {
    private int year; // = 0
    private String brand; // = null
    private String model; // = null
    private static String color; // it does not stay null because it was initialized as static
    private double price; // = 0

    /* The word static indicates that the variable does not belong to each object separately,
       but to the entire class.
       This means that all automobile_example3 objects share the same color.
       If you change the color in one place, it changes for all objects.
    */

    // Constructor without parameters.
    AutomobileExample3() {}

    // Constructor with parameters. An object can be created already with values in the constructor.
    AutomobileExample3(int year, String brand, String model, double price) {
        this.year = year;
        this.brand = brand;
        this.model = model;
        this.price = price;
    }

    static {
        color = "green";
    }

    /* This is a static block.
       It is executed only once, when the class is loaded.
       It is used to initialize static values.
       So, before even creating car1 and car2, the color has already been defined as "green".
    */

    public void showCar() {
        System.out.println("\n" + "car brand: " + "\t" + brand + "\n"
        + "model: " + "\t" + model + "\n" + "year: " + "\t" + year + "\n"
        + "color: " + "\t" + color + "\n" + "price: " + "\t" + price);
    }
}