
for data in data.txt
do
	#cp $data  data.txt
	echo $data > in.txt
	for i in 1 2 3 4 5 
	do
		./cuan < in.txt >> cuanout2.txt
	done
done
