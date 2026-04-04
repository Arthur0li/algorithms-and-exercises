package constructor_method.federal_Revenue;

public class Data {
    String name, cpf, cnpj, card;

    // Set the name
    public void setName(String name){
        this.name = name;
    }

    // Set the CPF
    public void setCPF(String cpf){
        this.cpf = cpf;
    }

    // Set the CNPJ
    public void setCNPJ(String cnpj){
        this.cnpj = cnpj;
    }

    // Set the card
    public void setCard(String card){
        this.card = card;
    }

    // Get the name
    public String getName(){
        return name;
    }

    // Get the CPF
    public String getCPF(){
        return cpf;
    }

    // Get the CNPJ
    public String getCNPJ(){
        return cnpj;
    }

    // Get the card
    public String getCard(){
        return card;
    }
}