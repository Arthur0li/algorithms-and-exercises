package constructor_method.federal_Revenue;

public class Data {
    String nome;
    int cpf, cnpj, cartao;

    public void setNome(String nome){
        this.nome = nome;
    }

    public void setCPF(int cpf){
        this.cpf = cpf;
    }

    public void setCNPJ(int cnpj){
        this.cnpj = cnpj;
    }

    public void setCartao(int cartao){
        this.cartao = cartao;
    }

    public String getNome(){
        return nome;
    }

    public int getCPF(){
        return cpf;
    }

    public int getCNPJ(){
        return cnpj;
    }

    public int getcCartao(){
        return cartao;
    }
}