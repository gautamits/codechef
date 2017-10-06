$test = <STDIN>;
@menu = (1,2,4,8,16,32,64,128,256,512,1024,2048);
while ( $test > 0 ){
	$n = <STDIN>;
	$i=0;
	while ( @menu[$i] <= $n && $i < 12 ){
		#print "$i @menu[$i]\n";
		#$a=<STDIN>;
		$i = $i+1;
	}
	$i=$i-1;
	#print "$i\n";
	$total=0;
	while( $n > 0){
		#print "dividing $n by @menu[$i]\n";
		$total = $total + int( $n / @menu[$i] );
		$n = $n % @menu[$i];
		$i = $i - 1;
		#print "$total\n";

	}
	print "$total\n";
	$test=$test-1;
}