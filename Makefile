SOURCE=$(wildcard *.c)

run: $(SOURCE) ./test/libft.a
	@gcc $^ -o $@ -L./test -lft -Werror -Wextra -Wall
	./run

copy:
	cp -r ../$(LIB) .
	mv ./$(LIB) ./test

build:
	cd ./test && $(MAKE);

bonus:
	cd ./test && $(MAKE) bonus;

clean:
	cd ./test && $(MAKE) fclean;

fclean:
	rm -fr test;

push:
	set -e
	git add .
	git commit -m "$(M)"
	git push origin master