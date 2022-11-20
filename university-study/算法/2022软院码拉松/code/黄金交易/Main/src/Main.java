import java.util.Scanner;

/**
 * @author awater
 */
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] prices = new int[n];
        for (int i = 0; i < n; i++) {
            prices[i] = scanner.nextInt();
        }
        System.out.println(new Main().maxProfit(prices));
    }

    public int maxProfit(int[] prices) {
        int n = prices.length;
        int[] dp = new int[2];
        dp[1] = -prices[0];
        for (int i = 1; i < n; ++i) {
            dp[0] = Math.max(dp[0], dp[1] + prices[i]);
            dp[1] = Math.max(dp[1], dp[0] - prices[i]);
        }
        return dp[0];
    }

}