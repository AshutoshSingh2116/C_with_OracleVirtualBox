#8. Write a shell script that displays a list of all the files in the current directory to which the user has read, write and execute permissions

for file in *
do
   if [ -f $file ]
   then
   echo $file
  fi
done

<<comment
\
1_add.sh
2.biggest.sh
3.reverse.sh
4.file_exist.sh
5.colour.sh
6.filename.sh
7.deletelines.sh
8.listof_allfiles.sh
ex_1.sh
ex_2.sh
ex_3.sh
ex.sh
krishna
comment
