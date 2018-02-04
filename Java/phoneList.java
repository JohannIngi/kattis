import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Problem {

    private Scanner scanner;
    private int numberOfPhoneNumbers;
    private String number, ret;
    private ArrayList<String> numbersList;

    public Problem(){
        scanner = new Scanner(System.in);
        numbersList = new ArrayList<>();
    }

    public void initialize() {
        int numberOfTests = scanner.nextInt();
        for(int i = 0; i < numberOfTests; i++){
            addPhoneNumbers();
            ret = checkIfLegal() ? "YES" : "NO";
            System.out.println(ret);
        }
    }


    private void addPhoneNumbers() {
        numberOfPhoneNumbers = scanner.nextInt();
        numbersList.clear();
        for(int i = 0; i < numberOfPhoneNumbers; i++){
            number = scanner.next();
            numbersList.add(number);
        }
        Collections.sort(numbersList);
    }

    private boolean checkIfLegal() {
        for(int i = 0; i < numberOfPhoneNumbers-1; i++){
            String first = numbersList.get(i);
            String second = numbersList.get(i+1);
            if (second.length() >= first.length()){ //checking the length of the strings
                number = second.substring(0, first.length()); //storing the string that starts at index 0 and ends at the length of the compare string
                if(number.equals(first)){ return false;} //if they are the same then we have prefix else we are fine
            }
        }
        return true;
    }

    public static void main(String[] args) {
        new Problem().initialize();
    }

}
