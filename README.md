0x16. C - Simple Shell Tasks
GROUP PROJECT

0. Betty would be proud: Write a beautiful code that passes the Betty checks

1. Simple shell 0.1: Write a UNIX command line interpreter.

Usage: simple_shell

2. Simple shell 0.2: Simple shell 0.1 + Handle command lines with arguments

3. Simple shell 0.3: Simple shell 0.2 + Handle the PATH fork must not be called if the command doesn’t exist

4. Simple shell 0.4: Simple shell 0.3 + Implement the exit built-in, that exits the shell Usage: exit You don’t have to handle any argument to the built-in exit

5. Simple shell 1.0: Simple shell 0.4 + Implement the env built-in, that prints the current environment

6. Simple shell 0.1.1: Simple shell 0.1 +

Write your own getline function
Use a buffer to read many chars at once and call the least possible the read system call
You will need to use static variables
You are not allowed to use getline
You don’t have to:

be able to move the cursor

9. setenv, unsetenv: Simple shell 1.0 +

Implement the setenv and unsetenv builtin commands

setenv
Initialize a new environment variable, or modify an existing one
Command syntax: setenv VARIABLE VALUE
Should print something on stderr on failure
unsetenv
Remove an environment variable
Command syntax: unsetenv VARIABLE
Should print something on stderr on failure

10. cd: Simple shell 1.0 +

Implement the builtin command cd:

Changes the current directory of the process.
Command syntax: cd [DIRECTORY]
If no argument is given to cd the command must be interpreted like cd $HOME
You have to handle the command cd -
You have to update the environment variable PWD when you change directory
man chdir, man getcwd

13. alias: Simple shell 1.0 +

Implement the alias builtin command
Usage: alias [name[='value'] ...]
alias: Prints a list of all aliases, one per line, in the form name='value'
alias name [name2 ...]: Prints the aliases name, name2, etc 1 per line, in the form name='value'
alias name='value' [...]: Defines an alias for each name whose value is given. If name is already an alias, replaces its value with value

14. Variables: Simple shell 1.0 +

Handle variables replacement
Handle the $? variable
Handle the $$ variable

15. Comments: Simple shell 1.0 +

Handle comments (#)
