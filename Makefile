all: build run

build:
	@g++ src/main.cpp -o RedBox -lraylib -lm -ldl -lpthread -lGL

run:
	@./RedBox