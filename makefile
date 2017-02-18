main: main.o Starks.o Lannister.o Targaryen.o f_nobles.o Dothraki.o Guardia.o
	g++ mainn.o Starks.o Lannister.o Targaryen.o f_nobles.o Dothraki.o Guardia.o -o main
main.o: main.cpp Starks.h Lannister.h Targaryen.h f_nobles.h Dothraki.h Guardia.h
	g++ -c Starks.cpp Lannister.cpp Targaryen.cpp f_nobles.cpp Dothraki.cpp Guardia.cpp
Stark.o: Starks.h Starks.cpp f_noble.h
	g++ -c Starks.cpp f_noble.cpp
Lannister.o: Lannister.h Lannister.cpp Guardia.h
	g++ -c Lannister.cpp Guardia.cpp
Targaryen.o: Targaryen.h Targaryen.cpp Dothraki.h
	g++ -c Targaryen.cpp Dothraki.cpp
f_nobles.o: f_nobles.h f_nobles.cpp
	g++ -c f_nobles.cpp
Dothraki.o: Dothraki.h Dothraki.cpp
	g++ -c Dothraki.cpp
Guardia.o: Guardia.h Guardia.cpp
	g++ -c Guardia.cpp
	

