import javax.swing.JOptionPane;

public class operation {
    public static void main(String[] args) {
        double number1 = Double.parseDouble(JOptionPane.showInputDialog( "Type the first number:"));
        double number2 = Double.parseDouble(JOptionPane.showInputDialog("Type the second number:"));

        double sum = number1 + number2;
        double subtraction = number1 - number2;
        double multiplication = number1 * number2;
        double division = number1 / number2;

        JOptionPane.showMessageDialog(null, "The sum: " + sum +
        "\nThe subtraction: " + subtraction +
        "\nThe multiplication: " +multiplication+
        "\nThe division: "+division);
    }    
}
