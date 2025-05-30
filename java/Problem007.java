public class Problem007 {
    public static void main(String[] args) {
        int nthPrimePrime = returnNthPrime(10001);
        System.out.println(nthPrimePrime);
    }

    public static int returnNthPrime(int n) {
        int primeCount = 0;
        int currentNum = 2;
        int returnedPrime = 0;

        while (primeCount < n) {
            if (Problem003.isPrime(currentNum)) {
                returnedPrime = currentNum;
                primeCount++;
            }
            currentNum++;
        }

        return returnedPrime;
    }
}
