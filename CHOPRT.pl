$test=<stdin>;
while ($test>0){
	($a,$b)=split(" ",<stdin>);
	if($a<$b){
		print "<\n";
	}
	elsif ($a>$b){
		print ">\n";
	}
	else{
		print("=\n");
	}
	$test=$test-1;
}