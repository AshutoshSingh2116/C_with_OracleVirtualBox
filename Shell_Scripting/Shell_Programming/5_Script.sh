#5. How to write script, that will print, Message ""Hello World"", in Bold and Blink effect, and in different Colors like red, brown etc using echo command."

echo "enter text"
read a

echo -e "\e[1;31;5m$a\e[0m"
echo -e "\e[1;32;5m$a\e[0m"
echo -e "\e[1;33;5m$a\e[0m"
echo -e "\e[1;34;5m$a\e[0m"
echo -e "\e[1;35;5m$a\e[0m"
echo -e "\e[1;36;5m$a\e[0m"
echo -e "\e[1;37;5m$a\e[0m"

<<comment
enter text
hello world
hello world
hello world
hello world
hello world
hello world
hello world
hello world
comment

