/*
 *  Ex3_Reverse_a_sentence_using_recursion
 *
 *  Created on: Mar 13, 2024
 *      Author: Ahmed Nabil
 */

#include<stdio.h>
#include "string.h"

void Revers_a_Sentence_recursion(char sentence[],int n);

int main()
{
	char sent[]="margrop emosewa";
	
	Revers_a_Sentence_recursion(sent,strlen(sent));
}

void Revers_a_Sentence_recursion(char sentence[],int n)
{

	if((n--) > 0)
	{
		printf("%c",sentence[n]);
		Revers_a_Sentence_recursion(sentence,n);
	}
}
