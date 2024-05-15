/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compbert.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmoren <davmoren@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 21:00:03 by davmoren          #+#    #+#             */
/*   Updated: 2024/05/15 00:42:37 by davmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_get_next_line/get_next_line.h"
#include "libft/libft.h"
#include "so_long.h"
int compber(char *file)
{
    int i;

    i = 0;
    if (!ft_strncmp(".bert", file, 5))
        return 1;
    else
        return 0;
}

int compx(char *file)
{
    int x;

    x = ft_strlen(gnl(file));
    file = open("prueba", O_RDONLY);
	if (file < 0)
	{
		perror("Error opening file");
		return (1);
	}
    char *line;
	while ((line = gnl(file)) != NULL)
    {
        if(!line)
        {
            perror("error leyendo el archivo");
            return (1);
        }
        if (x != ft_strlen(line))
            return 1;
        free(line);
    }
    return (x);
}
int compy(char *file)
{
    int y;
    file = open("prueba", O_RDONLY);
	if (file < 0)
	{
		perror("Error opening file");
		return (1);
	}
    char *line;
	while ((line = gnl(file)) != NULL)
    {
        if(!line)
        {
            perror("error leyendo el archivo");
            return (1);
        }
        y++;
        free(line);
    }
    return y;
}
int mapa(char *file)
{
    file = open("prueba", O_RDONLY);
	if (file < 0)
	{
		perror("Error opening file");
		return (1);
	}
    char *line;
	while ((line = gnl(file)) != NULL)
    {
        if(!line)
        {
            perror("error leyendo el archivo");
            return (1);
        }
        if(line)
        {
            comchar(line);
        }
        free(line);
    }
}

int comchar(char *line)
{
    int i;
    int collectionable;
    
    i = 0;
    struct mapas map;
    while(line[i])
    {
        if(line[i] == map.c)
            collectionable++;
            return collectionable;

        if(line[i] == map.p)
            startposition();

        if(line[i + 1] == map.uno)
        {
            
        }
        if(line[i] == map.cero)
        {
            
        }
    }
    
    
}



int startposition()
{
    
}

