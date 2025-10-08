import javax.swing.JOptionPane;

public class area_of_rectangle {
    public static void main(String[] args) {
        JOptionPane.showMessageDialog(null, "Welcome to the rectangle area calculation program");
        double number1 = Double.parseDouble(JOptionPane.showInputDialog("Enter the base of the rectangle:"));
        double number2 = Double.parseDouble(JOptionPane.showInputDialog("Enter the height of the rectangle:"));

        double result = number1 * number2;

        JOptionPane.showMessageDialog(null, "Here is the result of the rectangle area: " + result);
    }
}
