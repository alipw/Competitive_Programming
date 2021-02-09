#!/bin/bash

destdir=/home/alipw/Documents/CP/C++/url.txt
if [ -f "$destdir" ]
then 
    echo "$1" > "$destdir"
fi
url=$destdir
/home/alipw/Documents/CP/C++/./namer.out < "$url" > /home/alipw/Documents/CP/C++/filename.txt

filename=`cat /home/alipw/Documents/CP/C++/filename.txt`

if [ "$2" = "y" ];
then
	subl /home/alipw/Documents/CP/C++/$filename
	cp /home/alipw/Documents/CP/C++/me.cpp /home/alipw/Documents/CP/C++/$filename
fi
python3 /home/alipw/Documents/CP/C++/parser.py <$destdir

echo "press enter to start testing your solution"
read lmao
user_wanted_to_try_again="y"
while [ "$user_wanted_to_try_again" = "y" ]
do
	/home/alipw/Documents/CP/C++/./a.out < in.txt > out.txt
	echo "The input : "
	cat in.txt
	echo ""
	echo "Your output : "
	cat out.txt
	echo ""
	echo "Judge's output : "
	cat judge.txt
	echo ""
	python3 /home/alipw/Documents/CP/C++/comparator.py
	echo "try again? [y/n] : "
	read user_wanted_to_try_again
done

