package Inheritance.stationery;

public class Goods3 extends Goods2{
    private int quantidade_caderno;
    private double preco_lapis;

    Goods3(){
        super();
    }

    Goods3(int quantidade_caderno, double preco_lapis){
        this.quantidade_caderno = quantidade_caderno;
        this.preco_lapis = preco_lapis;
    }

    public int get_quantidade_caderno() {
        return quantidade_caderno;
    }

    public double get_preco_lapis() {
        return preco_lapis;
    }
}
