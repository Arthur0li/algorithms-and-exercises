import javax.swing.JOptionPane;

public class informations {
    public static void main(String[] args) {
        String name = "";
        String age = "";
        String country = "";
        String monthly_income = "";

        name = JOptionPane.showInputDialog("Type your name:");
        age = JOptionPane.showInputDialog("Now type your age:");
        country = JOptionPane.showInputDialog("Now type the country that you live: ");
        monthly_income = JOptionPane.showInputDialog("Now type your monthly income:");

        JOptionPane.showMessageDialog(
            null, 
            "Your name is: " + name +
            "\nYour age is: " + age +
            "\nThe country that you live is: " + country +
            "\nYour monthly income is: " + monthly_income
            );
    }   
}