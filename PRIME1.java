import java.util.*;
public class PRIME1{
    public static void main(String[] args){
        long n=1000000001;
        ArrayList<Long> arr = new ArrayList<Long>();
        arr.add(2L);
        for(long i=3;i<=n;i++){
            int flag=0;
            for(int j=0;j<arr.size();j++){
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
        for(int i=0;i<arr.size();i++) System.out.print(arr.get(i)+" ");
    }
}