#10.Write a shell script to list all of the directory files in a directory.


#!/bin/sh
for i in *
do
if [ -d $i ]
then
echo "$i is a directory"
# else
# echo "$i is NOT a directory”
fi
done

<<comment
chandini is a directory
classroom is a directory
km@KernelMasters:~/KM_GITLA
comment
