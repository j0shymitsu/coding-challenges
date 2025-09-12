public class Problem006{
    public static void main(String[] args){
        int sumSquareDifference = squareSum(100) - sumOfSquares(100);
        System.out.println(sumSquareDifference);
    }

    public static int sumOfSquares(int range){
        int sum = 0;
        for (int i = 1; i <= range; i++){
            sum += (int) Math.pow(i, 2);
        }
        return sum;
    }

    public static int squareSum(int range){
        int total = 0;
        for (int i = 1; i <= range; i++){
            total += i;
        }
        return (int) Math.pow(total, 2);
    }
}
