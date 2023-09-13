import java.util.Locale;

public class App {
    public static void main(String[] args) throws Exception {

        Locale.setDefault(Locale.US);

        int idade;
        double salario, altura;
        char genero;
        String nome;

        idade = 30;
        salario = 5000.5;
        altura = 1.72;
        genero = 'F';
        nome = "Maria Silva";

        System.out.println("Idade = " + idade);
        System.out.println("Salario = " + String.format("%.2f", salario));
        System.out.println("Altura = " + String.format("%.2f", altura));
        System.out.println("Genero = " + genero);
        System.out.println("Nome = " + nome);
    }
}
