package abstraction.automobile_example;

// importing the window library
import javax.swing.JOptionPane;

public class Dealership {
    public static void main(String args[]) {
        
        // Here we are creating an instance of a class (creating an object from a class)
        Automobile car1 = new Automobile();

        String branduser, modeluser, coloruser;
        double priceDouble;

        // input window
        branduser = JOptionPane.showInputDialog("Enter a brand:");
        modeluser = JOptionPane.showInputDialog("Enter a model:");
        coloruser = JOptionPane.showInputDialog("Enter the car color:");
        priceDouble = Double.parseDouble(JOptionPane.showInputDialog("Enter the price:"));

        //it connects the information that the user entered and stores it within an object in its respective attribute.
        car1.color = coloruser;
        car1.brand = branduser;
        car1.model = modeluser;
        car1.price = priceDouble;

        // the object is instructed to execute the method to display information.
        car1.showAutomobileInfo();
    }
}