# Write a shell script that accepts a file name, starting and ending line numbers as arguments and displays all the lines between the given line numbers.


filename=$1
startline=$2
endline=$3


if [ -e $1 ]
then
sed -n "${startline},${endline}p" "${filename}"
else
echo "file does not exist"
fi

<<comment
km@KernelMasters:~/KM_GITLAB/km54bnf05/Shell_scripting$ ./6.filename.sh 6.filename.sh 4 8
filename=$1
startline=$2
endline=$3
comment
