package Inheritance.basic_inheritance;

import javax.swing.JOptionPane;

public class InheritanceMain {
    public static void main(String[] args) {
        ChildClass2 test1 = new ChildClass2();

        test1.set_atributo1("valor do atributo1");
        test1.set_atributo2(("valor do atributo2"));
        JOptionPane.showMessageDialog(null, test1.get_atributo1());
        JOptionPane.showMessageDialog(null, test1.get_atributo2());
    }
}
