package Inheritance.stationery;

public class Stationery_Access2 {
        public static void main(String [] args) {

        //primeiro acesso ao método construtor padrão da Goods
        Goods a = new Goods( );
        a.set_caderno("brochura");
        System.out.println("caderno tipo: " + a.get_caderno());

        Goods b = new Goods("lápis de cor");
        System.out.println("lápis tipo: " + b.get_lapis() + "\n");

        /*segunod acesso ao método construtor padrão da Goods"
         * provocado automaticamente por causa da herança */
        Goods2 c = new Goods2(33.84, 20);
        System.out.println("preço do caderno R$ " + c.get_preco_caderno());
        System.out.println("quantidade de caixas de lápis de cor: " + c.get_quantidade_caixas_lapis());

        /*terceiro acesso ao método construtor padrão da Goods"
         * provocado automaticamente por causa da herança */
        Goods3 d = new Goods3(90, 23.90);
        System.out.println("quantidade do caderno " + d.get_quantidade_caderno());
        System.out.println("preço do lapis R$ " + d.get_preco_lapis());
    }
}
