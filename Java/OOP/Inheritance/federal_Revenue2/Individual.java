package Inheritance.federal_Revenue2;

public class Individual extends Taxpayer{
    private String rg;

    public void setRG(String rg){
        this.rg = rg;
    }

    public String getRg() {
        return rg;
    }
}
