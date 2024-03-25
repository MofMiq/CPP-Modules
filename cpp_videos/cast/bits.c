/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bits.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:43:08 by marirodr          #+#    #+#             */
/*   Updated: 2024/03/25 11:53:03 by marirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdint.h>

void dump_32bits_integer(const int n)
{
  printf("[ %d ]\t\t[ ", n);
  for (int i = 31; i >= 0; i--)
  {
    printf("%d", (n >> i) & 1);
    if (i % 8 == 0)
      printf(" ");
  }
  printf(" ]\n");
}

void dump_64bits_double(const double z)
{
  printf("[ %f ]\t[ ", z);
  uint64_t *ptr = (uint64_t*)&z;
  for (int i = 63; i >= 0; i--)
  {
    printf("%llu", (*ptr >> i) & 1);
        if (i % 8 == 0)
          printf(" ");
  }
  printf(" ]\n");

}