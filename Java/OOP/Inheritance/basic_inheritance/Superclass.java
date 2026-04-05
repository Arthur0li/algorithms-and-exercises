package Inheritance.basic_inheritance;

import javax.swing.JOptionPane;

public class Superclass {
    private String atributo1;

    Superclass(){
        JOptionPane.showMessageDialog(null, "Acesso ao método construtor da Superclasse");
    }

    public void set_atributo1(String atributo1){
        this.atributo1 = atributo1;
    }

    public String get_atributo1(){
        return atributo1;
    }
}
