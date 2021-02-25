# HashCode2021
Team repository for Pretests Passed

Add any useful links here:

# Threading for multitasking:
    If 2 or more independent tasks - 

    #include <thread.h>
    using namespace std;

    main() {
      thread t1(task1, param1, param2, .. );
      thread t2(task2, param1, param2, .. );
      thread t3(task3, param1, param2, .. );
      .
      .
      t1.join(), t2.join(), t3.join() ...
    }

    Compilation - g++ file.cpp -pthread
   
# Bash Script to run all inputs and generate corresponding outputs:
Code is in sol.cpp
and input files are : a.in b.in c.in ...
	g++ sol.cpp -o sol
	for file in a b c d e; do
		echo Working on input : $file
		./sol < $file.in > $file.out
	done
