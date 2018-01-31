import java.util.Scanner;

/**
 * Created by Notandi on 2.3.2017.
 */
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int times = input.nextInt();

        for(int i = 1; i < times+1; i++) {
            System.out.println( i + " Abracadabra");
        }
        input.close();
    }

}