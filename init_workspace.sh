#!/usr/bin/bash

dirname=${PWD##*/}

executableName="$(echo $dirname | tr -d [:digit:] | tr -d [=_=] )"

compileLine="#!/usr/bin/bash\n"
compileLine=$compileLine"g++ -std=c++11"
for lib in $@
do
    compileLine="$compileLine -I/home/Kevin/peuler/lib/$lib/src -L/home/Kev/peuler/lib/$lib/lib -l:$lib.o"
done
compileLine="$compileLine main.cpp -o $executableName"

echo -e $compileLine > compile.sh
chmod u+x compile.sh
