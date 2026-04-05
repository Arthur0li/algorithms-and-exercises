package Inheritance.federal_Revenue2;

public class LegalEntity extends Taxpayer{
    private String cnpj;
    
    public void setCnpj(String cnpj) {
        this.cnpj = cnpj;
    }

    public String getCnpj() {
        return cnpj;
    }
}
