# simple_shell

# <img
src="http://www.istockphoto.com/gb/vector/egg-shell-icon-simple-style-gm685062092-125918897" />

## Table of Contents
* [Description](#description)
* [Requirements](#requirements)
* [Installation](#installation)
* [Usage](#usage)
* [Authors](#authors)
* [License](#license)

## Description
simple_shell is a command line interpreter, or shell, in the tradition of the first Unix shell written by Ken Thompson in 1971.  This shell is intentionally minimalistic, yet includes the basic functionality of a traditional Unix-like command line user interface. 
Standard functions and system calls employed in simple_shell include:
   `access, execve, exit, fork, free, fstat, getline, malloc, perror, signal, stat, wait, write.`

## Requirements

simple_shell is designed to run in the `Ubuntu 14.04.5 LTS` linux environment and to be compiled using the GNU compiler collection v. `gcc 4.8.4` with flags`-Wall, -Werror, -Wextra, and -pedantic.`

## Installation

   - Compile: `gcc -Wall -Werror -Wextra -pedantic *.c -o hsh`
   - Run the shell in interactive mode: `./hsh`
   - Or run the shell in non-interactive mode:
   - example `echo "pwd" | ./hsh`

## Usage

The simple_shell is designed to execute commands in a similar manner to sh, however with more limited functionality.
Supported commands include:
	  - env
	  - exit
	  - setenv
	  - unsetenv


## Authors
Alexa Orrico | [GitHub](https://github.com/alexaorrico) | [Twitter](https://twitter.com/alexa_orrico)

John Cottrell | [GitHub](https://github.com/johncottrell) | [Twitter](https://twitter.com/johnpeterco)

##License
simple_shell is open source and therefore free to download and use without permission.
