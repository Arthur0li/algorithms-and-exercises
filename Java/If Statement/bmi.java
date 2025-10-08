import javax.swing.JOptionPane;

public class bmi {
    public static void main(String[] args) {
        double weight = Double.parseDouble(JOptionPane.showInputDialog("Welcome to the BMI calculator :)\n" + "\nEnter your weight:"));
        double height = Double.parseDouble(JOptionPane.showInputDialog("Enter your height:"));

        double bmi = weight / (height * height);

        if (bmi < 18.5) {
            JOptionPane.showMessageDialog(null, "Your BMI is " + bmi + "\nYou are underweight.");
        } 
        else if (bmi >= 18.5 && bmi <= 24.9) {
            JOptionPane.showMessageDialog(null, "Your BMI is " + bmi + "\nYou are at a normal weight.");
        } 
        else {
            JOptionPane.showMessageDialog(null, "Your BMI is " + bmi + "\nYou are overweight.");
        }
    }
}

