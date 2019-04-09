int main(int argc, char* argv[])
{
	char user_input[100];
/*
other variable definitions and statements
*/
	scanf("%s", user_input); /*getting a string from user*/
	printf(user_input); /*Vulnerable place*/
	return 0;
}
