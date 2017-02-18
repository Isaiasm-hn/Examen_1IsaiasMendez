main:	 Starks.o Lannister.o Targaryen.o f_nobles.o Dothraki.o Guardia.o
	g++ main.o Starks.o Lannister.o Targaryen.o f_nobles.o Dothraki.o Guardia.o -o got
main.o:	main.cpp Starks.h Lannister.h Targaryen.h f_nobles.h Dothraki.h Guardia.h
	g++ -c Starks.cpp Lannister.cpp Targaryen.cpp f_nobles.cpp Dothraki.cpp Guardia.cpp
Stark.o: Starks.cpp Starks.h f_nobles.h
	g++ -c Starks.cpp 
Lannister.o:	Lannister.cpp Lannister.h Guardia.h
	g++ -c Lannister.cpp 
Targaryen.o:	Targaryen.cpp Targaryen.h Dothraki.h
	g++ -c Targaryen.cpp Dothraki.cpp
f_nobles.o:		f_nobles.cpp f_nobles.h
	g++ -c f_nobles.cpp
Dothraki.o:		Dothraki.cpp Dothraki.h
	g++ -c Dothraki.cpp
Guardia.o: 		 Guardia.cpp Guardia.h
	g++ -c Guardia.cpp
	

