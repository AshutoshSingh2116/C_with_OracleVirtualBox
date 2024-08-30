#11.Write a shell script to find factorial of a given integer.

echo "enter number:"
read a
 i=1
 b=1
    while [ $a -ne 0 ]
    do
     b=$(($a*$b))
     a=$(($a - 1))
     done
echo $b

<<comment
km@KernelMasters:~/KM_GITLAB/km54bnf05/Shell_scripting$ ./11.factorial.sh
enter number:
5
120
comment
