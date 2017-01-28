
NAME = GetNextLine

all:	$(NAME)

$(NAME):
	
	gcc -Wextra -Werror -Wall *.c -I . -I ./libft -L./libft -lft
	
hard:	
	./a.out "./unit-test/long_line_three"| cat -e

run:
	./a.out "./unit-test/4-one"| cat -e
	./a.out "./unit-test/4-one-n"| cat -e
	./a.out "./unit-test/4-two"| cat -e
	./a.out "./unit-test/4-three"| cat -e
	./a.out "./unit-test/4-five"| cat -e

	./a.out "./unit-test/8-one"| cat -e
	./a.out "./unit-test/8-one-n"| cat -e
	./a.out "./unit-test/8-two"| cat -e
	./a.out "./unit-test/8-three"| cat -e
	./a.out "./unit-test/8-five"| cat -e

	./a.out "./unit-test/16-one"| cat -e
	./a.out "./unit-test/16-one-n"| cat -e
	./a.out "./unit-test/16-two"| cat -e
	./a.out "./unit-test/16-three"| cat -e
	./a.out "./unit-test/16-five"| cat -e

	./a.out "./unit-test/hello"| cat -e
	./a.out "./unit-test/easy"| cat -e
	./a.out "./unit-test/this_is_a_file"| cat -e
	./a.out "./unit-test/empty"| cat -e
	./a.out "./unit-test/one_blank_line"| cat -e
	./a.out "./unit-test/empty_line_then_char"| cat -e
	./a.out "./unit-test/two_blank_lines"| cat -e
	
	./a.out "./unit-test/libft_catted"| cat -e
	./a.out "./unit-test/moulinetter"| cat -e

	./a.out "./unit-test/factbook"| cat -e
	./a.out "./unit-test/long_lines_same_length"| cat -e

thr:
	./a.out "./unit-test/16-three"
