#include "get_next_line.h"
#include <stdio.h>


int main(int argc, char **argv)
{
	char *arr;
	int ret;
	int fd;

	fd = argc;
	printf("\n_____%s______\n",argv[1]);
	fd = open(argv[1], O_RDONLY);

	for (int i = 0; i <4; i++)
	{
		ret = get_next_line(fd, &arr);
		printf("1M_ret: %d\n", ret);
		printf("1M_arr: <%s>\n", arr);
		printf("\n____________________\n\n\n");
	}
}