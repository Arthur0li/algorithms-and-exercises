package abstraction.automobile_example;

// importing the window library
import javax.swing.JOptionPane;

public class Dealership {
    public static void main(String args[]) {
        
        // Here we are creating an instance of a class (creating an object from a class)
        Automobile car1 = new Automobile();

        String brandString, modelString, colorString;
        double priceDouble;

        // input window
        brandString = JOptionPane.showInputDialog("Enter a brand:");
        modelString = JOptionPane.showInputDialog("Enter a model:");
        colorString = JOptionPane.showInputDialog("Enter the car color:");
        priceDouble = Double.parseDouble(JOptionPane.showInputDialog("Enter the price:"));

        //it connects the information that the user entered and stores it within an object in its respective attribute.
        car1.color = colorString;
        car1.brand = brandString;
        car1.model = modelString;
        car1.price = priceDouble;

        // the object is instructed to execute the method to display information.
        car1.showAutomobileInfo();
    }
}