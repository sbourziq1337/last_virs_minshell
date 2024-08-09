// #include "minishell.h"
// #include <stdio.h>
// #include <string.h>

// int	print_last_redirection(const char *input)
// {
// 	int	i;

// 	i = strlen(input) - 1;
// 	while (i >= 0)
// 	{
// 		if (i >= 1 && input[i] == '>' && input[i - 1] == '>')
// 			return (1);
// 		else if (i >= 0 && input[i] == '>')
// 			return (2);
//         i--;
// 	}
// 	return (0);
// }

// int	main(void)
// {
// 	const char *input = "echo >a >> a1 >a2 >> a3 >a4  ";
// 	int result = print_last_redirection(input);

// 	if (result == 1)
// 		printf("The append (>>) is the last redirection\n");
// 	else if (result == 2)
// 		printf("The outfile (>) is the last redirection\n");
// 	else
// 		printf("No redirection found\n");

// 	return (0);
// }