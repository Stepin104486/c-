all.out: account.cpp account_test.cpp
	g++ $^ -lgtest_main -lgtest -lpthread -o all.out

test:all.out
	./all.out

clean:
	rm *.out