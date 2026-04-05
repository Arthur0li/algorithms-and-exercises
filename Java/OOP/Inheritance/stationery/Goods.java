package Inheritance.stationery;

public class Goods {
    private String caderno;
    private String lápis;
    Goods( ){
        System.out.println("acesso ao método construtor padrão da superclasse Papeleria"); 
    }

    Goods(String lápis){
        this.lápis = lápis;
    }
    public void set_caderno(String caderno) {
        this.caderno = caderno;
    }
    public String get_caderno( ) {
        return caderno;}

    public String get_lapis( ) {
        return lápis;}
}
