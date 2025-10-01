import javax.swing.JOptionPane;

public class expense_calculator {
    // create an algorithm where the user enters the monthly income and monthly expenses,
    // then calculate what will remain for the user

    public static void main(String[] args) {
        float monthly_income = Float.parseFloat(JOptionPane.showInputDialog("Enter your monthly income:"));
        float monthly_expenses = Float.parseFloat(JOptionPane.showInputDialog("Enter your monthly expenses:"));

        float result = monthly_income - monthly_expenses;

        JOptionPane.showMessageDialog(null, "Here is what will remain at the end of the month: " + result);
    }
}
