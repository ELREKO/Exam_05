CC = g++
FLAG = -Wall -Werror -Wextra 
SRC = main.cpp Warlock.cpp ASpell.cpp ATarget.cpp Dummy.cpp Fwoosh.cpp

TARG = PROGRAMM

%o: %.cpp
	$(CC) $(FLAG) -c $< -o$@

OBJ = $(SRC:.cpp=.o)

$(TARG): $(OBJ)
	$(CC) $(FLAG) -o $(TARG) $(OBJ)

clean: 
	rm -fr $(OBJ) $(TARG)
