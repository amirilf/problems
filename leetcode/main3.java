import java.util.ArrayList;

public class main3 {

    public static int lengthOfLongestSubstring(String s) {

        ArrayList<Character> arr = new ArrayList<Character>();

        int max = 0;
        int sum = 0;

        for (int i = 0; i < s.length(); i++) {
            char chr = s.charAt(i);
            if (arr.indexOf(chr) == -1) {
                arr.add(chr);
                sum++;
            } else {
                for (int j = i - 1;; j--) {
                    if (s.charAt(j) == s.charAt(i)) {
                        i = j;
                        break;
                    }
                }

                if (sum > max)
                    max = sum;

                sum = 0;
                arr.clear();

            }
        }

        return (sum > max) ? sum : max;
    }

    public static void main(String[] args) {
        String s = "abcd";
        System.out.println(lengthOfLongestSubstring(s));
    }
}