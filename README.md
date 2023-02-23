### Simple Shell in C

```sh
     _____       _                     __    _____ _          _ _ 
    / ____|     | |                   / _|  / ____| |        | | |
   | |  __  __ _| |_ ___  ___    ___ | |_  | (___ | |__   ___| | |
   | | |_ |/ _` | __/ _ \/ __|  / _ \|  _|  \___ \| '_ \ / _ \ | |
   | |__| | (_| | ||  __/\__ \ | (_) | |    ____) | | | |  __/ | |
    \_____|\__,_|\__\___||___/  \___/|_|   |_____/|_| |_|\___|_|_|
```


#### List of allowed functions and system calls


```
access (man 2 access)
```
```
chdir (man 2 chdir)
```
```
close (man 2 close)
```
```
closedir (man 3 closedir)
```
```
execve (man 2 execve)
```
```
exit (man 3 exit)
```
```
_exit (man 2 _exit)
```
```
fflush (man 3 fflush)
```
```
fork (man 2 fork)
```
```
free (man 3 free)
```
```
getcwd (man 3 getcwd)
```
```
getline (man 3 getline)
```
```
getpid (man 2 getpid)
```
```
isatty (man 3 isatty)
```
```
kill (man 2 kill)
```
```
malloc (man 3 malloc)
```
```
open (man 2 open)
```
```
opendir (man 3 opendir)
```
```
perror (man 3 perror)
```
```
read (man 2 read)
```
```
readdir (man 3 readdir)
```
```
signal (man 2 signal)
```
```
stat (__xstat) (man 2 stat)
```
```
lstat (__lxstat) (man 2 lstat)
```
```
fstat (__fxstat) (man 2 fstat)
```
```
strtok (man 3 strtok)
```
```
wait (man 2 wait)
```
```
waitpid (man 2 waitpid)
```
```
wait3 (man 2 wait3)
```
```
wait4 (man 2 wait4)
```
```
write (man 2 write)
```

#### Compilation

```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```


### Standard Librairies

```
stdio.h: contains functions for input/output operations such as printf, scanf, getline, etc.
```
```
stdlib.h: contains functions for general-purpose memory allocation and program control such as malloc, free, exit, etc.
```
```
signal.h: contains functions and macros related to handling signals, such as signal, sigaction, SIGINT, etc.
```
```
fcntl.h: contains functions and constants related to file control, such as open, fcntl, O_RDONLY, O_WRONLY, O_CREAT, etc.
```
```
sys/types.h: contains definitions of various data types used in system calls, such as pid_t, size_t, etc.
```
```
sys/stat.h: contains structures and constants used for file system operations, such as struct stat, S_IRUSR, S_IWGRP, etc.
```
```
sys/wait.h: contains functions and macros related to process management and synchronization, such as wait, waitpid, WIFEXITED, WIFSIGNALED, etc.
```
```
unistd.h: contains various constants, types, and function declarations related to system calls, such as fork, execve, pipe, chdir, getpid, etc.
```
```
errno.h: contains the definitions of error numbers and variables that are set by various system calls and 
library functions to indicate errors, such as errno, EACCES, EINVAL, etc.
```
```
These headers are all standard C libraries that provide various functions and data types needed for the system calls and other functions used in the code.
```