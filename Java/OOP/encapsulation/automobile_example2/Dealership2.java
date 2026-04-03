package encapsulation.automobile_example2;

import javax.swing.JOptionPane;

public class Dealership2 {
    public static void main(String[] args) {
        // Here we are creating an instance of a class (creating an object from a class)
            Automobile2 car1 = new Automobile2();

            String branduser, modeluser, coloruser;
            double priceDouble;

            // input window
            branduser = JOptionPane.showInputDialog("Enter a brand:");
            modeluser = JOptionPane.showInputDialog("Enter a model:");
            coloruser = JOptionPane.showInputDialog("Enter the car color:");
            priceDouble = Double.parseDouble(JOptionPane.showInputDialog("Enter the price:"));

            //it connects the information that the user entered and stores it within an object in its respective attribute.
            car1.setColor(coloruser);
            car1.setBrand(branduser);
            car1.setModel(modeluser);
            car1.setPrice(priceDouble);

            // the object is instructed to execute the method to display information.
            JOptionPane.showMessageDialog(null,
                "The color: " + car1.getColor() +
                "\nThe brand: " + car1.getBrand() +
                "\nThe model: " + car1.getModel() +
                "\nThe price: " + car1.getPrice());
    }
}