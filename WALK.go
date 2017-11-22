package main
import "fmt"
func main(){
var test int
fmt.Scanln(&test)
for i:=0;i<test;i++{
		//fmt.Println(i)
		var result int
		var n int
		var j int
		fmt.Scanln(&n)
		arr:=make([]int,n)
		for j=0;j<n;j++{
			fmt.Scan(&arr[j])
		}

		result=n
		for j=0;j<n;j++{
			if result-j < arr[j]{
				result=arr[j]+j
			}
		}
		fmt.Println(result)
	}
}
