import javax.swing.JOptionPane;

public class equal_or_different {
    public static void main(String[] args) {
        JOptionPane.showMessageDialog(null, "Welcome to the number comparison program! :)");

        double number1 = Double.parseDouble(JOptionPane.showInputDialog("Enter the first number:"));
        double number2 = Double.parseDouble(JOptionPane.showInputDialog("Enter the second number:"));

        if (number1 == number2) {
            JOptionPane.showMessageDialog(null, "The numbers are equal.");
        } else {
            if (number1 > number2) {
                JOptionPane.showMessageDialog(null, "The numbers are different" +
                "\nMoreover, the number " + number1 + " is greater than the number " + number2);
            } else {
                JOptionPane.showMessageDialog(null, "The numbers are different" +
                "\nMoreover, the number " + number2 + " is greater than the number " + number1);
            }
        }
    }
}
