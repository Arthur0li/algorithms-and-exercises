import javax.swing.JOptionPane;

public class arithmetic_average {
    public static void main(String[] args) {
        int number1 = Integer.parseInt(JOptionPane.showInputDialog("Enter the first number:"));
        int number2 = Integer.parseInt(JOptionPane.showInputDialog("Enter the second number:"));
        int number3 = Integer.parseInt(JOptionPane.showInputDialog("Enter the third number:"));
        int number4 = Integer.parseInt(JOptionPane.showInputDialog("Enter the fourth number:"));

        int result = (number1 + number2 + number3 + number4) / 4;

        JOptionPane.showMessageDialog(null, "Here is the average result: " + result);
    }
}
