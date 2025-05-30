public class Problem001
{
    public static void main(String[] args)
    {
        System.out.println(multiplesOfThreeOrFive(1000));
    }

    public static int multiplesOfThreeOrFive(int range)
    {
        int total = 0;

        for (int i = 0; i < range; i++)
        {
            if (i % 3 == 0 || i % 5 == 0)
            {
                total += i;
            }
        }

        return total;
    }
}
