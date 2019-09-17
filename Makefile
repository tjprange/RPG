output: Enemy.o Game.o Item.o main.o Location.o Player.o
	g++ Enemy.o Game.o Item.o main.o Location.o Player.o -o RPG

main.o: main.cpp
	g++ -c main.cpp

Enemy.o: Enemy.cpp
	g++ -c Enemy.cpp

Game.o: Game.cpp
	g++ -c Game.cpp

Item.o: Item.cpp
	g++ -c Item.cpp

Location.o: Location.cpp
	g++ -c Location.cpp

Player.o: Player.cpp
	g++ -c Player.cpp

clean:
	rm *.o RPG




