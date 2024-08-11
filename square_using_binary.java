import java.util.*;
class square_using_binary{
	public static int sqrt_bin(int N){
		int l = 1;
		int h = N;
		while(l<=h){
			int m = (l+h)/2;
			if(m*m==N){
				return m;
			}
			else if(m*m>N){
				h = m-1;
			}
			else{
				l = m+1;
			}
		}
		return 0;
	}
	public static void main(String args[]){
		Scanner scanf = new Scanner(System.in);
		int N=scanf.nextInt();
		int ans= sqrt_bin(N);
		if(ans==0) System.out.println("Number is not a perfect square!");
		else{
			System.out.println(ans);
		}
	}
}