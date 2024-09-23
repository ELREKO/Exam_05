CC = g++
FLAGS = -Wall -Werror -Wextra
SRC = ASpell.cpp ATarget.cpp BrickWall.cpp Dummy.cpp Fireball.cpp Fwoosh.cpp main.cpp Polymorph.cpp Warlock.cpp SpellBook.cpp TargetGenerator.cpp

TARG = PROGRAMM

%o: %.cpp
	$(CC) $(FLAG) -c $< -o$@

OBJ = $(SRC:.cpp=.o)

$(TARG): $(OBJ)
	$(CC) $(FLAGS) -o $(TARG) $(OBJ)

clean: 
	rm -rf $(TARG) $(OBJ)

re: clean $(TARG)

.PHONY: clean re

