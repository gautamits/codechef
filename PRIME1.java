import java.util.*;
import java.lang.Math;
public class PRIME1{
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        while(t > 0){
        //System.out.println(t);
        long a=in.nextInt();
        long b=in.nextLong();
        long n=b+1;
        ArrayList<Long> arr = new ArrayList<Long>();
        arr.add(2L);
        for(long i=3;i<=n;i++){
            int flag=0;
            double s=Math.sqrt(i);
            for(int j=0;j<arr.size() && arr.get(j)<=s ;j++){
                flag=0;
                if(i%arr.get(j)==0){
                    flag=1;
                    break;
                }
            }
                if(flag==0) {
                    arr.add(i);
                    }

            
            //System.out.println(arr);
        }
      //System.out.println(arr);
        //for(int i=0;i<arr.size();i++) System.out.print(arr.get(i)+" ");
        
        
        int i=0;
        for(i=0;i<arr.size();i++){
            if(arr.get(i)<=b && arr.get(i)>=a) System.out.println(arr.get(i));
        }
        System.out.println("");
    t-=1;
    }
    }
}