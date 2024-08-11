import java.util.*;
class Node{
    int val;
    Node right;
    Node left;
    Node(int val){
        this.val=val;
        right = null;
        left = null;
    }
}
public class depth_bst {
   
    public static Node ins(Node root,int k){
        if(root==null){
             return new Node(k);
        }
        if(root.val<k) {
            root.left = ins(root.left,k);
        }
        else{
            root.right = ins(root.right,k);
        }
            return root;
    }
    public static int height(Node root){
       // int ldepth , rdepth;
        if (root ==null){
            return -1;
        }
        else{
            int ldepth = height(root.left);
            int rdepth = height(root.right);
            return Math.max(ldepth,rdepth) + 1;
        }
           
    }
    public static void main(String[] args) {
        Scanner scanf = new Scanner(System.in);
        int T = scanf.nextInt();
        for(int t=0;t<T;t++){
            int N = scanf.nextInt();
            int[] arr = new int[N];
            for(int i=0;i<N;i++){
                arr[i]=scanf.nextInt();
            }
            Node root = new Node(arr[0]);
            for(int i=1;i<N;i++){
                root = ins(root,arr[i]);
            }
            int ans = height(root);
            System.out.println(ans);
        }
        
    }
}