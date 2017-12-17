CC=/usr/bin/g++
CFLAGS= -g -std=c++98 -Wall

OBJS = policy

policy: 
	$(CC) $(CFLAGS) -o policy main.cpp

clean:
	rm *.o a.out 

