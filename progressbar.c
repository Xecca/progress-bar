/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   progressbar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 00:20:49 by aponomar          #+#    #+#             */
/*   Updated: 2020/01/22 13:48:03 by aponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>	// using for fflush(), printf()
#include <unistd.h> // using for sleep()
#include <string.h>	// using for strncat()

int main()
{
	char str[20] = "wait ";
	char ch = '#';
	for (int i = 0; i <= 100; i++)
	{
		// line output (line recording in buffer)
		printf("\r My progress in C#: %d %% %s", i, str);
		// wait 1 second
		sleep(1);
		// flush (reset) buffer (line appear in console)
		fflush(stdout);
		if (i % 5 == 0 && i != 0)
			strncat(str, &ch, 1);
		if (i == 100)
			printf("\r My progress in C#: Finished! =) "); 
	}

	return 0;
}
