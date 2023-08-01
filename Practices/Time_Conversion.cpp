#include <iostream>
#include <string>
using namespace std;
int main()
{
	string time, time_2;
	getline(cin,time);
	int length = time.size(), hour;
	
	for (int i = 0; i < length; i++)
	{
		if (time[i] == 'P')
		{
			for (int j = 0; time[j] != ':'; j++)
			{
				time_2 += time[j];
			}
			
			hour = stoi(time_2);
			if (hour != 12)
			{
				hour += 12;
				time_2 = to_string(hour);
			}
			time.erase(8,2);
			time.erase(0,2);
			time_2 += time;
			cout << time_2 << endl;
			return 0;
		}
		else
		{
			if (time[i] == 'A')
			{
				time.erase(8, 2);
				
				for (int j = 0; time[j] != ':'; j++)
				{
					time_2 += time[j];
				}
				if (time_2 == "12")
				{
					time_2 = "00";
					time.erase(0,2);
					time_2 += time;
					time = time_2;
				}
				
				cout << time << endl;
				return 0;
			}
		}
	}
	return 0;
}