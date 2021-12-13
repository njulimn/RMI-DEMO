
CXXFLAGS  = -std=c++17 -Wall -lstdc++fs
CC = g++-8 # g++ version must be > 8.0 to run the generated code

run: test
	@echo "---------- Begin to run the test file ----------"
	./test

test: test.cpp my_first_rmi.cpp my_first_rmi.h my_first_rmi_data.h
	@echo "---------- Compilation Files ----------"
	$(CC) test.cpp my_first_rmi.cpp  $(CXXFLAGS) -o test

clean:
	@echo "---------- Generated Files Removed ----------"
	-rm -f test
	