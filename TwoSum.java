/**
 * Author: Vincent X
 * Date:   2022-04-18
 */

public class TwoSum {
    public static int[] twoSum(int[] a, int target) {
        for (int i = 0; i < a.length - 1; i++) {
            for (int j = i + 1; j < a.length; j++) {
                if (a[i] + a[j] == target) {
                    return new int[] {i, j};
                }
            }
        }
        throw new IllegalArgumentException("no match found");
    }

    public static String toString(int[] a) {
        if (a.length == 0) {
            return "[]";
        } else {
            String result = "[" + a[0];
            for (int i = 1; i < a.length; i++) {
                result += ", " + a[i];
            }
            result += "]";
            return result;
        }
    }
    public static void main(String[] args) {
        int[] a = new int[] {1, 2, -5, -2, 99};
        System.out.println(toString(twoSum(a, 0)));
    }
}