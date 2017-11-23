package main
import "fmt"
func main(){
	var t int
	fmt.Scanln(&t)
	for i:=0;i<t;i++{
		var columns,spend int
		fmt.Scan(&columns)
		fmt.Scan(&spend)
		//fmt.Println(columns,spend)
		arr:=make([]int,columns)
		max:=0
		for j:=0;j<columns;j++{
			fmt.Scan(&arr[j])
			if arr[j] > max{
				max=arr[j]
			}
		}
		result:=0
		for j:=0;j<columns;j++{
			//fmt.Print(arr[j]," ")
			result+=max-arr[j]
		}
		if result == spend {
			fmt.Println("Yes")
		}else{
			fmt.Println("No")
		}
	}
}