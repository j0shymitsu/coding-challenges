public class Problem004
{
    public static void main(String[] args)
    {
        int largestPalindrome = 0;

        for (int i = 100; i <= 999; i++)
        {
            for (int j = 100; j <= 999; j++)
            {
                int currentNum = i * j;

                if (isPalindrome(currentNum) && currentNum > largestPalindrome)
                {
                    largestPalindrome = currentNum;
                }
            }
        }

        System.out.println(largestPalindrome);
    }

    public static boolean isPalindrome(int n)
    {
        String numAsString = String.valueOf(n);
        String numReversed = "";

        for (int i = 0; i < numAsString.length(); i++)
        {
            numReversed = numAsString.charAt(i) + numReversed;
        }

        return numAsString.equals(numReversed);
    }
}
