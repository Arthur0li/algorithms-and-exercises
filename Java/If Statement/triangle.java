import javax.swing.JOptionPane;

public class triangle {
    public static void main(String[] args) {
        double side1 = Double.parseDouble(JOptionPane.showInputDialog("Welcome to the triangle type program!" + "\n\nEnter the length of the first side:"));
        double side2 = Double.parseDouble(JOptionPane.showInputDialog("Enter the length of the second side:"));
        double side3 = Double.parseDouble(JOptionPane.showInputDialog("Enter the length of the third side:"));

        if (side1 == side2 && side2 == side3) {
            JOptionPane.showMessageDialog(null, "The triangle is equilateral!");
        } 
        else if (side1 == side2 || side1 == side3 || side2 == side3) {
            JOptionPane.showMessageDialog(null, "The triangle is isosceles!");
        } 
        else {
            JOptionPane.showMessageDialog(null, "The triangle is scalene!");
        }
    }
}
