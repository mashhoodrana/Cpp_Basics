#include <iostream>
#include <string>

using namespace std;

struct Player
{
   int distance;
   int min;
   int sec;
};

int main()
{
   Player p1, p2;
   float time1, time2;

    //player-1
    cout<<"Enter the distance you covered(in Km): ";
    cin>>p1.distance;
    cout<<"Enter the minutes and seconds: ";
    cin>>p1.min>>p1.sec;
 

    //player-2
    cout<<"Enter the distance you covered(in Km)-2: ";
    cin>>p2.distance;
    cout<<"Enter the minutes and seconds: ";
    cin>>p2.min>>p2.sec;

    time1=(p1.min*60+p1.sec)/p1.distance;
	time2=(p2.min*60+p2.sec)/p2.distance;

    cout<<"The record of winner player: "<<endl;
	if(time1<time2)
	{
		cout<<"Player 1 distance: "<<p1.distance<<" miles in ";
		cout<<p1.min<<" minutes, "<<p1.sec<<" seconds";
	}
	
	else{
		cout<<"Player 2 distance: "<<p2.distance<<" miles in ";
		cout<<p2.min<<" minutes, "<<p2.sec<<" seconds";
	}
	
	return 0;
}

 