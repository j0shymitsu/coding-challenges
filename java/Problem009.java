public class Problem009
{
    public static void main(String[] args)
    {
        boolean stop = false;

        for (int a = 1; a < 333; a++) {
            for (int b = a + 1; b < 500; b++) {
                int c = 1000 - a - b;

                if (c > b) {
                    int r1 = (int) (Math.pow(a, 2) + Math.pow(b, 2));
                    int r2 = (int) Math.pow(c, 2);

                    if (r1 == r2 && a + b + c == 1000) {
                        System.out.println("Found where a + b + c = 1000.\na = " +
                                a + "\nb = " + b + "\nc = " + c);
                                stop = true;
                                break;
                    }
                }
                if (stop) {
                    break;
                }
            }
            if (stop) {
                break;
            }
        }
    }
}
