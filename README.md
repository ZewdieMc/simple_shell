
![Holberton school logo](https://secure.meetupstatic.com/photos/event/b/c/5/6/highres_475548214.jpeg)
# simple_shell project repository

This repository contains the files for Holberton's **simple_shell**. It can be compiled using GCC and will execute a simple shell that can be used for some basic tasks and programs most commonly found in the /bin/ folder.

# Pre-requisites

### Authorized functions and macros:
- access (man 2 access)
- chdir (man 2 chdir)
- close (man 2 close)
- closedir (man 3 closedir)
- execve (man 2 execve)
- exit (man 3 exit)
- _exit (man 2 _exit)
- fflush (man 3 fflush)
- fork (man 2 fork)
- free (man 3 free)
- getcwd (man 3 getcwd)
- getline (man 3 getline)
- isatty (man 3 isatty)
- kill (man 2 kill)
- malloc (man 3 malloc)
- open (man 2 open)
- opendir (man 3 opendir)
- perror (man 3 perror)
- read (man 2 read)
- readdir (man 3 readdir)
- signal (man 2 signal)
- stat (__xstat) (man 2 stat)
- lstat (__lxstat) (man 2 lstat)
- fstat (__fxstat) (man 2 fstat)
- strtok (man 3 strtok)
- wait (man 2 wait)
- waitpid (man 2 waitpid)
- wait3 (man 2 wait3)
- wait4 (man 2 wait4)
- write (man 2 write)

### GCC command to compile:
`
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
`

This wil compile all the '.c' files and change the output's name to 'hsh'.

### Template to test output:
=============
$ ./hsh

($) 

hsh main.c shell.c

$ exit
$


After you clone this repository and compile the program with the command above, you will generate a file called **hsh** that can be executed by entering  ```./hsh``` in your shell.

The output after the program is executed should look something like this:
```
$|
```
Where you will get a prompt in the shape of a dollar sign so you can start typing commands into your shell.  Agood example of how it should execute is the command shown above were the user enters 'ls' and then gets a list of the directory contents.
## Function Prototypes:

Brief description of functions contained in project:

**_strcmpdir** :  compares strings to find dir.
**find_command** :  finds command to execute in path routes.
**charput** :  writes the character like putchar.
**place** :  similar to puts in C.
**_strlen** :  string length.
**str_concat** :  concatenate strings.
**lookforslash** :  identify if first char is a '/'.
**compareExit** :  checks if user typed exit.
**compareEnv** :  checks if user typed env.
**execute_proc** :  receives command and args from getline to be executed.
**identify_string** :  returns pointer with folder address.
**prompt** :  infinite loop with fork to keep prompt going.
**controlC**: avoid program closing when pressing ctrl + c.
**main**: initialize program.

README.md: this.

## General Flow Chart:

<a href="https://ibb.co/1MMmc0J"><img src="https://i.ibb.co/5kkRZ1x/Untitled-Diagram.png" alt="Untitled-Diagram" border="0"></a>

### Contact Info:

Git: [Camilo Baquero](https://github.com/camilooob), [Sergio Pietri](https://github.com/Virteip)

Twitter: [@camilooob](https://twitter.com/camilooob),  [@sergiopietri](https://twitter.com/sergiopietri)
