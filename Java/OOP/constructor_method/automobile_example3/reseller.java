package constructor_method.automobile_example3;

public class reseller {
    public static void main(String[] args) {

        AutomobileExample3 car1 = new AutomobileExample3();
        car1.showCar();

        /* The first car shows something like this:
            brand: null
            model: null
            year: 0
            color: green
            price: 0.0
        */

        AutomobileExample3 car2 = new AutomobileExample3(1977, "Volkswagen", "Beetle", 3888.00);
        car2.showCar();

        /*
        Here the constructor with parameters was used.
        So the object is created with:

            year = 1977
            brand = "Volkswagen"
            model = "Beetle"
            price = 3888.00

        The color remains green, because color is static.
        */
    }
}