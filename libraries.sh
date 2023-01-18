#!/bin/sh

name="lib_name"			# The name of your library
src_dir="./src"			#	The folder where your .c files are

name_h=$(echo $name |  tr '[:lower:]' '[:upper:]' | sed 's/$/_H/g')
h_file="$name.h"
ft_names=$(find $src_dir -type f -name "*.c" -exec basename {} .c \;)

echo "Getting function names..."
rm -f $h_file
vim -c ":Stdheader" -c ":wq" $h_file 

echo "#ifndef $name_h" >> $h_file
echo "# define $name_h" >> $h_file
echo "// Insert includes here\n" >> $h_file

for ft_name in $ft_names
do
	echo "$ft_name found!"
	cat < $dir_name/$ft_name.c | grep "$ft_name(" | sed 's/$/;/g'>> $h_file
done
echo "\n#endif" >> $h_file