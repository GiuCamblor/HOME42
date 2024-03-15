#include<stdio.h>
#include<unistd.h>

int af_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return(i);
}

int charcnt(char *str, char c, char d)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(i < af_strlen(str) - 1)
	{
		if (str[i] == c && !(str[i + 1] == c || str[i + 1] == d))
			j++;
		i++;
	}
	return(j);
}

int main()
{
	char *str;
	char c;
	char d;
	int cnt;

	str = "TAb ARANANIS";
	c = 'N';
	d = 'A';
	cnt = charcnt(str, c, d);
	printf("%i", cnt);
	return(0);
}