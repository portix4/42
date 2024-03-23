/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pportill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 15:36:30 by pportill          #+#    #+#             */
/*   Updated: 2024/02/21 13:07:08 by pportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
		return (0);
	while (*s1 && *s2 && n > 0)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
		n--;
	}
	if (n > 0)
		return (*s1 - *s2);
	return (0);
}
/*int main() {
	int a;
   int b;
   char c[]= "H";
   char d[]= "Hala";
    a = ft_strncmp(c,d,6);
    printf("Resultado mi funcion: %d\n", a);
    b = strncmp(c,d,6);
    printf("Resultado funcion: %d", b);
    return 0;}
*/
