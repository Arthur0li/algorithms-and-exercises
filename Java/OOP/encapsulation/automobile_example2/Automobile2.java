package encapsulation.automobile_example2;

public class Automobile2 {
    // class attributes, or instance variables
    private String brand;
    private String color;
    private String model;
    private double price;

    public void setBrand(String brand){
        this.brand = brand;
    }

    public void setColor(String color){
        this.color = color;
    }

    public void setModel(String model){
        this.model = model;
    }

    public void setPrice(double price){
        this.price = price;
    }

    public String getBrand(){
        return this.brand;
    }

    public String getColor(){
        return this.color;
    }

    public String getModel(){
        return this.model;
    }

    public double getPrice(){
        return this.price;
    }
}