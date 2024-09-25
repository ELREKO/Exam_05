CC = g++
FLAG = -Wall -Werror -Wextra 
SRC = main.cpp Warlock.cpp

TARG = PROGRAMM

%o: %.cpp
	$(CC) $(FLAG) -c $< -o$@

OBJ = $(SRC:.cpp=.o)

$(TARG): $(OBJ)
	$(CC) $(FLAG) -o $(TARG) $(OBJ)



