/**
 * Author: Vincent X
 * Date:   2022-04-18
 */

public class ArgsSum {
    public static void main(String[] args) {
        int N = args.length;
        System.out.println(N);
        int sum = 0;
        for (int i = 0; i < N; i++) {
            sum += Integer.parseInt(args[i]);
        }
        System.out.println(sum);
    }
}