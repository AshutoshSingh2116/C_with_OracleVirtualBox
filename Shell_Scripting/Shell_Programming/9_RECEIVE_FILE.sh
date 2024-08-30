#9. Write a shell script that receives any number of file names as arguments checks if every argument supplied is a file or a directory and reports accordingly. Whenever the argument is a file, the number of lines on it is also reported.

if [ $# -gt 1 ]
then
for i in $@
do
if [ -f $i ]
then
    echo "$i file is exist"
echo "no.of lines in a file:`wc -l < $i`"
elif [ -d $i ]
then
echo "$i is directory"
 else
echo "no such files"
fi
done
fi

<<comment
km@KernelMasters:~/KM_GITLAB/km54bnf05/Shell_scripting$ ./9.file_dir.sh 2.biggest.sh Ashutosh
2.biggest.sh file is exist
no.of lines in a file:27
Ashutosh is directory
comment
