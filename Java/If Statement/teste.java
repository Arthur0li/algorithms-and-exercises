import javax.swing.JOptionPane;  // import vai antes de tudo

public class teste {
    public static void main(String[] args) {
        String Num1String = JOptionPane.showInputDialog(null, "Digite o primeiro número: ");
        String operacao = JOptionPane.showInputDialog(null, "Digite a operação (+, -, *, /)");
        String Num2String = JOptionPane.showInputDialog(null, "Digite o segundo valor: ");

        double resultado = 0;
        // converter
        double num1 = Double.parseDouble(Num1String);
        double num2 = Double.parseDouble(Num2String);

        switch (operacao) {
            case "+":
                resultado = num1 + num2;
                break;
            case "-":
                resultado = num1 - num2;
                break;
            case "*":
                resultado = num1 * num2;
                break;
            case "/":
                if (num2 == 0) {
                    JOptionPane.showMessageDialog(null, "Erro: Divisão por zero não permitida",
                            "ERRO", JOptionPane.ERROR_MESSAGE);
                    return;
                }
                resultado = num1 / num2;
                break;
            default:
                JOptionPane.showMessageDialog(null, "Operação Inválida! ",
                        "ERRO", JOptionPane.ERROR_MESSAGE);
                return;
        }
        JOptionPane.showMessageDialog(null, "O resultado é: " + resultado,
                "Resultado", JOptionPane.INFORMATION_MESSAGE);
    }
}
