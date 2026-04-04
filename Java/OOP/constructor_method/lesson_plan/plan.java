package constructor_method.lesson_plan;

import javax.swing.JOptionPane;

public class plan {
    public static void main(String[] args) {

        String materia_user = JOptionPane.showInputDialog("Digite a matéria:");
        String conteudo_user = JOptionPane.showInputDialog("Digite o conteúdo:");
        String criterio_user = JOptionPane.showInputDialog("Digite o critério:");
        String bibliografia_user = JOptionPane.showInputDialog("Digite a bibliografia:");

        create_plan plan1 = new create_plan(materia_user, conteudo_user, criterio_user, bibliografia_user);

        JOptionPane.showMessageDialog(null, 
        "Materia: " + plan1.getMateria() +
        "\nConteudo: " + plan1.getConteudo() + 
        "\nCriterio: " + plan1.getCriterio_avaliacao() + 
        "\nBibliografia: " + plan1.getBibliografia());
    }
}

