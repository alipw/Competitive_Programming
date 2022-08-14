#!/bin/bash

workdir=`pwd`
destdir="$workdir/url.txt"
if [ -f "$destdir" ]
then 
    echo "$1" > "$destdir"
fi
url=$destdir
"$workdir/./namer.out" < "$url" > "$workdir/filename.txt"

filename=`cat "$workdir/filename.txt"`

if [ "$2" = "y" ];
then
	code "$workdir/$filename"
	cp "$workdir/me.cpp" "$workdir/$filename"
fi
python3 "$workdir/parser.py" <$destdir

echo "press enter to start testing your solution"
read lmao
user_wanted_to_try_again="y"
while [ "$user_wanted_to_try_again" = "y" ]
do
	"$workdir/./a.out" < in.txt > out.txt
	echo "The input : "
	cat in.txt
	echo ""
	echo "Your output : "
	cat out.txt
	echo ""
	echo "Judge's output : "
	cat judge.txt
	echo ""
	python3 "$workdir/comparator.py"
	echo "try again? [y/n] : "
	read user_wanted_to_try_again
done

