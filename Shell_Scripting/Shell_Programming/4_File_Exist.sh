#4. Write script to determine whether given file exist or not, file name is supplied as command line argument, Also check for sufficient number of command line arguments.


if [ -e  $1 ]
then
echo " file exist "
else
echo "file not exist "
fi



#output:
#km@KernelMasters:~/KM_GITLAB/km54bnf05/Shell_scripting$ ./4.file_exist.sh  3.reverse.sh
# file exist
#km@KernelMasters:~/KM_GITLAB/km54bnf05/Shell_scripting$ ./4.file_exist.sh  3.reverse
#file not exist
