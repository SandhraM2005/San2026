#!/bin/bash
echo " enter the number "
read p
if [ $(($p%2)) -eq 0 ];then
	echo " it is even "
else 
    	echo " it is odd "
fi    	
