@echo off

gcc -Ofast dfp.c
rename a.out dfp.exe
move dfp.exe C:\Windows\System32\
