program = git-res
CC=g++
CFLAGS=-I

default:
	echo "from makefile github"
	${CC} source.cpp -o github-prog