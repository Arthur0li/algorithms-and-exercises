package Inheritance.stationery;

public class Stationery_Access2 {
        public static void main(String [] args) {

        //primeiro acesso ao método construtor padrão da Goods
        Goods a = new Goods( );
        a.set_caderno("brochura");
        System.out.println("caderno tipo: " + a.get_caderno());

        Goods b = new Goods("lápis de cor");
        System.out.println("lápis tipo: " + b.get_lapis() + "\n");

        

        /*terceiro acesso ao método construtor padrão da Goods"
         * provocado automaticamente por causa da herança */
        Goods2 d = new Goods2(33.84, 20);
        System.out.println("preço do caderno R$ " + d.get_preco_caderno());
        System.out.println("quantidade de caixas de lápis de cor: " + d.get_quantidade_caixas_lapis());
    }
}
