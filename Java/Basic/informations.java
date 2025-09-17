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

        JOptionPane.showMessageDialog(null, "Your name is: "+ name);
        JOptionPane.showMessageDialog(null, "Your age is: " + age);
        JOptionPane.showMessageDialog(null, "The country that you live is: " + country);
        JOptionPane.showMessageDialog(null, "Your monthly income is : " + monthly_income);
    }   
}