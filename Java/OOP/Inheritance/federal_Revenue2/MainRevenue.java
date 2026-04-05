package Inheritance.federal_Revenue2;

import javax.swing.JOptionPane;

public class MainRevenue {
    public static void main(String[] args) {
        //objetos
        Employee employee_test = new Employee();
        LegalEntity legalEntity_test = new LegalEntity();

        int choice1;
        String name, RG_CNPJ, card;

        choice1 = Integer.parseInt(JOptionPane.showInputDialog("Escolha uma opção: \n  1- Pessoa física \n 2 - Pessoa Jurídica"));

        switch (choice1){
            case 1:{
                name = JOptionPane.showInputDialog("Digite o nome do contribuinte: ");
                RG_CNPJ = JOptionPane.showInputDialog("Digite o RG do contribuinte: ");
                card = JOptionPane.showInputDialog("Digite o cartao do contribuinte: ");

                employee_test.setNome(name);
                employee_test.setRG(RG_CNPJ);
                employee_test.setCartao(card);

                JOptionPane.showMessageDialog(null, "Nome: " + employee_test.getNome() +
                "\nRG_CNPJ: " + employee_test.getRg() +
                "\nCartao: " + employee_test.getCartao());

                break;
            }
            case 2:{
                name = JOptionPane.showInputDialog("Digite o nome do contribuinte: ");
                RG_CNPJ = JOptionPane.showInputDialog("Digite o RG_CNPJ do contribuinte: ");

                legalEntity_test.setNome(name);
                legalEntity_test.setCnpj(RG_CNPJ);

                JOptionPane.showMessageDialog(null, "Nome: " + legalEntity_test.getNome() +
                "\nCNPJ: " + legalEntity_test.getCnpj());

                break;
            }
        }
    }
}
