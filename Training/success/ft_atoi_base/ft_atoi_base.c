
int	ft_atoi_base (const char *str, int str_base)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	if (str[i] == '-' || str[i] == '+')							
	{
		if (str[i] == '-')
			sign = -1;

		i++;
	}
	

	while (str[i] >= '0' && str[i] <= '9' || str[i] >= 'a' && str[i] <= 'f' || str[i] >= 'A' && str[i] <= 'F')
	{
		if (str[i] >= '0' && str[i] <= '9')
			result = result * str_base + str[i] - '0';
		if (str[i] >= 'a' && str[i] <= 'f')
			result = result * str_base + ((str[i] - 'a') + 10);
		if (str[i] >= 'A' && str[i] <= 'F')
			result = result * str_base + ((str[i] - 'A') + 10);

		i++;	
	}
	return (result * sign);
}
