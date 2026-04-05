package Inheritance.stationery;

public class Goods2 extends Goods{
    private double preco_caderno;
    private int quantidade_caixas_lapis;

    Goods2 ( )
    {super();}

    Goods2(double preco_caderno,  int quantidade_caixas_lapis ){
        this.preco_caderno = preco_caderno;
        this.quantidade_caixas_lapis = quantidade_caixas_lapis;
    }

    public double get_preco_caderno( ) {
        return preco_caderno;    }

    public int get_quantidade_caixas_lapis( ) {
        return quantidade_caixas_lapis; }
}
