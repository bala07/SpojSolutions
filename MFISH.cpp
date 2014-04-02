// DONE

#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<algorithm>
#include<cmath>

using namespace std;

#define MAX_LEN 100000

int getMaxFishes(int, int, int, int);

struct ship
{
	int anchorSpot;
	int length;

	ship(int anchotSpot, int length) {
		this->anchorSpot = anchorSpot;
		this->length = length;
	}

	ship()
	{
		anchorSpot = -1, length = -1;
	}
};

bool cmp(ship ship1, ship ship2)
{
	if(ship1.anchorSpot < ship2.anchorSpot)
	{
		return true;
	}

	return false;
}

int fields[MAX_LEN+10];
int sum[MAX_LEN+10];
int dp[MAX_LEN+10];
ship ships[MAX_LEN+10];

int main()
{
	int totalFields, totalShips;
	for(int i=0; i<totalFields; ++i)
	{
		dp[i] = -1;
	}

	scanf("%d", &totalFields);
	for(int i=0; i<totalFields; ++i) 
	{
		scanf("%d", &fields[i]);
		sum[i] = ((i==0) ? fields[0] : sum[i-1] + fields[i]);
	}

	scanf("%d", &totalShips);
	for(int i=0; i<totalShips; ++i)
	{
		scanf("%d", &ships[i].anchorSpot);
		scanf("%d", &ships[i].length);
		ships[i].anchorSpot--;
	}

	sort(ships, ships + totalShips, cmp);

	int maxFishesCaught = getMaxFishes(0, 0, totalFields, totalShips);

	printf("%d\n", maxFishesCaught);

	return 0;
}

int getMaxFishes(int fieldIdx, int shipIdx, int totalFields, int totalShips) 
{
	if(fieldIdx >= totalFields || shipIdx >= totalShips)
	{
		return 0;
	}

	if(dp[fieldIdx] != -1)
	{
		return dp[fieldIdx];
	}

	int maxFishesCaught = 0;
	ship curShip = ships[shipIdx];

	int leftMosPosForShip = max(fieldIdx, curShip.anchorSpot - curShip.length + 1);
	int rightMostPosForShip = min(curShip.anchorSpot + curShip.length - 1, (shipIdx == (totalShips-1) ? totalFields - 1 : ships[shipIdx+1].anchorSpot - 1));

	if(rightMostPosForShip - leftMosPosForShip + 1 < curShip.length)
	{
		return -1000000;
	}

	for(int curPos = leftMosPosForShip; curPos + curShip.length - 1 <= rightMostPosForShip; ++curPos)
	{
		int fishesForCurShip = sum[curPos + curShip.length-1] - (curPos == 0 ? 0 : sum[curPos-1]);
		maxFishesCaught = max(maxFishesCaught, fishesForCurShip + getMaxFishes(curPos + curShip.length, shipIdx + 1, totalFields, totalShips));
	}

	dp[fieldIdx] = maxFishesCaught;

	return dp[fieldIdx];
}



