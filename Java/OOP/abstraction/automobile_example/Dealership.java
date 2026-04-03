package abstraction.automobile_example;

// Lembrar de como importar a biblioteca!
import javax.swing.JOptionPane;

//lembrar que toda classe precisa do seu própio arquivo
public class Dealership {
    public static void main (String args[]){
        
        // Aqui estamops fazendo uma instância de uma classe (criar um objeto apartir de uma classe)
        Automobile car1 = new Automobile();

        String marcaString, modeloString, corString, precoString;
        
        // eu não podia só criar o double de uma vez?
        double precoDouble;

        //lembrar do comando de exibir uma tela de input
        marcaString = JOptionPane.showInputDialog("digite uma marca:");
        modeloString = JOptionPane.showInputDialog("digite um modelo");
        corString = JOptionPane.showInputDialog("digite a cor do carro:");
        precoString = JOptionPane.showInputDialog("digite o preço:");

        //conversão para o tipo double
        precoDouble = Double.parseDouble(precoString);

        car1.cor = corString;
        car1.marca = marcaString;
        car1.modelo = modeloString;
        car1.preco = precoDouble;

        car1.Informa_Automovel();
    }
}
