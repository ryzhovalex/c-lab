#include <stdio.h>
#include <stdlib.h>


int main() {
	char color[20];
	char pluralNoun[20];
	char celebrityF[20];
	char celebrityL[20];

	printf("Enter a color: ");
	scanf("%s", color);
	printf("Enter a plural noun: ");
	scanf("%s", pluralNoun);

	// take celebrity first and last name in two words
	printf("Enter a celebrity: ");
	scanf("%s%s", celebrityF, celebrityL); 
	// NOTE: in this case user MUST enter two words
	// LOG: hmm... %s seems like not including whitespace if i enter 'Tom             Hanks' for example, i get 'Tom' and 'Hanks' 
	// ...for 'celebrityF' and 'celebrityL'

	printf("Roses are %s\n", color);
	printf("%s are blue\n", pluralNoun);
	printf("I love %s %s\n", celebrityF, celebrityL);

	return 0;
}