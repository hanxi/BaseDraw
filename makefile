
test: Line.h Line.cpp InitWindow.h InitWindow.cpp Dot.h Dot.cpp test.cpp
	g++ -lglut Dot.cpp InitWindow.cpp Line.cpp test.cpp -o test
	
clean:
		rm *.o
