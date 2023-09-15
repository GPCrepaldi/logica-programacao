import java.util.Locale;
import java.util.Scanner;

public class matrizes {
    public static void main(String[] args) throws Exception {
    
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
        
        int x, y;

        System.out.print("Quantas linhas vai ter a matriz? ");
        x = sc.nextInt();
        System.out.print("Quantas colunas vai ter a matriz: ");
        y = sc.nextInt();

        int[][] mat = new int[x][y];

        for (int  i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {
                System.out.print("Digite o valor do elemento [" + i + "," + j + "]: ");
                mat[i][j] = sc.nextInt();
            }
        }

        System.out.println();
        System.out.println("Matriz Digitadas: ");
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {
                System.out.print(mat[i][j] + " ");
            }
            System.out.println();
        }

        sc.close();
    }
}
