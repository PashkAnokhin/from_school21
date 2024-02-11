GCC= gcc -Wall -Wextra -Werror

test: dynamic_test print_module_test

print_module.o: ./print_module/print_module.c ./print_module/print_module.h
	$(GCC) -c ./print_module/print_module.c -o ./print_module/print_module.o


print_module_test: print_module.o dynamic.o
	$(GCC) ./print_module/print_module_test.c ./print_module/print_module.o ./dynamic/dynamic.o -o ./print_module/test.o


dynamic.o:
	$(GCC) -c ./dynamic/dynamic.c -o ./dynamic/dynamic.o

dynamic_test: dynamic.o
	$(GCC) ./dynamic/dynamic_test.c ./dynamic/dynamic.o -o ./dynamic/test.o


clean: 
	rm -rf ./print_module/*.o
	rm -rf ./dynamic/*.o
	
