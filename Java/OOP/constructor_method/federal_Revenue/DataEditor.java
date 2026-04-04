package constructor_method.federal_Revenue;

import javax.swing.JOptionPane;

public class DataEditor {
    public static void main(String[] args) {
        
        String nameUser = JOptionPane.showInputDialog("Enter the name!");
        String cpfUser = JOptionPane.showInputDialog("Enter the CPF!");
        String cnpjUser = JOptionPane.showInputDialog("Enter the CNPJ!");
        String cardUser = JOptionPane.showInputDialog("Enter the card!");

        Data information1 = new Data();

        // Store the data in the object
        information1.setName(nameUser);
        information1.setCNPJ(cnpjUser);
        information1.setCard(cardUser);
        information1.setCPF(cpfUser);

        // Show the stored data
        JOptionPane.showMessageDialog(null,
                "Name: " + information1.getName() +
                "\nCNPJ: " + information1.getCNPJ() +
                "\nCard: " + information1.getCard() +
                "\nCPF: " + information1.getCPF());
    }
}