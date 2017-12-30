package main
import(
	"fmt"
	"math"
)
func main(){
	//fmt.Println("Hello World!")
	var test int
	fmt.Scan(&test)
	for i:=0; i<test;i++{
		//fmt.Println(i)
		var a int
		var b int
		fmt.Scan(&a)
		fmt.Scan(&b)
		b=b+1
		arr:=make([]int,b)
		for i:=0;i<b;i++{
			arr[i]=1
		}
		arr[1]=0
		s:=math.Sqrt(float64(b))
		for i:=2;i<=int(s);i++{
			if arr[i]==0{
				continue
			}
			k:=2
			for k*i<b{
				arr[i*k]=0
				k=k+1
			}
		}
		//fmt.Println("")
		for i:=a;i<b;i++{
			//fmt.Print(arr[i])
			//fmt.Print(" ")
			if arr[i]==1{
				fmt.Println(i)
				//fmt.Print(" ")
			}
		}
		fmt.Println("")
	}
}