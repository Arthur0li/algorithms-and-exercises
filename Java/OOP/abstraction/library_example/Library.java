package abstraction.library_example;

import javax.swing.JOptionPane;

public class Library {
    // attributes
    String publisher, author, book;
    int quantity, pages;
    double price;

    //method
    public void Information(int choice){
        switch (choice) {
            case 1:
                JOptionPane.showMessageDialog(null, "Programming Books! \n" +
                    "\nBook: " + book +
                    "\nAuthor: " + author +
                    "\npublisher: " + publisher +
                    "\nQuantity: " + quantity +
                    "\nPages: " + pages +
                    "\nPrice: " + price
                );
                break;
        
            case 2:
                JOptionPane.showMessageDialog(null, "Manga! \n" +
                    "\nBook: " + book +
                    "\nAuthor: " + author +
                    "\npublisher: " + publisher +
                    "\nQuantity: " + quantity +
                    "\nPages: " + pages +
                    "\nPrice: " + price
                );
                break;
            
            case 3:
                JOptionPane.showMessageDialog(null, "Historical Books! \n" +
                    "\nBook: " + book +
                    "\nAuthor: " + author +
                    "\npublisher: " + publisher +
                    "\nQuantity: " + quantity +
                    "\nPages: " + pages +
                    "\nPrice: " + price
                );                
                break;

            default:
                JOptionPane.showMessageDialog(null, "ERROR! You didnt put a valid option");
                break;
        }
    }
}
