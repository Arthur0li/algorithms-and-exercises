package constructor_method.lesson_plan;

import javax.swing.JOptionPane;

public class Plan {
    public static void main(String[] args) {

        String subjectUser = JOptionPane.showInputDialog("Enter the subject:");
        String contentUser = JOptionPane.showInputDialog("Enter the content:");
        String criteriaUser = JOptionPane.showInputDialog("Enter the criteria:");
        String bibliographyUser = JOptionPane.showInputDialog("Enter the bibliography:");

        CreatePlan plan1 = new CreatePlan(subjectUser, contentUser, criteriaUser, bibliographyUser);

        JOptionPane.showMessageDialog(null,
            "Subject: " + plan1.getSubject() +
            "\nContent: " + plan1.getContent() +
            "\nCriteria: " + plan1.getEvaluation_criteria() +
            "\nBibliography: " + plan1.getBibliography());
    }
}