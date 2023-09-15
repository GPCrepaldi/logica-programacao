import java.util.Locale;
import java.util.Scanner;

public class dados {
    public static void main(String[] args) throws Exception {
    
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        String nome1, nome2;
        double salario1, salario2;
        int idade;
        char sexo;

        System.out.print("Digite o nome da primeira pessoa: ");
        nome1 = sc.nextLine();
        System.out.print("Digite o salario da primeira pessoa: ");
        salario1 = sc.nextDouble();

        sc.nextLine();
        System.out.print("Digite o nome da segunda pessoa: ");
        nome2 = sc.nextLine();
        System.out.print("Digite o salario da segunda pessoa: ");
        salario2 = sc.nextDouble();

        System.out.print("Digite uma idade: ");
        idade = sc.nextInt();

        System.out.print("Digite o sexo: ");
        sexo = sc.next().charAt(0);

        System.out.println("Nome1 = " + nome1);
        System.out.println("Salario1 = " + String.format("%.2f", salario1));
        System.out.println("Nome2 = " + nome2);
        System.out.println("Salario2 = " + String.format("%.2f", salario2));
        System.out.println("Idade = " + idade);
        System.out.println("Sexo = " + sexo);
    }
}
