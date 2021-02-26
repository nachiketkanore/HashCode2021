# HashCode2021
Team repository for Pretests Passed

Add any useful links here:

# Our scores:
	Score
	A – An example = 2,002 points
	B – By the ocean = 4,566,605 points
	C – Checkmate = 1,298,498 points
	D – Daily commute = 1,575,920 points
	E – Etoile = 706,221 points
	F – Forever jammed = 808,520 points

	Total score = 8,957,766 points

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
