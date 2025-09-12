public class Problem002
{
    public static void main(String[] args)
    {
        int result = evenFibonacciNumbers(4000000);
        System.out.println(result);
    }

    public static int evenFibonacciNumbers(int maxValue)
    {
        int numOne;
        int numTwo = 1;
        int nextNum = numTwo;

        int evenTotal = 0;

        while (nextNum <= maxValue)
        {
            if (nextNum % 2 == 0)
            {
                evenTotal += nextNum;
            }

            numOne = numTwo;
            numTwo = nextNum;
            nextNum = numOne + numTwo;
        }

        return evenTotal;
    }
}
