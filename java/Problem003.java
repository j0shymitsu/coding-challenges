import java.util.ArrayList;

public class Problem003
{
    public static void main(String[] args)
    {
        ArrayList<Long> factors = factorsOf(6008514751433235L);
        ArrayList<Long> primes = returnPrimes(factors);
        for (Long number : primes)
        {
            System.out.println(number);
        }
    }

    public static ArrayList<Long> factorsOf(long n)
    {
        ArrayList<Long> factors = new ArrayList<>();
        factors.add(1L);
        factors.add(n);

        long s = (int) Math.floor(Math.sqrt(n));

        for (int i = 2; i < s; i++)
        {
            if (n % i == 0)
            {
                factors.add((long) i);

                long x = n / i;
                factors.add(x);
            }
        }

        return factors;
    }

    // takes an arraylist of integers and returns only the *ones not divisible by 2*
    public static ArrayList<Long> returnPrimes(ArrayList<Long> numsList)
    {
        ArrayList<Long> primeNumbers = new ArrayList<>();

        for (Long i : numsList)
        {
            if (isPrime(i))
            {
                primeNumbers.add((long)i);
            }
        }
        return primeNumbers;
    }

    // checks if num is prime
    public static boolean isPrime(long x)
    {
        long s = (long) Math.sqrt(x);

        if (x <= 1)
        {
            return false;
        }

        for (long i = 2; i <= s; i++)
        {
            if (x % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}


