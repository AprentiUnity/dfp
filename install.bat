@echo off

gcc -Ofast dfp.c
rename a.out dfp.exe
move dfp.exe C:\Windows\System32\
echo L'installation de la version 1.1 de DFP est terminée !
