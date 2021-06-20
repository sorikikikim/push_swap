
int		print_error(char *msg)
{
	ft_putstr_fd("Error\n", 1);
	ft_putendl_fd(msg, 2);
	return (-1);
}
