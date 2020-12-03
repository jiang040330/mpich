
for data in data5.txt data6.txt 
do
	cp $data  data.txt
	echo $data >> kkout.txt
	for i in 1 2 3 4 5 6 7 8 9 10
	do
		mpirun -n 5 ./kt  >> kkout.txt
	done
done
