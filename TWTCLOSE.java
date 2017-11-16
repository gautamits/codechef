import java.util.*;
class TWTCLOSE{
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        String tn=in.nextLine();
        String[] tns=tn.split(" ");
        int t=Integer.parseInt(tns[0])+1;
        int[] tweets=new int[t];
        int n=Integer.parseInt(tns[1]);
        int total=0;
        String temp;
        int tweet;
        String command;
        while(n-- > 0){
            temp=in.nextLine();
            String value[]=temp.split(" ");
            command=value[0];
            if(command.equals("CLICK")){
                tweet=Integer.parseInt(value[1]);
                tweets[tweet]=1^tweets[tweet];
                if(tweets[tweet]==1) total+=1;
                else total-=1;


            }
            else{
                total=0;
                Arrays.fill(tweets,0);
            }
            System.out.println(total);

        }
    }
}