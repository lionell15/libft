# **Libft**
## Parte 1
### Funciones de la libc


| Nombre de l función: | memset |
| ------------- | ------------- |
| Prototipo: | void *ft_memset(void *b, int c, size_t len) |
| Ficheros a entregar: | ft_memset.c |
| Parametros: | #1 Puntero para llenar el bloque de memoria.  <br />#2 El valor que desea ajustar. <br /> #3  El número de bytes que se establece en ese valor. |
| Valor de retorno: | Devuelve un puntero a un puntero a la zona de almacenamiento (b). |
| Funciones externas autorizadas: | Ninguna |
| Descripción: | Copia el caracter c (un char sin signo) a los primeros n caracteres de (b). |


| Nombre de la función: | bzero |
| ------------- | ------------- |
| Prototipo: |  void ft_bzero(void *s, size_t n) |
| Ficheros a entregar: | ft_bzero.c |
| Parametros: | #1 Puntero a una cadena para rellenar.<br /> #2 Numero de bytes que se van a poner a cero.|
| Valor de retorno: | No retorna valor. |
| Funciones externas autorizadas: | Ninguna |
| Descripción: | Pone a cero los n primeros bytes de la cadena de bytes s.  |

| Nombre de la función: | memcpy |
| ------------- | ------------- |
| Prototipo: |  void *ft_memcpy(void *dst, const void *src, size_t n) |
| Ficheros a entregar: | ft_memcpy.c |
| Parametros: | #1 Puntero a una cadena de destino.<br /> #2 Puntero a una cadena de origen. <br /> #3 Numero de bytes que se van a copiar.|
| Valor de retorno: | Retorna un puntero a la cadena de caracteres dst |
| Funciones externas autorizadas: | Ninguna |
| Descripción: | Copia n caracteres del area de la memoria de src en el area de la memoria de dst. |

| Nombre de la función: | memccpy |
| ------------- | ------------- |
| Prototipo: |  void *ft_memccpy(void *dst, const void *src, int c, size_t n) |
| Ficheros a entregar: | ft_memccpy.c |
| Parametros: | #1 Puntero a una cadena de destino.<br /> #2 Puntero a una cadena de origen. <br /> #3 Último carácter que se va a copiar.<br /> #4 Numero de bytes que se van a copiar.|
| Valor de retorno: | Devuelve un puntero al siguiente carácter de dst tras c, o NULL si c no estaba en los n primeros caracteres de src. |
| Funciones externas autorizadas: | Ninguna |
| Descripción: | Copia  como mucho n bytes desde el área de memoria src al área de memoria dst, parando cuando se encuentra el carácter c. |

| Nombre de la función: | memmove |
| ------------- | ------------- |
| Prototipo: |  void *ft_memmove(void *dst, const void *src, size_t len) |
| Ficheros a entregar: | ft_memmove.c |
| Parametros: | #1 Puntero a una cadena de destino.<br /> #2 Puntero a una cadena de origen. <br /> #3 Numero de bytes que se copiarán.<br /> |
| Valor de retorno: | Devuelve un puntero a la cadena dst  |
| Funciones externas autorizadas: | Ninguna |
| Descripción: | Copia los primeros n caracteres del objeto apuntado por src al objeto apuntado por dst. Sin embargo, se asegura de que no estén superpuestos. |

| Nombre de la función: | memchr |
| --------------- | ------------- |
| Prototipo: | void *ft_memchr(const void *s, int c, size_t n) |
| Ficheros a entregar: | ft_memchr.c |
| Parametros : | #1 |
| Valor de retorno: | |
| Funciones externas autorizadas: | Ninguna |
| Descripción: | |

