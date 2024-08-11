import java.io.*;
import java.util.*;

public class Main {
    public static void solution(int N,char[] arr,int open,int close,int index){
        //base condition
        if(index==N){  
            for(int i=0;i<N;i++){
                System.out.print(arr[i]);
            }
…            System.out.println("Test Case #"+(i+1)+":");
            solution(2*N,arr,open,close,index);
        }
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Main. */
    }
}