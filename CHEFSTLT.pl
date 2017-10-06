$t=<>;
while ( $t > 0){

	@str1=split("",<STDIN>);
	@str2=split("",<STDIN>);
	$i=0;
	$min=0;
	$max=0;
	for my $i(0 .. ($#str1/2)+1){
		print "@str1[$i] @str2[$i]\n";
		if(@str1[$i] != '?' and @str2[$i]!='?' and @str1[$i]!=@str2[$i]){
			$min=$min+1;
		}
		if(@str1[$i]=='?' or @str2[$i]=='?'){
			$max=$max+1;
		}
	}
	print "min=$min max=$max\n";
	#print "@str1\n";
	#print "@str2\n";
	$t=$t-1;
}