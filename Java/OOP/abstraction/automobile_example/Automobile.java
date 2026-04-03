package abstraction.automobile_example;

// importing the window library
import javax.swing.JOptionPane;

public class Automobile {

    // class attributes, or instance variables
    String brand;
    String color;
    String model;
    double price;

    // This is a method that will show the info that the user typed
    public void showAutomobileInfo() {
        //command that display the message in a window
        JOptionPane.showMessageDialog(null,
            "The car brand: " + brand +
            "\nThe car color: " + color +
            "\nThe car model: " + model +
            "\nThe car price: " + price
        );
    }
}