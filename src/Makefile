bcc: 	parser.tab.cpp lex.yy.cpp class.cpp class_defs.h
	g++ --std=c++11 class.cpp parser.tab.cpp lex.yy.cpp -lfl -o bcc
scanner: lex.yy.cpp
	g++ --std=c++11 lex.yy.cpp -lfl -o scanner
parser.tab.cpp: parser.y
	bison -d -o parser.tab.cpp parser.y
lex.yy.cpp: scanner.l parser.tab.hpp
	flex -o lex.yy.cpp scanner.l

.PHONY: clean
clean:
	-@rm -rf parser.tab.cpp parser.tab.hpp lex.yy.cpp bcc 2>/dev/null || true
