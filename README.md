# Quine
Just a simple quine implementation I did a few years ago. 

For the uninitiated, this is basically a program that prints it's own source code when executed.

If you'd like to test it out, just compile the code and compare it's output to the existing quine.c file:

```
cc quine.c -o quine
./quine > quine2.c
git diff quine.c quine2.c # there should be no difference between the two files
```
