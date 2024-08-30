#7. Write a shell script that deletes all lines containing a specified word in one or more files supplied as arguments to it

<<comment
echo "enter file"
read filename
comment

echo "enter word"
read word

sed -i "/$word/d" $1

<<comment
km@KernelMasters:~/KM_GITLAB/km54bnf05/Shell_scripting$ cat 1_add.sh
#!/bin/sh
