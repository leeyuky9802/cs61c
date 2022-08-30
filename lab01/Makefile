all: test_ll_cycle
test_ll_cycle: test_ll_cycle.o ll_cycle.o
	gcc -g -o test_ll_cycle test_ll_cycle.o ll_cycle.o
test_ll_cycle.o: test_ll_cycle.c ll_cycle.h
	gcc -g -c test_ll_cycle.c
ll_cycle.o: ll_cycle.c ll_cycle.h
	gcc -g -c ll_cycle.c
clean:
	rm test_ll_cycle.o ll_cycle.o