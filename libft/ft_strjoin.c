/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francflo <francflo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:31:26 by francflo          #+#    #+#             */
/*   Updated: 2024/02/05 14:02:23 by francflo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	size_t	len_resul;
	char	*resul;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	len_resul = len_s1 + len_s2 + 1;
	resul = (char *)ft_malloc(len_resul);
	if (resul == NULL)
	{
		write(stderr, "Error al asignar memoria.\n",
			ft_strlen("Error de memoria\n"));
		return (NULL);
	}
	ft_strlcpy(resul, s1);
	ft_strlcat(resul, s2);
	return (resul);
}
/*int main() {
	const char* cadena1 = "Hola, ";
	const char* cadena2 = "mundo!";
	char* resultado = ft_strjoin(cadena1, cadena2);
	if (resultado != NULL) {
		printf("Resultado: %s\n", resultado);
		free(resultado);
	}
	return (0);
}*/