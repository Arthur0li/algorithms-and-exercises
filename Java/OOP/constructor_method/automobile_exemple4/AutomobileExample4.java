package constructor_method.automobile_exemple4;

public class AutomobileExample4 {
    private String brand;
    private String model;
    private String color;
    private double price;

    AutomobileExample4(String brand, String model, String color, double price) {
        this.brand = brand;
        this.model = model;
        this.color = color;
        this.price = price;
    }

    String data;

    public String showAutomobileExample4() {
        data = "BRAND:\t" + brand + "\n" + "MODEL:\t" + model +
        "\n" + "COLOR:\t" + color + "\n" + "PRICE R$ " + price;
        return data;
    }
}