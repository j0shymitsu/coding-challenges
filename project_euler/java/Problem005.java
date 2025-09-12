public class Problem005
{
    public static void main(String[] args)
    {
        int smallestMultiple = smallestMultiple(20);
        System.out.println(smallestMultiple);

    }

    public static int smallestMultiple(int range)
    {
        double remainder = 0.1;
        int currentNumber = 2;

        while (remainder != 0)
        {
            remainder = 0;
            currentNumber += 1;

            for (int i = 1; i < range; i++)
            {
                remainder += (currentNumber % i);
            }

        }

        return currentNumber;
    }
}
