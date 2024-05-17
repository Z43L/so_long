# ft_compx
## estructuras
```
typedef struct t_map{
	char **map;
	char *line;
	int   x;
	int   y;
	t_player player;
	t_ghost ghost;
	t_comestibles comestibles;
}

```


## funcionamiento
- comprobara que la longitud de cada linea del mapa sea la misma y que si en algun momento cambia retornara 1 y el programa no funcionara y si esta todo bien retornara 0 para ello usaremos gnl para leer cada linea del archivo y haciendo una condicion de que si con ft_strlen es distinto que devuelva 1
## variables
- fd -> archivo con el mapa
-  line -> donde se almacenara el resultado de gnl
## declaracion de la funcion
```
int ft_compx(int fd)
```

