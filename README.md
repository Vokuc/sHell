# <a href="url"><img src="https://cdn3.iconfinder.com/data/icons/egg/500/Egg_food_cracked_whipped-512.png" align="middle" width="100" height="100"></a> simple_shell


## Table of Contents
* [Description](#description)
* [Requirements](#requirements)
* [Installation](#installation)
* [Usage](#usage)
* [Authors](#authors)
* [License](#license)

## Description
simple_shell is a command line interpreter, or shell, in the tradition of the first Unix shell written by Ken Thompson in 1971. This shell is intentionally minimalistic, yet includes the basic functionality of a traditional Unix-like command line user interface. 
Standard functions and system calls employed in simple_shell include:
   `access, execve, exit, fork, free, fstat, getline, malloc, perror, signal, stat, wait, write.`

## Requirements

simple_shell is designed to run in the `Ubuntu 14.04 LTS` linux environment and to be compiled using the GNU compiler collection v. `gcc 4.8.4` with flags`-Wall, -Werror, -Wextra, and -pedantic.`

## Installation

   - Compile: `gcc -Wall -Werror -Wextra -pedantic *.c -o hsh`
   - Run the shell in interactive mode: `./hsh`
   - Or run the shell in non-interactive mode: example `echo "pwd" | ./hsh`

## Usage

The simple_shell is designed to execute commands in a similar manner to sh, however with more limited functionality. The development of this shell is ongoing. The below features will be checked as they become available (see man page for complete information on usage):

### Features
- [x] uses the PATH
- [x] implements builtins
- [x] handles command line arguments
- [x] house strtok function
- [x] uses exit status
- [x] shell continues upon Crtl+C (**^C**)
- [x] handles comments (#)
- [ ] house getline type function
- [ ] handles **;**
- [ ] handles **&&**, and **||**
- [ ] aliases
- [ ] variable replacement


### Builtins

- [x] exit
- [x] env
- [x] setenv
- [x] unsetenv
- [ ] cd
- [ ] help
- [ ] history

### Examples

#### Absolute Path
`/bin/ls `

#### Executable in the PATH
`ls`

#### Commands with Arguments
`ls -al`

#### Builtins
`env`


## Authors
Alexa Orrico | [GitHub](https://github.com/alexaorrico) | [Twitter](https://twitter.com/alexa_orrico)

John Cottrell | [GitHub](https://github.com/johncottrell) | [Twitter](https://twitter.com/johnpeterco)

## License
simple_shell is open source and therefore free to download and use without permission.