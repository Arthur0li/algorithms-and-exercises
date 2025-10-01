import javax.swing.JOptionPane;

public class arithmetic_average {
    public static void main(String[] args) {
        int number1 = Integer.parseInt(JOptionPane.showInputDialog("Digite o primeiro número:"));
    int number2 = Integer.parseInt(JOptionPane.showInputDialog("Digite o segundo núemro:"));
    int number3 = Integer.parseInt(JOptionPane.showInputDialog("Digite o terceiro número:"));
    int number4 = Integer.parseInt(JOptionPane.showInputDialog("Digite o quarto número"));

    int resultado = (number1+number2+number3+number4)/4;

    JOptionPane.showMessageDialog(null,"Aqui está o resultado da média: "+resultado);
    }
}
