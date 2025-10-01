import javax.swing.JOptionPane;

public class expense_calculator {
    //criar um algoritmo onde o usuario digita a renda mensal e o gasto mensal, depois calcular o que sobrará para o usuario

    public static void main(String[] args) {
        float renda_mensal = Integer.parseInt(JOptionPane.showInputDialog("Digite a sua renda mensal:"));
        float gasto_mensal = Float.parseFloat(JOptionPane.showInputDialog("Digite a sua gasto mensal"));

        float resultado = renda_mensal - gasto_mensal;

        JOptionPane.showMessageDialog(null,"Aqui está o que vai sobrar no final do mês: " + resultado);
    }
}
