import java.util.Scanner;

/**
 * Created by Notandi on 2.3.2017.
 */
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int number = input.nextInt();

        if(number % 2 == 0) {
            System.out.println("Bob");
        }
        else
            System.out.println("Alice");
        input.close();
    }

}
