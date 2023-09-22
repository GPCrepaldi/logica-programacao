import java.util.Locale;
import java.util.Scanner;

public class aumento {
    public static void main(String[] args) throws Exception {

        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        double salario, novoSalario, aumento;

        System.out.print("Digite o salario da pessoa: ");
        salario = sc.nextDouble();

        if (salario <= 1000){
            novoSalario = salario * 1.2;
            aumento = salario * 0.2;

            System.out.println("Novo Salario: R$" + String.format("%.2f", novoSalario));
            System.out.println("Aumento: R$" + String.format("%.2f", aumento));
            System.out.println("Porcentagem: 20%");
        } else if (salario < 3000) {
            novoSalario = salario * 1.15;
            aumento = salario * 0.15;

            System.out.println("Novo Salario: R$" + String.format("%.2f", novoSalario));
            System.out.println("Aumento: R$" + String.format("%.2f", aumento));
            System.out.println("Porcentagem: 15%");
        } else if (salario <= 8000) {
            novoSalario = salario * 1.1;
            aumento = salario * 0.1;

            System.out.println("Novo Salario: R$" + String.format("%.2f", novoSalario));
            System.out.println("Aumento: R$" + String.format("%.2f", aumento));
            System.out.println("Porcentagem: 10%");
        } else if (salario > 8000) {
            novoSalario = salario * 1.05;
            aumento = salario * 0.05;

            System.out.println("Novo Salario: R$" + String.format("%.2f", novoSalario));
            System.out.println("Aumento: R$" + String.format("%.2f", aumento));
            System.out.println("Porcentagem: 5%");
        }
        sc.close();
    }
}