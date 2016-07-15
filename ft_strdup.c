/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyawilhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 05:40:26 by jyawilhi          #+#    #+#             */
/*   Updated: 2016/07/14 05:46:20 by jyawilhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *str_dup(char const *s)
{
    char *pc = NULL;
    
    if (s != NULL)
    {
        pc = malloc((strlen(s) + 1) * sizeof *pc);
        if (pc != NULL)
        {
            strcpy(pc, s);
        }
    }
    
    return pc;
}

int main(void)
{
    int ret = EXIT_SUCCESS;
    char *pc = NULL;
    
    pc =str_dup("Bienvenue a 42!");
    if (pc != NULL)
    {
        puts(pc);
        free(pc), pc = NULL;
    }
    else
    {
        fprintf(stderr, "Allocation de memoire impossible!\n");
        ret = EXIT_FAILURE;
    }
    
    return ret;
}