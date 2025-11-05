import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class UnfinishedProblem013 {
    public static void main(String[] args) {
        File numbersFile = new File("data/problem013.csv");
        long sum = 0;

        try {
            Scanner numberScanner = new Scanner(numbersFile);

            while (numberScanner.hasNextBigInteger()) {
                long number = numberScanner.nextLong();
                sum += number;
            }
        }
        catch (FileNotFoundException e) {
            System.out.println("couldn't read file");
            System.out.println(e.getMessage());
        }

        System.out.println(sum);
    }
}
