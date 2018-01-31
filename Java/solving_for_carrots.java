import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int contestants = scanner.nextInt();
        int problemsSolved = scanner.nextInt();
        checker(contestants, problemsSolved);

        for(int i = 0; i < contestants ; i++) {
            String container = scanner.next();
        }

        System.out.println(problemsSolved);
    }
    public static void checker(int contestants, int problemsSolved)
    {

        Scanner scanner = new Scanner(System.in);
        if(contestants < 1) {
            System.out.println("Sorry, you need to choose another number");
            if (contestants > 1) {
                do {
                    contestants = scanner.nextInt();
                } while (contestants > 1);
            }
        }

        if(problemsSolved < 1 || problemsSolved > 1000)
            {
                System.out.println("Sorry, you need to choose another number");
                do {
                    problemsSolved = scanner.nextInt();
                }while (problemsSolved > 1 && problemsSolved < 1000 );
            }
        }
    }