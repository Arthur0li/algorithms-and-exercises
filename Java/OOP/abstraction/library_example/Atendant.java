package abstraction.library_example;

import javax.swing.JOptionPane;

public class Atendant {
    public static void main(String args[]){

        Library book1 = new Library();

        String publisherUser, authorUser, bookUser;
        int quantityUser, pagesUser, choiceUser;
        double priceUser;

        choiceUser = Integer.parseInt(JOptionPane.showInputDialog("Choose a book type and then enter the information" +
        "\n 1 - Programming" +
        "\n 2 - Manga" +
        "\n 3 - Historical"));
        publisherUser = JOptionPane.showInputDialog("Type the publisher name!");
        authorUser = JOptionPane.showInputDialog(("Type the author name!"));
        bookUser = JOptionPane.showInputDialog("Type the book name!");
        quantityUser = Integer.parseInt(JOptionPane.showInputDialog("Type the available quantity!"));
        pagesUser = Integer.parseInt(JOptionPane.showInputDialog("Type the total number of pages!"));
        priceUser =  Double.parseDouble(JOptionPane.showInputDialog("Type the price!"));

        book1.author = authorUser;
        book1.book = bookUser;
        book1.publisher = publisherUser;
        book1.pages = pagesUser;
        book1.quantity = quantityUser;
        book1.price = priceUser;

        book1.Information(choiceUser);
    }
}
