parsingAndFileIORun: parsingAndFileIO.o
	g++ parsingAndFileIO.o -o parsingAndFileIORun
parsingAndFileIO.o: parsingAndFileIO.cpp
	g++ -c parsingAndFileIO.cpp
clean:
	rm -f *.o
	rm output.txt
	rm parsingAndFileIORun
run: parsingAndFileIORun
	./parsingAndFileIORun
