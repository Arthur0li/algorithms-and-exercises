package encapsulation.taxpayer_data;

import javax.swing.JOptionPane;

public class data_query {
    public static void main(String[] args) {
        data test1 = new data();

        // Getting input from the user
        String name = JOptionPane.showInputDialog("Enter your name:");
        String id = JOptionPane.showInputDialog("Enter your ID:");
        String card = JOptionPane.showInputDialog("Enter your card number:");

        // Setting values using setters
        test1.setName(name);
        test1.setId(id);
        test1.setCard(card);

        // Showing values using getters
        JOptionPane.showMessageDialog(null,
                "Name: " + test1.getName() +
                "\nID: " + test1.getId() +
                "\nCard: " + test1.getCard());
    }
}