import javax.swing.JOptionPane;

public class area_of_rectangle {
    public static void main(String[] args) {
        JOptionPane.showMessageDialog(null,"Bem vindo ao código de cálculo de área do retângulo");
        double number1 = Double.parseDouble(JOptionPane.showInputDialog("Digite a base do retângulo:"));
        double number2 = Double.parseDouble(JOptionPane.showInputDialog("Digite a altura do retângulo:"));

        double result = number1 * number2;

        JOptionPane.showMessageDialog(null,"Aqui está o resultado da área do retângulo: " + result);
    }
    
}
