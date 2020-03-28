import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;
public class Contains_Duplicates_217 {
    public static void main(String [] args) {
        Scanner s = new Scanner(System.in);
        int n;
        n = s.nextInt();
        int [] nums = new int[n];
        for(int i=0;i<n;i++) {
            nums[i] = s.nextInt();
        }
        Set<Integer> set = new HashSet<>(nums.length);
        for(int x : nums) {
            if(set.contains(x))  {
                System.out.println("true");
                return;
            }
            set.add(x);
        }
        System.out.println("false");
        return;
    }
}