
#include <stdio.h>
int main()
{
	int fingerprint_match, retinal_match, access_card_valid;

	printf("Enter Fingerprint Match(0 or 1) :  ");
	scanf("%d", &fingerprint_match);

	printf("Enter Retinal match(0 or 1) :  ");
	scanf("%d", &retinal_match);

	printf("Enter Access Card Validity(0 or1) :  ");
	scanf("%d", &access_card_valid);

	if
		((fingerprint_match && retinal_match) || (fingerprint_match && access_card_valid) || (retinal_match && access_card_valid))
	{
		printf("Access Granted");
	}
	else
	{
		printf("Access Denied");
	}

	return 0;
}

