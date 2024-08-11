import java.util.*;

class hash_imp {
    public static void main(String args[]) {
        Scanner scanf = new Scanner(System.in);
        int T = scanf.nextInt();
        for (int t = 0; t < T; t++) {
            int K = scanf.nextInt();
            int N = scanf.nextInt();
            HashMap<Integer, Integer> hm = new HashMap<Integer, Integer>();
            for (int i = 0; i < N; i++) {
                int num = scanf.nextInt();
                if (hm.containsKey(num)) {
                    Integer temp = hm.get(num);
                    temp++;
                    hm.replace(num, temp);
                } else {
                    hm.put(num, 1);
                }
            }
            boolean flag = false;
            Iterator<Map.Entry<Integer, Integer>> iterator = hm.entrySet().iterator();
            while (iterator.hasNext()) {
                Map.Entry<Integer, Integer> entry = iterator.next();
                int temp_key = entry.getKey();
                int temp_val = entry.getValue();
                temp_val--;
                if (temp_val == 0) {
                    iterator.remove(); // Remove the entry using iterator
                } else {
                    hm.replace(temp_key, temp_val);
                }
                int b = K - temp_key;
                if (hm.containsKey(b)) {
                    flag = true;
                    break;
                }
            }
            if (flag)
                System.out.println("True");
            else
                System.out.println("False");
        }
        scanf.close();
    }
}
