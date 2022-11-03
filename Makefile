cc = g++
flags = -o
clean:
	-del *.exe $(objects)

guessNumber:
	$(cc) $(flags) out guess_number.cpp

array_mc:
	$(cc) $(flags) out array_manipulation_challenge.cpp

calculator:
	$(cc) $(flags) out calculator.cpp