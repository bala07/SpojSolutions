//DONE

#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

#define MAX_LEN 202

long long MOD = 100000;
long long dp[MAX_LEN][MAX_LEN];

long long countValidBracketSequences(char[], int);
long long countValidWholeBracketSequences(char[], int, int);
long long possibleValidPairs(char, char);
bool isOpenBracket(char);
bool isValidBracketPair(char, char);
void printAnswer(long long);
long long mod(long long);

int main() 
{
	int length = 0;
	char sequence[MAX_LEN+10];

	scanf("%d",&length);
	scanf("%s",sequence);

	long long result = countValidBracketSequences(sequence, length);

	printAnswer(result);

	return 0;
}

void printAnswer(long long result)
{
	if(result < MOD)
	{
		printf("%lld\n", result);
	}
	else
	{
		printf("%05lld\n", result - MOD);
	}
}

long long countValidBracketSequences(char sequence[], int length)
{
	for(int i=0; i<length-1; i++)
	{
		dp[i][i+1] = countValidWholeBracketSequences(sequence, i, i+1);
	}

	for(int len=4; len<=length; len += 2)
	{
		for(int start=0; length-start>=len; ++start)
		{
			int end = start + len - 1;
			dp[start][end] = 0;

			for(int index=start+1; index<end; index+=2)
			{
				long long value1 = possibleValidPairs(sequence[start], sequence[index]);
				long long value2 = (start+1 > index-1) ? 1 : dp[start+1][index-1];
				long long value3 = dp[index+1][end];

				dp[start][end] += mod(value1 * value2 * value3);
			}

			long long validWholeBracketSequences = countValidWholeBracketSequences(sequence, start, end);

			dp[start][end] += mod(validWholeBracketSequences);
		}
	}

	return mod(dp[0][length-1]);
}

long long countValidWholeBracketSequences(char sequence[], int start, int end)
{
	int length = end-start+1;
	long long result = (length > 2 ? dp[start+1][end-1] : 1) * possibleValidPairs(sequence[start], sequence[end]);

	return result;
}

bool isOpenBracket(char bracket)
{
	return (bracket == '(' || bracket == '{' || bracket == '[');
}

bool isValidBracketPair(char bracket1, char bracket2)
{
	return (bracket1 == '(' && bracket2 == ')') ||
		   (bracket1 == '{' && bracket2 == '}') ||
		   (bracket1 == '[' && bracket2 == ']');
}

long long possibleValidPairs(char bracket1, char bracket2)
{

	long long result = 1;

	if(bracket1 == '?' || bracket2 == '?')
	{
		if(bracket1 == '?' && bracket2 == '?')
		{
			result = 3;
		}
		else if((bracket1 == '?' && isOpenBracket(bracket2)) || (!isOpenBracket(bracket1) && bracket2 == '?'))
		{
			result = 0;
		}
	}
	else if(!isValidBracketPair(bracket1, bracket2))
	{
		result = 0;
	}

	// printf("bracket1=%c, bracket=%c, result=%d\n", bracket1, bracket2, result);

	return result;
}

long long mod(long long value)
{
	if(value >= MOD)
	{
		return MOD + value % MOD;
	}

	return value;
}