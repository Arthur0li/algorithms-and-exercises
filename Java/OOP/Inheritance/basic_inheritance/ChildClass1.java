package Inheritance.basic_inheritance;

import javax.swing.JOptionPane;

public class ChildClass1 extends Superclass {
    private String atributo2;
    
    ChildClass1(){
        super();
        JOptionPane.showMessageDialog(null, "Acesso ao método construtor da ChildClass1");
    }

    public void set_atributo2(String atributo2){
        this.atributo2 = atributo2;
    }

    public String get_atributo2(){
        return atributo2;
    }
}
