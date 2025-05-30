public class Problem010
{
    public static void main(String[] args)
    {
        long sumOfPrimes = 0;

        for (int i = 1; i <= 2000000; i++)
        {
            if (Problem003.isPrime(i)) {
                sumOfPrimes += i;
            }
        }

        System.out.println(sumOfPrimes);
    }
}
