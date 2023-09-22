import java.util.Locale;
import java.util.Scanner;

public class fatorial {
    public static void main(String[] args) throws Exception {

        Locale.setDefault(Locale.US);
        try (Scanner sc = new Scanner(System.in)) {
            int n, fatorial;
            
            System.out.print("Digite o valor de N: ");
            n = sc.nextInt();
            
                if (n > 15) {
                    System.out.println("Valor nao aceito!!!");
                } else {
                    for ( fatorial = 1; n > 0; n--) {
                        fatorial = fatorial * n;
                    }
                    System.out.println("Fatorial = " + fatorial);
                }
        }
    }
}